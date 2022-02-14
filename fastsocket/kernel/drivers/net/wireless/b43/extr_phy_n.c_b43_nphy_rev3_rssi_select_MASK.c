
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_15, u8 VAR_16,
          enum n_rssi_type VAR_17)
{
 u8 VAR_18;
 u16 VAR_19, VAR_20;

 if (VAR_16 == 0) {
  FUNC_2(VAR_15, VAR_4, 0xFDFF);
  FUNC_2(VAR_15, VAR_3, 0xFDFF);
  FUNC_2(VAR_15, VAR_1, 0xFCFF);
  FUNC_2(VAR_15, VAR_2, 0xFCFF);
  FUNC_2(VAR_15, VAR_7, 0xFFDF);
  FUNC_2(VAR_15, VAR_8, 0xFFDF);
  FUNC_2(VAR_15, VAR_5, 0xFFC3);
  FUNC_2(VAR_15, VAR_6, 0xFFC3);
 } else {
  for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
   if ((VAR_16 == 1 && VAR_18 == 1) || (VAR_16 == 2 && !VAR_18))
    continue;

   VAR_19 = (VAR_18 == 0) ?
    VAR_4 : VAR_3;
   FUNC_3(VAR_15, VAR_19, 0xFDFF, 0x0200);

   if (VAR_17 == VAR_13 ||
       VAR_17 == VAR_14 ||
       VAR_17 == VAR_11) {
    VAR_19 = (VAR_18 == 0) ?
     VAR_1 :
     VAR_2;
    FUNC_3(VAR_15, VAR_19, 0xFCFF, 0);

    VAR_19 = (VAR_18 == 0) ?
     VAR_5 :
     VAR_6;
    FUNC_3(VAR_15, VAR_19, 0xFFC3, 0);

    if (VAR_17 == VAR_13)
     VAR_20 = (FUNC_0(VAR_15->wl) == VAR_9) ? 4 : 8;
    else if (VAR_17 == VAR_14)
     VAR_20 = 16;
    else
     VAR_20 = 32;
    FUNC_4(VAR_15, VAR_19, VAR_20);

    VAR_19 = (VAR_18 == 0) ?
     VAR_7 :
     VAR_8;
    FUNC_4(VAR_15, VAR_19, 0x0020);
   } else {
    if (VAR_17 == VAR_12)
     VAR_20 = 0x0100;
    else if (VAR_17 == VAR_10)
     VAR_20 = 0x0200;
    else
     VAR_20 = 0x0300;

    VAR_19 = (VAR_18 == 0) ?
     VAR_1 :
     VAR_2;

    FUNC_3(VAR_15, VAR_19, 0xFCFF, VAR_20);
    FUNC_3(VAR_15, VAR_19, 0xF3FF, VAR_20 << 2);

    if (VAR_17 != VAR_10 &&
        VAR_17 != VAR_12) {
     enum ieee80211_band VAR_21 =
      FUNC_0(VAR_15->wl);

     if (FUNC_1(VAR_15))
      VAR_20 = (VAR_21 == VAR_9) ? 0xC : 0xE;
     else
      VAR_20 = 0x11;
     VAR_19 = (VAR_18 == 0) ? 0x2000 : 0x3000;
     VAR_19 |= VAR_0;
     FUNC_5(VAR_15, VAR_19, VAR_20);

     VAR_19 = (VAR_18 == 0) ?
      VAR_4 :
      VAR_3;
     FUNC_4(VAR_15, VAR_19, 0x0200);
    }
   }
  }
 }
}
