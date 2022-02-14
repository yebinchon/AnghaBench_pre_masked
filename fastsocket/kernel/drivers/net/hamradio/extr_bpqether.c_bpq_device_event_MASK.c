
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int * FUNC_5 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_2,unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;

 if (FUNC_5(VAR_5) != &VAR_1)
  return VAR_0;

 if (!FUNC_4(VAR_5))
  return VAR_0;

 switch (VAR_3) {
 case 128:
  if (FUNC_1(VAR_5) == ((void*)0))
   FUNC_2(VAR_5);
  break;

 case 130:
  if ((VAR_5 = FUNC_1(VAR_5)) != ((void*)0))
   FUNC_3(VAR_5);
  break;

 case 129:
  if ((VAR_5 = FUNC_1(VAR_5)) != ((void*)0))
   FUNC_0(VAR_5);
  break;
 default:
  break;
 }

 return VAR_0;
}
