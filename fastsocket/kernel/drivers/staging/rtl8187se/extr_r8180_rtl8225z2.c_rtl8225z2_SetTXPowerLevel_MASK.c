
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct r8180_priv {int* chtxpwr; int* chtxpwr_ofdm; scalar_t__ up; int ieee80211; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 char FUNC_0 (int ,short) ;
 char FUNC_1 (struct r8180_priv*,int ,char) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (struct net_device*) ;
 struct r8180_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,int ,int ) ;
 int FUNC_8 (struct net_device*,int,int) ;

void FUNC_9(struct net_device *VAR_5, short VAR_6)
{
 struct r8180_priv *VAR_7 = FUNC_5(VAR_5);
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 char VAR_11 = (char)(0xff & VAR_7->chtxpwr[VAR_6]);
 char VAR_12 = (char)(0xff & VAR_7->chtxpwr_ofdm[VAR_6]);

 if (FUNC_2(VAR_7->ieee80211) &&
     FUNC_3(VAR_7->ieee80211)) {
  u8 VAR_13 = FUNC_0(VAR_7->ieee80211, VAR_6);
  u8 VAR_14 = FUNC_1(VAR_7, VAR_2, VAR_13);
  u8 VAR_15 = FUNC_1(VAR_7, VAR_3, VAR_13);

  if (VAR_11 > VAR_14)
   VAR_11 = VAR_14;
  if (VAR_12 > VAR_15)
   VAR_12 = VAR_15;
 }

 VAR_8 = 15;
 VAR_9 = 25;
 VAR_10 = 10;

 if (VAR_11 > 35)
  VAR_11 = 35;

 FUNC_7(VAR_5, VAR_0,
         (VAR_4[(u8)VAR_11]));
 FUNC_4(VAR_5);
 FUNC_6(1);

 if (VAR_12 > 35)
  VAR_12 = 35;

 if (VAR_7->up == 0) {
  FUNC_8(VAR_5, 2, 0x42);
  FUNC_8(VAR_5, 5, 0x00);
  FUNC_8(VAR_5, 6, 0x40);
  FUNC_8(VAR_5, 7, 0x00);
  FUNC_8(VAR_5, 8, 0x40);
 }

 FUNC_7(VAR_5, VAR_1,
         VAR_4[(u8)VAR_12]);

 if (VAR_12 <= 11) {
  FUNC_8(VAR_5, 0x07, 0x5c);
  FUNC_8(VAR_5, 0x09, 0x5c);
        }

 if (VAR_12 <= 17) {
  FUNC_8(VAR_5, 0x07, 0x54);
  FUNC_8(VAR_5, 0x09, 0x54);
 } else {
  FUNC_8(VAR_5, 0x07, 0x50);
  FUNC_8(VAR_5, 0x09, 0x50);
 }

 FUNC_4(VAR_5);
 FUNC_6(1);
}
