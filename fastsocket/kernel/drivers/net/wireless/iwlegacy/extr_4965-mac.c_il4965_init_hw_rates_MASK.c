
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int dummy; } ;
struct ieee80211_rate {int bitrate; int hw_value; int hw_value_short; int flags; } ;
struct TYPE_2__ {int ieee; scalar_t__ plcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct il_priv *VAR_6, struct ieee80211_rate *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7[VAR_8].bitrate = VAR_5[VAR_8].ieee * 5;
  VAR_7[VAR_8].hw_value = VAR_8;
  VAR_7[VAR_8].hw_value_short = VAR_8;
  VAR_7[VAR_8].flags = 0;
  if ((VAR_8 >= VAR_1) && (VAR_8 <= VAR_2)) {



   VAR_7[VAR_8].flags |=
       (VAR_5[VAR_8].plcp ==
        VAR_3) ? 0 : VAR_0;
  }
 }
}
