
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct ctcm_priv {int tbusy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0)
{
 FUNC_0(0, &(((struct ctcm_priv *)VAR_0->ml_priv)->tbusy));
 FUNC_1(VAR_0);
}
