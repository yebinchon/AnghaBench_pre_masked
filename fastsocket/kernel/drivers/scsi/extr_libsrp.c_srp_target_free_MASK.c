
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target {int iu_queue; int srp_iu_size; int rx_ring_size; int rx_ring; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct srp_target *VAR_0)
{
 FUNC_1(VAR_0->dev, VAR_0->rx_ring, VAR_0->rx_ring_size,
        VAR_0->srp_iu_size);
 FUNC_0(&VAR_0->iu_queue);
}
