
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;


 struct net_device* FUNC_0 (int,char const*,int ) ;
 int VAR_0 ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

struct ipoib_dev_priv *FUNC_2(const char *VAR_1)
{
 struct net_device *VAR_2;

 VAR_2 = FUNC_0((int) sizeof (struct ipoib_dev_priv), VAR_1,
      VAR_0);
 if (!VAR_2)
  return ((void*)0);

 return FUNC_1(VAR_2);
}
