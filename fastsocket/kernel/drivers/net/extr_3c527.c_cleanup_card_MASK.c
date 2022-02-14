
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; } ;
struct mc32_local {unsigned int slot; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int *) ;
 struct mc32_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct mc32_local *VAR_2 = FUNC_3(VAR_1);
 unsigned VAR_3 = VAR_2->slot;
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, ((void*)0));
 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_4(VAR_1->base_addr, VAR_0);
}
