
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgl_handle {int dummy; } ;
struct TYPE_2__ {int ios_per_ctrl; } ;
struct beiscsi_hba {size_t io_sgl_free_index; TYPE_1__ params; int io_sgl_hndl_avbl; struct sgl_handle** io_sgl_hndl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,size_t,...) ;

__attribute__((used)) static void
FUNC_1(struct beiscsi_hba *VAR_2, struct sgl_handle *VAR_3)
{
 FUNC_0(VAR_2, VAR_1, VAR_0,
      "BM_%d : In free_,io_sgl_free_index=%d\n",
      VAR_2->io_sgl_free_index);

 if (VAR_2->io_sgl_hndl_base[VAR_2->io_sgl_free_index]) {




   FUNC_0(VAR_2, VAR_1, VAR_0,
        "BM_%d : Double Free in IO SGL io_sgl_free_index=%d,"
        "value there=%p\n", VAR_2->io_sgl_free_index,
        VAR_2->io_sgl_hndl_base
        [VAR_2->io_sgl_free_index]);
  return;
 }
 VAR_2->io_sgl_hndl_base[VAR_2->io_sgl_free_index] = VAR_3;
 VAR_2->io_sgl_hndl_avbl++;
 if (VAR_2->io_sgl_free_index == (VAR_2->params.ios_per_ctrl - 1))
  VAR_2->io_sgl_free_index = 0;
 else
  VAR_2->io_sgl_free_index++;
}
