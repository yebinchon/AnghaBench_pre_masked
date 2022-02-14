
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgl_handle {int dummy; } ;
struct TYPE_2__ {int icds_per_ctrl; int ios_per_ctrl; } ;
struct beiscsi_hba {size_t eh_sgl_free_index; TYPE_1__ params; int eh_sgl_hndl_avbl; struct sgl_handle** eh_sgl_hndl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,size_t) ;

void
FUNC_1(struct beiscsi_hba *VAR_3, struct sgl_handle *VAR_4)
{

 FUNC_0(VAR_3, VAR_1, VAR_0,
      "BM_%d : In  free_mgmt_sgl_handle,"
      "eh_sgl_free_index=%d\n",
      VAR_3->eh_sgl_free_index);

 if (VAR_3->eh_sgl_hndl_base[VAR_3->eh_sgl_free_index]) {




  FUNC_0(VAR_3, VAR_2, VAR_0,
       "BM_%d : Double Free in eh SGL ,"
       "eh_sgl_free_index=%d\n",
       VAR_3->eh_sgl_free_index);
  return;
 }
 VAR_3->eh_sgl_hndl_base[VAR_3->eh_sgl_free_index] = VAR_4;
 VAR_3->eh_sgl_hndl_avbl++;
 if (VAR_3->eh_sgl_free_index ==
     (VAR_3->params.icds_per_ctrl - VAR_3->params.ios_per_ctrl - 1))
  VAR_3->eh_sgl_free_index = 0;
 else
  VAR_3->eh_sgl_free_index++;
}
