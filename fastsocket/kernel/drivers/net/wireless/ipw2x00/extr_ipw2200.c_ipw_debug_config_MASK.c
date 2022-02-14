
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int config; int channel; int bssid; int capability; int rates_mask; int essid_len; int essid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_5)
{
 FUNC_0(VAR_4);
 FUNC_1("Scan completed, no valid APs matched "
         "[CFG 0x%08X]\n", VAR_5->config);
 if (VAR_5->config & VAR_2)
  FUNC_1("Channel locked to %d\n", VAR_5->channel);
 else
  FUNC_1("Channel unlocked.\n");
 if (VAR_5->config & VAR_3)
  FUNC_1("ESSID locked to '%s'\n",
          FUNC_2(VAR_4, VAR_5->essid, VAR_5->essid_len));
 else
  FUNC_1("ESSID unlocked.\n");
 if (VAR_5->config & VAR_1)
  FUNC_1("BSSID locked to %pM\n", VAR_5->bssid);
 else
  FUNC_1("BSSID unlocked.\n");
 if (VAR_5->capability & VAR_0)
  FUNC_1("PRIVACY on\n");
 else
  FUNC_1("PRIVACY off\n");
 FUNC_1("RATE MASK: 0x%08X\n", VAR_5->rates_mask);
}
