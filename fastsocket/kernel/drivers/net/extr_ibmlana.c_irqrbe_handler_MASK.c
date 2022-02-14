
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ base_addr; } ;
struct TYPE_3__ {int rrastart; } ;
typedef TYPE_1__ ibmlana_priv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 ibmlana_priv *VAR_3 = FUNC_0(VAR_2);



 FUNC_1(VAR_3->rrastart, VAR_2->base_addr + VAR_0);
 FUNC_1(VAR_3->rrastart, VAR_2->base_addr + VAR_1);
}
