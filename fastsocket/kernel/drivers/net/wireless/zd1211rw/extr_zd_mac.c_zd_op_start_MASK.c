
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int initialized; } ;
struct zd_chip {struct zd_usb usb; } ;
struct zd_mac {int flags; struct zd_chip chip; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zd_mac*) ;
 int FUNC_1 (struct zd_mac*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct zd_mac*) ;
 int FUNC_4 (struct zd_mac*) ;
 int FUNC_5 (struct zd_chip*) ;
 int FUNC_6 (struct zd_chip*) ;
 int FUNC_7 (struct zd_chip*) ;
 int FUNC_8 (struct zd_chip*) ;
 int FUNC_9 (struct zd_chip*) ;
 int FUNC_10 (struct zd_chip*,int) ;
 int FUNC_11 (struct zd_chip*) ;
 int FUNC_12 (struct zd_chip*) ;
 struct zd_mac* FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct zd_usb*) ;

int FUNC_15(struct ieee80211_hw *VAR_3)
{
 struct zd_mac *VAR_4 = FUNC_13(VAR_3);
 struct zd_chip *VAR_5 = &VAR_4->chip;
 struct zd_usb *VAR_6 = &VAR_5->usb;
 int VAR_7;

 if (!VAR_6->initialized) {
  VAR_7 = FUNC_14(VAR_6);
  if (VAR_7)
   goto out;
 }

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_10(VAR_5, VAR_0 | VAR_1);
 if (VAR_7 < 0)
  goto disable_int;
 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  goto disable_int;
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  goto disable_int;
 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7 < 0)
  goto disable_int;
 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7 < 0)
  goto disable_radio;
 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7 < 0)
  goto disable_rxtx;

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_2(VAR_2, &VAR_4->flags);
 return 0;
disable_rxtx:
 FUNC_6(VAR_5);
disable_radio:
 FUNC_11(VAR_5);
disable_int:
 FUNC_5(VAR_5);
out:
 return VAR_7;
}
