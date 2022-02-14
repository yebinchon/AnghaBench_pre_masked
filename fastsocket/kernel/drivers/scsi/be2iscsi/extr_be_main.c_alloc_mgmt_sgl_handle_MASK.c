
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgl_handle {int dummy; } ;
struct TYPE_2__ {int icds_per_ctrl; int ios_per_ctrl; } ;
struct beiscsi_hba {size_t eh_sgl_alloc_index; TYPE_1__ params; scalar_t__ eh_sgl_hndl_avbl; struct sgl_handle** eh_sgl_hndl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,size_t,size_t) ;

__attribute__((used)) static struct sgl_handle *FUNC_1(struct beiscsi_hba *VAR_2)
{
 struct sgl_handle *VAR_3;

 if (VAR_2->eh_sgl_hndl_avbl) {
  VAR_3 = VAR_2->eh_sgl_hndl_base[VAR_2->eh_sgl_alloc_index];
  VAR_2->eh_sgl_hndl_base[VAR_2->eh_sgl_alloc_index] = ((void*)0);
  FUNC_0(VAR_2, VAR_1, VAR_0,
       "BM_%d : mgmt_sgl_alloc_index=%d=0x%x\n",
       VAR_2->eh_sgl_alloc_index,
       VAR_2->eh_sgl_alloc_index);

  VAR_2->eh_sgl_hndl_avbl--;
  if (VAR_2->eh_sgl_alloc_index ==
      (VAR_2->params.icds_per_ctrl - VAR_2->params.ios_per_ctrl -
       1))
   VAR_2->eh_sgl_alloc_index = 0;
  else
   VAR_2->eh_sgl_alloc_index++;
 } else
  VAR_3 = ((void*)0);
 return VAR_3;
}
