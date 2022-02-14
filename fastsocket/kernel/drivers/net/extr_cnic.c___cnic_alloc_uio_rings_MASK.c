
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cnic_uio_dev {int l2_ring_size; int l2_buf_size; void* l2_buf; int l2_buf_map; TYPE_2__* pdev; void* l2_ring; int l2_ring_map; TYPE_1__* dev; } ;
struct cnic_local {int l2_rx_ring_size; int l2_single_buf_size; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct cnic_uio_dev*) ;
 void* FUNC_2 (int *,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct cnic_uio_dev *VAR_4, int VAR_5)
{
 struct cnic_local *VAR_6 = VAR_4->dev->cnic_priv;

 if (VAR_4->l2_ring)
  return 0;

 VAR_4->l2_ring_size = VAR_5 * VAR_0;
 VAR_4->l2_ring = FUNC_2(&VAR_4->pdev->dev, VAR_4->l2_ring_size,
        &VAR_4->l2_ring_map,
        VAR_2 | VAR_3);
 if (!VAR_4->l2_ring)
  return -VAR_1;

 VAR_4->l2_buf_size = (VAR_6->l2_rx_ring_size + 1) * VAR_6->l2_single_buf_size;
 VAR_4->l2_buf_size = FUNC_0(VAR_4->l2_buf_size);
 VAR_4->l2_buf = FUNC_2(&VAR_4->pdev->dev, VAR_4->l2_buf_size,
       &VAR_4->l2_buf_map,
       VAR_2 | VAR_3);
 if (!VAR_4->l2_buf) {
  FUNC_1(VAR_4);
  return -VAR_1;
 }

 return 0;

}
