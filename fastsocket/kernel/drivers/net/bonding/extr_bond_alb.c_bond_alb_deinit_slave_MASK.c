
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int dummy; } ;
struct TYPE_2__ {int * next_rx_slave; scalar_t__ rlb_enabled; } ;
struct bonding {int slave_cnt; TYPE_1__ alb_info; } ;


 int FUNC_0 (struct bonding*,struct slave*) ;
 int FUNC_1 (struct bonding*,struct slave*) ;
 int FUNC_2 (struct bonding*,struct slave*,int ) ;

void FUNC_3(struct bonding *VAR_0, struct slave *VAR_1)
{
 if (VAR_0->slave_cnt > 1) {
  FUNC_0(VAR_0, VAR_1);
 }

 FUNC_2(VAR_0, VAR_1, 0);

 if (VAR_0->alb_info.rlb_enabled) {
  VAR_0->alb_info.next_rx_slave = ((void*)0);
  FUNC_1(VAR_0, VAR_1);
 }
}
