
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {scalar_t__ mca_slot; } ;
struct net_device {int base_addr; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 struct net_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{





 FUNC_0(VAR_1->irq, ((void*)0));
 FUNC_3(VAR_1->base_addr, VAR_0);
}
