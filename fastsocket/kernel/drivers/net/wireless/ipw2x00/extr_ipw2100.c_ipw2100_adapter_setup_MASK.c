
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ipw2100_priv {int config; int tx_power; int beacon_interval; TYPE_1__* ieee; int essid_len; int * essid; int * bssid; int rts_threshold; int tx_rates; int channel; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ipw2100_priv*,int) ;
 int FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (struct ipw2100_priv*) ;
 int FUNC_4 (struct ipw2100_priv*,int ,int) ;
 int FUNC_5 (struct ipw2100_priv*,int *,int ,int) ;
 int FUNC_6 (struct ipw2100_priv*,int ,int) ;
 int FUNC_7 (struct ipw2100_priv*,int) ;
 int FUNC_8 (struct ipw2100_priv*,int *,int) ;
 int FUNC_9 (struct ipw2100_priv*,scalar_t__,int) ;
 int FUNC_10 (struct ipw2100_priv*,int ) ;
 int FUNC_11 (struct ipw2100_priv*,int ) ;
 int FUNC_12 (struct ipw2100_priv*,int ) ;
 int FUNC_13 (struct ipw2100_priv*,int ,int) ;
 int FUNC_14 (struct ipw2100_priv*,int) ;

__attribute__((used)) static int FUNC_15(struct ipw2100_priv *VAR_6)
{
 int VAR_7;
 int VAR_8 = 1;
 u8 *VAR_9;

 FUNC_0("enter\n");

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return -VAR_2;

 VAR_7 = FUNC_7(VAR_6, VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_9(VAR_6, VAR_6->ieee->iw_mode, VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->ieee->iw_mode == VAR_4) {
  VAR_7 = FUNC_4(VAR_6, VAR_6->channel, VAR_8);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_14(VAR_6, VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_13(VAR_6, VAR_6->tx_rates, VAR_8);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_10(VAR_6, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_11(VAR_6, VAR_6->rts_threshold);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->config & VAR_0)
  VAR_9 = VAR_6->bssid;
 else
  VAR_9 = ((void*)0);
 VAR_7 = FUNC_8(VAR_6, VAR_9, VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->config & VAR_1)
  VAR_7 = FUNC_5(VAR_6, VAR_6->essid, VAR_6->essid_len,
     VAR_8);
 else
  VAR_7 = FUNC_5(VAR_6, ((void*)0), 0, VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->ieee->iw_mode == VAR_4) {
  VAR_7 =
      FUNC_6(VAR_6,
           VAR_6->beacon_interval,
           VAR_8);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_12(VAR_6, VAR_6->tx_power);
  if (VAR_7)
   return VAR_7;
 }
 FUNC_0("exit\n");

 return 0;
}
