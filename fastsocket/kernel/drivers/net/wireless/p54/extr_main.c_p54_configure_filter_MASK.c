
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct p54_common {unsigned int filter_flags; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct p54_common*) ;
 int FUNC_1 (struct p54_common*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
     unsigned int VAR_4,
     unsigned int *VAR_5,
     u64 VAR_6)
{
 struct p54_common *VAR_7 = VAR_3->priv;

 *VAR_5 &= VAR_2 |
   VAR_0 |
   VAR_1;

 VAR_7->filter_flags = *VAR_5;

 if (VAR_4 & (VAR_2 | VAR_1))
  FUNC_1(VAR_7);

 if (VAR_4 & VAR_0 || VAR_6)
  FUNC_0(VAR_7);
}
