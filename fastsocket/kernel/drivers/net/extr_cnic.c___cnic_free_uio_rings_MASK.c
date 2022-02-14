
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_uio_dev {int * l2_ring; int l2_ring_map; int l2_ring_size; TYPE_1__* pdev; int * l2_buf; int l2_buf_map; int l2_buf_size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct cnic_uio_dev *VAR_0)
{
 if (VAR_0->l2_buf) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->l2_buf_size,
      VAR_0->l2_buf, VAR_0->l2_buf_map);
  VAR_0->l2_buf = ((void*)0);
 }

 if (VAR_0->l2_ring) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->l2_ring_size,
      VAR_0->l2_ring, VAR_0->l2_ring_map);
  VAR_0->l2_ring = ((void*)0);
 }

}
