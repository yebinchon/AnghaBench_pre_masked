
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {int sdma_descq_cnt; scalar_t__ sdma_descq_phys; int * sdma_descq; TYPE_2__* dd; scalar_t__* sdma_head_dma; scalar_t__ sdma_head_phys; } ;
struct TYPE_4__ {TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,scalar_t__*,int ) ;
 int FUNC_1 (int *,int,void*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct qib_pportdata *VAR_4)
{
 VAR_4->sdma_descq_cnt = VAR_3;
 if (!VAR_4->sdma_descq_cnt)
  VAR_4->sdma_descq_cnt = 256;


 VAR_4->sdma_descq = FUNC_0(&VAR_4->dd->pcidev->dev,
  VAR_4->sdma_descq_cnt * sizeof(u64[2]), &VAR_4->sdma_descq_phys,
  VAR_1);

 if (!VAR_4->sdma_descq) {
  FUNC_2(VAR_4->dd,
   "failed to allocate SendDMA descriptor FIFO memory\n");
  goto bail;
 }


 VAR_4->sdma_head_dma = FUNC_0(&VAR_4->dd->pcidev->dev,
  VAR_2, &VAR_4->sdma_head_phys, VAR_1);
 if (!VAR_4->sdma_head_dma) {
  FUNC_2(VAR_4->dd,
   "failed to allocate SendDMA head memory\n");
  goto cleanup_descq;
 }
 VAR_4->sdma_head_dma[0] = 0;
 return 0;

cleanup_descq:
 FUNC_1(&VAR_4->dd->pcidev->dev,
  VAR_4->sdma_descq_cnt * sizeof(u64[2]), (void *)VAR_4->sdma_descq,
  VAR_4->sdma_descq_phys);
 VAR_4->sdma_descq = ((void*)0);
 VAR_4->sdma_descq_phys = 0;
bail:
 VAR_4->sdma_descq_cnt = 0;
 return -VAR_0;
}
