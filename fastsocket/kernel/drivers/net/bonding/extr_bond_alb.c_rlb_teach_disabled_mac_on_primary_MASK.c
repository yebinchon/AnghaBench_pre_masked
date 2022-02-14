
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int primary_is_promisc; scalar_t__ rlb_promisc_timeout_counter; } ;
struct bonding {TYPE_2__* curr_active_slave; TYPE_1__ alb_info; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct bonding *VAR_0, u8 VAR_1[])
{
 if (!VAR_0->curr_active_slave) {
  return;
 }

 if (!VAR_0->alb_info.primary_is_promisc) {
  if (!FUNC_1(VAR_0->curr_active_slave->dev, 1))
   VAR_0->alb_info.primary_is_promisc = 1;
  else
   VAR_0->alb_info.primary_is_promisc = 0;
 }

 VAR_0->alb_info.rlb_promisc_timeout_counter = 0;

 FUNC_0(VAR_0->curr_active_slave, VAR_1);
}
