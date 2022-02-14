
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int dev_addr; int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 FUNC_0("%s: MAC %pM, IRQ %u\n", VAR_0->name, VAR_0->dev_addr, VAR_0->irq);
}
