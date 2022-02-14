
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target {size_t srp_iu_size; size_t rx_ring_size; int rx_ring; struct device* dev; int iu_queue; int cmd_queue; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,struct srp_target*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (struct device*,size_t,size_t) ;
 int FUNC_5 (struct device*,int ,size_t,size_t) ;

int FUNC_6(struct srp_target *VAR_1, struct device *VAR_2,
       size_t VAR_3, size_t VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->cmd_queue);

 VAR_1->dev = VAR_2;
 FUNC_1(VAR_1->dev, VAR_1);

 VAR_1->srp_iu_size = VAR_4;
 VAR_1->rx_ring_size = VAR_3;
 VAR_1->rx_ring = FUNC_4(VAR_1->dev, VAR_3, VAR_4);
 if (!VAR_1->rx_ring)
  return -VAR_0;
 VAR_5 = FUNC_3(&VAR_1->iu_queue, VAR_3, VAR_1->rx_ring);
 if (VAR_5)
  goto free_ring;

 return 0;

free_ring:
 FUNC_5(VAR_1->dev, VAR_1->rx_ring, VAR_3, VAR_4);
 return -VAR_0;
}
