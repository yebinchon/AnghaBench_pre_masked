
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_chip {int dummy; } ;
struct zd_mac {int regdomain; int lock; int default_regdomain; struct zd_chip chip; } ;
struct ieee80211_hw {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zd_chip*) ;
 int FUNC_6 (struct zd_chip*) ;
 int FUNC_7 (struct zd_chip*) ;
 struct zd_mac* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct zd_chip*,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct zd_chip*,int ) ;

int FUNC_12(struct ieee80211_hw *VAR_1)
{
 int VAR_2;
 struct zd_mac *VAR_3 = FUNC_8(VAR_1);
 struct zd_chip *VAR_4 = &VAR_3->chip;
 char VAR_5[2];
 u8 VAR_6;

 VAR_2 = FUNC_6(VAR_4);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_7(VAR_4);
 if (VAR_2)
  goto disable_int;

 FUNC_0(!FUNC_1());

 VAR_2 = FUNC_9(VAR_4, &VAR_6);
 if (VAR_2)
  goto disable_int;
 FUNC_3(&VAR_3->lock);
 VAR_3->regdomain = VAR_3->default_regdomain = VAR_6;
 FUNC_4(&VAR_3->lock);



 VAR_2 = FUNC_11(VAR_4, VAR_0);
 if (VAR_2)
  goto disable_int;

 VAR_2 = FUNC_10(VAR_3->regdomain, VAR_5);
 if (VAR_2)
  goto disable_int;

 VAR_2 = FUNC_2(VAR_1->wiphy, VAR_5);
disable_int:
 FUNC_5(VAR_4);
out:
 return VAR_2;
}
