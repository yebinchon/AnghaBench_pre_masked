
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int txchainmask; } ;
struct ath_common {int curbssid; int macaddr; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ath_hw*,int,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_11)
{
 struct ath_common *VAR_12 = FUNC_4(VAR_11);
 u8 VAR_13[VAR_1], VAR_14[VAR_1];
 u32 VAR_15[13] = {0};
 u32 VAR_16[VAR_7];
 u8 VAR_17;
 u32 VAR_18;

 FUNC_5(VAR_13, VAR_12->macaddr, VAR_1);
 FUNC_5(VAR_14, VAR_12->curbssid, VAR_1);


 VAR_15[0] = (VAR_4 | (VAR_10 << 16));

 if (!(FUNC_0(VAR_11)))
  VAR_15[0] += (VAR_2 << 25);

 VAR_15[1] = 0;
 VAR_15[3] = 0xb;
 VAR_15[4] = 0;
 VAR_15[7] = (VAR_11->txchainmask) << 2;

 if (FUNC_0(VAR_11))
  VAR_15[2] = 0xf << 16;
 else
  VAR_15[2] = 0x7 << 16;


 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  FUNC_3(VAR_11, (VAR_0 + VAR_17 * 4), VAR_15[VAR_17]);


 if (FUNC_0(VAR_11))
  FUNC_3(VAR_11, (VAR_0 + VAR_17 * 4), VAR_15[VAR_17]);

 VAR_16[0] = (VAR_6 << 2) | (VAR_5 << 4) |
         (VAR_9 << 8) | (VAR_3 << 16);
 VAR_16[1] = (VAR_14[3] << 24) | (VAR_14[2] << 16) |
         (VAR_14[1] << 8) | (VAR_14[0]);
 VAR_16[2] = (VAR_13[1] << 24) | (VAR_13[0] << 16) |
         (VAR_14[5] << 8) | (VAR_14[4]);
 VAR_16[3] = (VAR_13[5] << 24) | (VAR_13[4] << 16) |
         (VAR_13[3] << 8) | (VAR_13[2]);
 VAR_16[4] = (VAR_14[3] << 24) | (VAR_14[2] << 16) |
         (VAR_14[1] << 8) | (VAR_14[0]);
 VAR_16[5] = (VAR_14[5] << 8) | (VAR_14[4]);

 if (FUNC_1(VAR_11)) {


  FUNC_3(VAR_11, (VAR_0 + (12 * 4)), 0);
  VAR_18 = FUNC_2(13);
 } else {
  VAR_18 = FUNC_2(12);
 }

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
  FUNC_3(VAR_11, (VAR_18 + VAR_17*4), VAR_16[VAR_17]);

}
