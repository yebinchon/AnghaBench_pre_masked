
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct ctcm_priv {int tbusy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct net_device *VAR_0)
{
 FUNC_0(VAR_0);
 return FUNC_1(0,
   &(((struct ctcm_priv *)VAR_0->ml_priv)->tbusy));
}
