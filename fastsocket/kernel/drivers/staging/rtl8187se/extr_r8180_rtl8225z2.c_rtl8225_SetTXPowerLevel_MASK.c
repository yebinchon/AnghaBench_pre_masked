
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int* chtxpwr; int* chtxpwr_ofdm; scalar_t__ card_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,int,int) ;
 int FUNC_6 (struct net_device*,int,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8, short VAR_9)
{
 struct r8180_priv *VAR_10 = FUNC_1(VAR_8);
 int VAR_11;
 int VAR_12;
 int VAR_13;
 u8 VAR_14;
 const u8 *VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19 = 0xff & VAR_10->chtxpwr[VAR_9];
 u8 VAR_20 = 0xff & VAR_10->chtxpwr_ofdm[VAR_9];

 if (VAR_10->card_type == VAR_3) {
  VAR_16 = 11;
  VAR_17 = 25;
  VAR_18 = 10;
 } else {
  VAR_16 = 35;
  VAR_17 = 35;
  VAR_18 = 0;
 }

 if (VAR_19 > VAR_16)
  VAR_19 = VAR_16;

 VAR_11 = VAR_19 % 6;
 VAR_12 = VAR_19 / 6;

 if (VAR_9 == 14)
  VAR_15 = VAR_6;
 else
  VAR_15 = VAR_5;

 FUNC_4(VAR_8, VAR_1,
         VAR_4[VAR_12] >> 1);

 for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
  VAR_14 = VAR_15[VAR_11 * 8 + VAR_13];
  FUNC_5(VAR_8, 0x44 + VAR_13, VAR_14);
 }


 FUNC_0(VAR_8);
 FUNC_2(1);

 if (VAR_20 > (VAR_17 - VAR_18))
  VAR_20 = VAR_17;
 else
  VAR_20 += VAR_18;

 if (VAR_20 > 35)
  VAR_20 = 35;

 VAR_11 = VAR_20 % 6;
 VAR_12 = VAR_20 / 6;

 FUNC_3(VAR_8, VAR_0);

 FUNC_6(VAR_8, 2, 0x42);
 FUNC_6(VAR_8, 6, 0x00);
 FUNC_6(VAR_8, 8, 0x00);

 FUNC_4(VAR_8, VAR_2,
         VAR_4[VAR_12] >> 1);

 VAR_14 = VAR_7[VAR_11];

 FUNC_6(VAR_8, 5, VAR_14);
 FUNC_6(VAR_8, 7, VAR_14);

 FUNC_0(VAR_8);
 FUNC_2(1);
}
