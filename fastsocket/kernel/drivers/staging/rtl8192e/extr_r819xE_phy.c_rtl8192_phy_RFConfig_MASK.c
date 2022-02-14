
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int rf_chip; } ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;




 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

RT_STATUS FUNC_3(struct net_device* VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_2(VAR_2);
 RT_STATUS VAR_4 = VAR_1;
 switch(VAR_3->rf_chip)
 {
  case 131:

   break;
  case 130:
   VAR_4 = FUNC_0(VAR_2);
   break;

  case 129:
   break;
  case 128:

  break;

  default:
   FUNC_1(VAR_0, "error chip id\n");
   break;
 }
 return VAR_4;
}
