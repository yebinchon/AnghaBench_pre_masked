
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq_buf {struct fc_frame* os_buf; int len; int dma_addr; } ;
struct vnic_wq {int vdev; } ;
struct fnic {int pdev; } ;
struct fc_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct fnic* FUNC_3 (int ) ;

void FUNC_4(struct vnic_wq *VAR_1, struct vnic_wq_buf *VAR_2)
{
 struct fc_frame *VAR_3 = VAR_2->os_buf;
 struct fnic *VAR_4 = FUNC_3(VAR_1->vdev);

 FUNC_2(VAR_4->pdev, VAR_2->dma_addr,
    VAR_2->len, VAR_0);

 FUNC_0(FUNC_1(VAR_3));
 VAR_2->os_buf = ((void*)0);
}
