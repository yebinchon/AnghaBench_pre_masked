
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wrb_handle {int dummy; } ;
struct hwi_wrb_context {size_t free_index; int wrb_handles_available; struct wrb_handle** pwrb_handle_base; } ;
struct TYPE_2__ {int wrbs_per_cxn; } ;
struct beiscsi_hba {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,char*,struct wrb_handle*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct beiscsi_hba *VAR_3, struct hwi_wrb_context *VAR_4,
  struct wrb_handle *VAR_5)
{
 VAR_4->pwrb_handle_base[VAR_4->free_index] = VAR_5;
 VAR_4->wrb_handles_available++;
 if (VAR_4->free_index == (VAR_3->params.wrbs_per_cxn - 1))
  VAR_4->free_index = 0;
 else
  VAR_4->free_index++;

 FUNC_0(VAR_3, VAR_2,
      VAR_1 | VAR_0,
      "BM_%d : FREE WRB: pwrb_handle=%p free_index=0x%x"
      "wrb_handles_available=%d\n",
      VAR_5, VAR_4->free_index,
      VAR_4->wrb_handles_available);
}
