
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {scalar_t__ CustomerID; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int Enable; int* rf_rssi; int* cck_pwdb_sta; int* rf_enable_rssi_th; scalar_t__ disabledRF; int DbgMode; int cck_method; int diff_TH; int SS_TH_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device * VAR_7)
{
 u8 VAR_8;
 struct r8192_priv *VAR_9 = FUNC_0(VAR_7);
 VAR_3.Enable = 1;
 VAR_3.SS_TH_low = VAR_5;
 VAR_3.diff_TH = VAR_6;
 if(VAR_9->CustomerID == VAR_4)
  VAR_3.cck_method = VAR_1;
 else
  VAR_3.cck_method = VAR_0;
 VAR_3.DbgMode = VAR_2;
 VAR_3.disabledRF = 0;
 for(VAR_8=0; VAR_8<4; VAR_8++)
 {
  VAR_3.rf_rssi[VAR_8] = 50;
  VAR_3.cck_pwdb_sta[VAR_8] = -64;
  VAR_3.rf_enable_rssi_th[VAR_8] = 100;
 }
}
