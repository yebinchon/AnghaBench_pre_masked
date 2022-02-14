
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct emac_instance {int * tah_dev; } ;


 struct emac_instance* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct emac_instance *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->tah_dev != ((void*)0);
}
