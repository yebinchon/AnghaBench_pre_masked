
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipath_sdma_desc {int dummy; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct ipath_devdata {int ipath_sdma_descq_cnt; scalar_t__ ipath_sdma_descq_phys; int * ipath_sdma_descq; TYPE_1__* pcidev; int ipath_sdma_vl15_count; TYPE_2__ ipath_sdma_vl15_timer; scalar_t__* ipath_sdma_head_dma; scalar_t__ ipath_sdma_head_phys; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int *,int,void*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct ipath_devdata*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct ipath_devdata *VAR_5)
{
 int VAR_6 = 0;


 VAR_5->ipath_sdma_descq = FUNC_1(&VAR_5->pcidev->dev,
  VAR_3, &VAR_5->ipath_sdma_descq_phys, VAR_1);

 if (!VAR_5->ipath_sdma_descq) {
  FUNC_4(VAR_5, "failed to allocate SendDMA descriptor "
   "FIFO memory\n");
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_5->ipath_sdma_descq_cnt =
  VAR_3 / sizeof(struct ipath_sdma_desc);


 VAR_5->ipath_sdma_head_dma = FUNC_1(&VAR_5->pcidev->dev,
  VAR_2, &VAR_5->ipath_sdma_head_phys, VAR_1);
 if (!VAR_5->ipath_sdma_head_dma) {
  FUNC_4(VAR_5, "failed to allocate SendDMA head memory\n");
  VAR_6 = -VAR_0;
  goto cleanup_descq;
 }
 VAR_5->ipath_sdma_head_dma[0] = 0;

 FUNC_3(&VAR_5->ipath_sdma_vl15_timer);
 VAR_5->ipath_sdma_vl15_timer.function = VAR_4;
 VAR_5->ipath_sdma_vl15_timer.data = (unsigned long)VAR_5;
 FUNC_0(&VAR_5->ipath_sdma_vl15_count, 0);

 goto done;

cleanup_descq:
 FUNC_2(&VAR_5->pcidev->dev, VAR_3,
  (void *)VAR_5->ipath_sdma_descq, VAR_5->ipath_sdma_descq_phys);
 VAR_5->ipath_sdma_descq = ((void*)0);
 VAR_5->ipath_sdma_descq_phys = 0;
done:
 return VAR_6;
}
