
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {void (* adjust_state ) (struct net_device*) ;int state_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct phy_device *VAR_2,
  void (*VAR_3)(struct net_device *))
{
 VAR_2->adjust_state = VAR_3;

 FUNC_0(&VAR_2->state_queue, VAR_1);
 FUNC_1(&VAR_2->state_queue, VAR_0);
}
