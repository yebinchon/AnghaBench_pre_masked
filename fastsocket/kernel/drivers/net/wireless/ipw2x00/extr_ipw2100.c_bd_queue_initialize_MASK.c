
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int net_dev; } ;
struct ipw2100_bd_queue {scalar_t__ next; scalar_t__ oldest; scalar_t__ entries; scalar_t__ nic; int drv; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ipw2100_priv *VAR_0,
    struct ipw2100_bd_queue *VAR_1, u32 VAR_2, u32 VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 FUNC_0("enter\n");

 FUNC_0("initializing bd queue at virt=%p, phys=%08x\n", VAR_1->drv,
         (u32) VAR_1->nic);

 FUNC_1(VAR_0->net_dev, VAR_2, VAR_1->nic);
 FUNC_1(VAR_0->net_dev, VAR_3, VAR_1->entries);
 FUNC_1(VAR_0->net_dev, VAR_4, VAR_1->oldest);
 FUNC_1(VAR_0->net_dev, VAR_5, VAR_1->next);

 FUNC_0("exit\n");
}
