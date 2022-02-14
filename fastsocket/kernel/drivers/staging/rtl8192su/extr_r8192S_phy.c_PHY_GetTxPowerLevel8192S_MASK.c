
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ CurrentOfdm24GTxPwrIdx; scalar_t__ LegacyHTTxPowerDiff; scalar_t__ CurrentCckTxPwrIdx; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 long FUNC_1 (struct net_device*,int ,scalar_t__) ;

void
FUNC_2(
 struct net_device* VAR_3,
  long* VAR_4
 )
{
 struct r8192_priv *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6 = 0;
 long VAR_7;






 VAR_6 = VAR_5->CurrentCckTxPwrIdx;
 VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_6);


 VAR_6 = VAR_5->CurrentOfdm24GTxPwrIdx + VAR_5->LegacyHTTxPowerDiff;


 if(FUNC_1(VAR_3, VAR_1, VAR_6) > VAR_7)
  VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_6);


 VAR_6 = VAR_5->CurrentOfdm24GTxPwrIdx;


 if(FUNC_1(VAR_3, VAR_2, VAR_6) > VAR_7)
  VAR_7 = FUNC_1(VAR_3, VAR_2, VAR_6);

 *VAR_4 = VAR_7;
}
