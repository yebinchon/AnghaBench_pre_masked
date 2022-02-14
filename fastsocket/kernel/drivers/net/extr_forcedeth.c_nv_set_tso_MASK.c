
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fe_priv {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_1(VAR_2);

 if ((VAR_4->driver_data & VAR_0))
  return FUNC_0(VAR_2, VAR_3);
 else
  return -VAR_1;
}
