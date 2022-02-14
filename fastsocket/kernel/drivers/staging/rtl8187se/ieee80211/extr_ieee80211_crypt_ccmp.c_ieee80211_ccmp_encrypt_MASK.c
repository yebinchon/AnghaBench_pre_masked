
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr_4addr {int dummy; } ;
struct ieee80211_ccmp_data {int* tx_b0; int* tx_b; int* tx_e; int* tx_s0; int key_idx; int tfm; int * tx_pn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ieee80211_hdr_4addr*,int *,int,int*,int*,int*) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int* FUNC_4 (struct sk_buff*,scalar_t__) ;
 int* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int*,int*,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, int VAR_5, void *VAR_6)
{
 struct ieee80211_ccmp_data *VAR_7 = VAR_6;
 int VAR_8, VAR_9;
 u8 *VAR_10;
 struct ieee80211_hdr_4addr *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 u8 *VAR_15;
 u8 *VAR_16 = VAR_7->tx_b0;
 u8 *VAR_17 = VAR_7->tx_b;
 u8 *VAR_18 = VAR_7->tx_e;
 u8 *VAR_19 = VAR_7->tx_s0;

 if (FUNC_3(VAR_4) < VAR_1 ||
     FUNC_6(VAR_4) < VAR_2 ||
     VAR_4->len < VAR_5)
  return -1;

 VAR_8 = VAR_4->len - VAR_5;
 VAR_10 = FUNC_4(VAR_4, VAR_1);
 FUNC_2(VAR_10, VAR_10 + VAR_1, VAR_5);
 VAR_10 += VAR_5;


 VAR_9 = VAR_3 - 1;
 while (VAR_9 >= 0) {
  VAR_7->tx_pn[VAR_9]++;
  if (VAR_7->tx_pn[VAR_9] != 0)
   break;
  VAR_9--;
 }

 *VAR_10++ = VAR_7->tx_pn[5];
 *VAR_10++ = VAR_7->tx_pn[4];
 *VAR_10++ = 0;
 *VAR_10++ = (VAR_7->key_idx << 6) | (1 << 5) ;
 *VAR_10++ = VAR_7->tx_pn[3];
 *VAR_10++ = VAR_7->tx_pn[2];
 *VAR_10++ = VAR_7->tx_pn[1];
 *VAR_10++ = VAR_7->tx_pn[0];

 VAR_11 = (struct ieee80211_hdr_4addr *)VAR_4->data;

 VAR_15 = FUNC_5(VAR_4, VAR_2);

 FUNC_0(VAR_7->tfm, VAR_11, VAR_7->tx_pn, VAR_8, VAR_16, VAR_17, VAR_19);

 VAR_12 = (VAR_8 + VAR_0 - 1) / VAR_0;
 VAR_13 = VAR_8 % VAR_0;

 for (VAR_9 = 1; VAR_9 <= VAR_12; VAR_9++) {
  VAR_14 = (VAR_9 == VAR_12 && VAR_13) ? VAR_13 : VAR_0;

  FUNC_7(VAR_17, VAR_10, VAR_14);
  FUNC_1(VAR_7->tfm, VAR_17, VAR_17);

  VAR_16[14] = (VAR_9 >> 8) & 0xff;
  VAR_16[15] = VAR_9 & 0xff;
  FUNC_1(VAR_7->tfm, VAR_16, VAR_18);
  FUNC_7(VAR_10, VAR_18, VAR_14);
  VAR_10 += VAR_14;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_15[VAR_9] = VAR_17[VAR_9] ^ VAR_19[VAR_9];

 return 0;
}
