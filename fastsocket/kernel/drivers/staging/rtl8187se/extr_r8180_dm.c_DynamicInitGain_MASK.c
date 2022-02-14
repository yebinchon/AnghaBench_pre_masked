
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int rf_chip; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;


 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(
 struct net_device *VAR_0
 )
{
 struct r8180_priv *VAR_1 = FUNC_1(VAR_0);

 switch(VAR_1->rf_chip)
 {
  case 129:
  case 128:
   FUNC_0( VAR_0 );
   break;

  default:
   FUNC_2("DynamicInitGain(): unknown RFChipID(%d) !!!\n", VAR_1->rf_chip);
   break;
 }
}
