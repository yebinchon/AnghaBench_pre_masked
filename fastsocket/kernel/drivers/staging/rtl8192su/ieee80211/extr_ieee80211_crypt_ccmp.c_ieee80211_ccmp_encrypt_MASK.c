
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ cb; } ;
struct ieee80211_hdr_4addr {int dummy; } ;
struct ieee80211_ccmp_data {int key_idx; int* tx_b0; int* tx_b; int* tx_e; int* tx_s0; int tfm; int * tx_pn; } ;
struct TYPE_2__ {int bHwSec; } ;
typedef TYPE_1__ cb_desc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct ieee80211_hdr_4addr*,int *,int,int*,int*,int*) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int* FUNC_4 (struct sk_buff*,scalar_t__) ;
 int* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int*,int*,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, int VAR_6, void *VAR_7)
{
 struct ieee80211_ccmp_data *VAR_8 = VAR_7;
 int VAR_9, VAR_10;
 u8 *VAR_11;
 struct ieee80211_hdr_4addr *VAR_12;
 cb_desc *VAR_13 = (cb_desc *)(VAR_5->cb + VAR_4);

 if (FUNC_3(VAR_5) < VAR_1 ||
     FUNC_6(VAR_5) < VAR_2 ||
     VAR_5->len < VAR_6)
  return -1;

 VAR_9 = VAR_5->len - VAR_6;
 VAR_11 = FUNC_4(VAR_5, VAR_1);
 FUNC_2(VAR_11, VAR_11 + VAR_1, VAR_6);
 VAR_11 += VAR_6;


 VAR_10 = VAR_3 - 1;
 while (VAR_10 >= 0) {
  VAR_8->tx_pn[VAR_10]++;
  if (VAR_8->tx_pn[VAR_10] != 0)
   break;
  VAR_10--;
 }

 *VAR_11++ = VAR_8->tx_pn[5];
 *VAR_11++ = VAR_8->tx_pn[4];
 *VAR_11++ = 0;
 *VAR_11++ = (VAR_8->key_idx << 6) | (1 << 5) ;
 *VAR_11++ = VAR_8->tx_pn[3];
 *VAR_11++ = VAR_8->tx_pn[2];
 *VAR_11++ = VAR_8->tx_pn[1];
 *VAR_11++ = VAR_8->tx_pn[0];


 VAR_12 = (struct ieee80211_hdr_4addr *) VAR_5->data;
 if (!VAR_13->bHwSec)
 {
  int VAR_14, VAR_15, VAR_16;
  u8 *VAR_17;
  u8 *VAR_18 = VAR_8->tx_b0;
  u8 *VAR_19 = VAR_8->tx_b;
  u8 *VAR_20 = VAR_8->tx_e;
  u8 *VAR_21 = VAR_8->tx_s0;


  VAR_17 = FUNC_5(VAR_5, VAR_2);

  FUNC_0(VAR_8->tfm, VAR_12, VAR_8->tx_pn, VAR_9, VAR_18, VAR_19, VAR_21);

  VAR_14 = (VAR_9 + VAR_0 - 1) / VAR_0;
  VAR_15 = VAR_9 % VAR_0;

  for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++) {
   VAR_16 = (VAR_10 == VAR_14 && VAR_15) ? VAR_15 : VAR_0;

   FUNC_7(VAR_19, VAR_11, VAR_16);
   FUNC_1(VAR_8->tfm, VAR_19, VAR_19);

   VAR_18[14] = (VAR_10 >> 8) & 0xff;
   VAR_18[15] = VAR_10 & 0xff;
   FUNC_1(VAR_8->tfm, VAR_18, VAR_20);
   FUNC_7(VAR_11, VAR_20, VAR_16);
   VAR_11 += VAR_16;
  }

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
   VAR_17[VAR_10] = VAR_19[VAR_10] ^ VAR_21[VAR_10];
 }
 return 0;
}
