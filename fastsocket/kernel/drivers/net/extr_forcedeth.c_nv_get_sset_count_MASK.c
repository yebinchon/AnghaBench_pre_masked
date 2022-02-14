
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_10, int VAR_11)
{
 struct fe_priv *VAR_12 = FUNC_0(VAR_10);

 switch (VAR_11) {
 case 128:
  if (VAR_12->driver_data & VAR_3)
   return VAR_9;
  else
   return VAR_8;
 case 129:
  if (VAR_12->driver_data & VAR_2)
   return VAR_7;
  else if (VAR_12->driver_data & VAR_1)
   return VAR_6;
  else if (VAR_12->driver_data & VAR_0)
   return VAR_5;
  else
   return 0;
 default:
  return -VAR_4;
 }
}
