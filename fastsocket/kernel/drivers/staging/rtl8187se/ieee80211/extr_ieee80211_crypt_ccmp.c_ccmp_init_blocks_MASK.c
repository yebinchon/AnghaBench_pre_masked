
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_hdr_4addr {int* addr4; int* addr2; int* addr1; int seq_ctl; int frame_ctl; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct crypto_tfm*,int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static void FUNC_7(struct crypto_tfm *VAR_6,
        struct ieee80211_hdr_4addr *VAR_7,
        u8 *VAR_8, size_t VAR_9, u8 *VAR_10, u8 *VAR_11,
        u8 *VAR_12)
{
 u8 *VAR_13, VAR_14 = 0;
 size_t VAR_15;
 u16 VAR_16;
 int VAR_17, VAR_18;
 u8 VAR_19[2 * VAR_0];

 VAR_16 = FUNC_3(VAR_7->frame_ctl);
 VAR_17 = ((VAR_16 & (VAR_4 | VAR_3)) ==
         (VAR_4 | VAR_3));





 VAR_18 = ((FUNC_1(VAR_16) == VAR_5) &&
         (FUNC_0(VAR_16) & 0x80));
 VAR_15 = 22;
 if (VAR_17)
  VAR_15 += 6;
 if (VAR_18) {
  VAR_13 = (u8 *) &VAR_7->addr4;
  if (VAR_17)
   VAR_13 += 6;
  VAR_14 = *VAR_13 & 0x0f;
  VAR_15 += 2;
 }





 VAR_10[0] = 0x59;
 VAR_10[1] = VAR_14;
 FUNC_4(VAR_10 + 2, VAR_7->addr2, VAR_2);
 FUNC_4(VAR_10 + 8, VAR_8, VAR_1);
 VAR_10[14] = (VAR_9 >> 8) & 0xff;
 VAR_10[15] = VAR_9 & 0xff;
 VAR_13 = (u8 *) VAR_7;
 VAR_19[0] = 0;
 VAR_19[1] = VAR_15 & 0xff;
 VAR_19[2] = VAR_13[0] & 0x8f;
 VAR_19[3] = VAR_13[1] & 0xc7;
 FUNC_4(VAR_19 + 4, VAR_7->addr1, 3 * VAR_2);
 VAR_13 = (u8 *) &VAR_7->seq_ctl;
 VAR_19[22] = VAR_13[0] & 0x0f;
 VAR_19[23] = 0;
 FUNC_5(VAR_19 + 24, 0, 8);
 if (VAR_17)
  FUNC_4(VAR_19 + 24, VAR_7->addr4, VAR_2);
 if (VAR_18) {
  VAR_19[VAR_17 ? 30 : 24] = VAR_14;

 }


 FUNC_2(VAR_6, VAR_10, VAR_11);
 FUNC_6(VAR_11, VAR_19, VAR_0);
 FUNC_2(VAR_6, VAR_11, VAR_11);
 FUNC_6(VAR_11, &VAR_19[VAR_0], VAR_0);
 FUNC_2(VAR_6, VAR_11, VAR_11);
 VAR_10[0] &= 0x07;
 VAR_10[14] = VAR_10[15] = 0;
 FUNC_2(VAR_6, VAR_10, VAR_12);
}
