
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_hw {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_3,
        unsigned int VAR_4,
        unsigned int *VAR_5,
        u64 VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = 0;

 if (*VAR_5 & VAR_1)
  VAR_7 |= VAR_1;
 else if ((*VAR_5 & VAR_0) || (VAR_6 > 32))
  VAR_7 |= VAR_0;

 VAR_3->flags &= ~VAR_2;

 *VAR_5 = VAR_7;
}
