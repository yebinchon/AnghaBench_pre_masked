
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int beacon_interval; } ;
struct ipw_priv {scalar_t__ disassociate_threshold; int config; TYPE_1__ assoc_request; int adhoc_check; int missed_adhoc_beacons; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_5)
{
 struct ipw_priv *VAR_6 = VAR_5;

 if (VAR_6->missed_adhoc_beacons++ > VAR_6->disassociate_threshold &&
     !(VAR_6->config & VAR_0)) {
  FUNC_0(VAR_2 | VAR_3 |
     VAR_4 | VAR_1,
     "Missed beacon: %d - disassociate\n",
     VAR_6->missed_adhoc_beacons);
  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
  return;
 }

 FUNC_4(&VAR_6->adhoc_check,
         FUNC_3(VAR_6->assoc_request.beacon_interval));
}
