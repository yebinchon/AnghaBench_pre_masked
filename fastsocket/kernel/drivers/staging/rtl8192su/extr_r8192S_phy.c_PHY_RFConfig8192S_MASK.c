
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int rf_chip; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ RT_STATUS ;


 scalar_t__ FUNC_0 (struct net_device*) ;





 scalar_t__ VAR_0 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

extern bool
FUNC_2(struct net_device* VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);
 RT_STATUS VAR_3 = VAR_0;




 VAR_2->rf_chip = 132;




 switch(VAR_2->rf_chip)
 {
 case 131:
 case 132:
  VAR_3 = FUNC_0(VAR_1);
  break;

 case 130:

  break;

 case 129:
  break;

 case 128:

  break;
        default:
            break;
 }

 return (VAR_3 == VAR_0) ? 1:0;
}
