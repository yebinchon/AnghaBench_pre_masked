
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_ccmp_data {int key_idx; int key_set; int dot11RSNAStatsCCMPFormatErrors; int dot11RSNAStatsCCMPReplays; int dot11RSNAStatsCCMPDecryptErrors; int rx_pn; int tx_pn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static char * FUNC_2(char *VAR_0, void *VAR_1)
{
 struct ieee80211_ccmp_data *VAR_2 = VAR_1;
 VAR_0 += FUNC_1(VAR_0, "key[%d] alg=CCMP key_set=%d "
       "tx_pn=%02x%02x%02x%02x%02x%02x "
       "rx_pn=%02x%02x%02x%02x%02x%02x "
       "format_errors=%d replays=%d decrypt_errors=%d\n",
       VAR_2->key_idx, VAR_2->key_set,
       FUNC_0(VAR_2->tx_pn), FUNC_0(VAR_2->rx_pn),
       VAR_2->dot11RSNAStatsCCMPFormatErrors,
       VAR_2->dot11RSNAStatsCCMPReplays,
       VAR_2->dot11RSNAStatsCCMPDecryptErrors);

 return VAR_0;
}
