
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_rq_buf {int os_buf; int len; int dma_addr; } ;
struct vnic_rq {int vdev; } ;
struct enic {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct enic* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vnic_rq *VAR_1, struct vnic_rq_buf *VAR_2)
{
 struct enic *VAR_3 = FUNC_2(VAR_1->vdev);

 if (!VAR_2->os_buf)
  return;

 FUNC_1(VAR_3->pdev, VAR_2->dma_addr,
  VAR_2->len, VAR_0);
 FUNC_0(VAR_2->os_buf);
}
