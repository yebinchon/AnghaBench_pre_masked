
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (struct jme_adapter*,int ) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct jme_adapter *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1);

 FUNC_0(VAR_5, VAR_6);

 return VAR_0;
}
