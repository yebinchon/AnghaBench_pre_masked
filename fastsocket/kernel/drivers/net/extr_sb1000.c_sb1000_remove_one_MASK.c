
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct net_device {int mem_start; int base_addr; } ;


 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct pnp_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->base_addr, 16);
 FUNC_2(VAR_1->mem_start, 16);
 FUNC_0(VAR_1);
}
