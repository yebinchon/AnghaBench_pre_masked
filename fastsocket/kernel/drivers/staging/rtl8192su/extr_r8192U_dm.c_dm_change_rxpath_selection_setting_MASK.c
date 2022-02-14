
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct r8192_priv {int rate_adaptive; } ;
struct net_device {int dummy; } ;
typedef int s32 ;
typedef TYPE_1__* prate_adaptive ;
struct TYPE_4__ {void** rf_rssi; void* cck_method; void* diff_TH; void* SS_TH_low; void* DbgMode; void* Enable; } ;
struct TYPE_3__ {int ping_rssi_thresh_for_ra; void* ping_rssi_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

extern void
FUNC_1(
 struct net_device *VAR_3,
 s32 VAR_4,
 s32 VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_0(VAR_3);
 prate_adaptive VAR_7 = (prate_adaptive)&(VAR_6->rate_adaptive);


 if(VAR_4 == 0)
 {
  if(VAR_5 > 1)
   VAR_5 = 1;
  VAR_2.Enable = (u8)VAR_5;
 }
 else if(VAR_4 == 1)
 {
  if(VAR_5 > 1)
   VAR_5 = 1;
  VAR_2.DbgMode = (u8)VAR_5;
 }
 else if(VAR_4 == 2)
 {
  if(VAR_5 > 40)
   VAR_5 = 40;
  VAR_2.SS_TH_low = (u8)VAR_5;
 }
 else if(VAR_4 == 3)
 {
  if(VAR_5 > 25)
   VAR_5 = 25;
  VAR_2.diff_TH = (u8)VAR_5;
 }
 else if(VAR_4 == 4)
 {
  if(VAR_5 >= VAR_1)
   VAR_5 = VAR_0;
  VAR_2.cck_method= (u8)VAR_5;
 }
 else if(VAR_4 == 10)
 {
  if(VAR_5 > 100)
   VAR_5 = 50;
  VAR_2.rf_rssi[0] = (u8)VAR_5;
 }
 else if(VAR_4 == 11)
 {
  if(VAR_5 > 100)
   VAR_5 = 50;
  VAR_2.rf_rssi[1] = (u8)VAR_5;
 }
 else if(VAR_4 == 12)
 {
  if(VAR_5 > 100)
   VAR_5 = 50;
  VAR_2.rf_rssi[2] = (u8)VAR_5;
 }
 else if(VAR_4 == 13)
 {
  if(VAR_5 > 100)
   VAR_5 = 50;
  VAR_2.rf_rssi[3] = (u8)VAR_5;
 }
 else if(VAR_4 == 20)
 {
  if(VAR_5 > 1)
   VAR_5 = 1;
  VAR_7->ping_rssi_enable = (u8)VAR_5;
 }
 else if(VAR_4 == 21)
 {
  if(VAR_5 > 30)
   VAR_5 = 30;
  VAR_7->ping_rssi_thresh_for_ra = VAR_5;
 }
}
