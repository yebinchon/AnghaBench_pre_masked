
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ieee80211_rate {int flags; int hw_value; } ;
struct ath5k_hw {TYPE_1__* sbands; scalar_t__ ah_ack_bitrate_high; } ;
struct TYPE_2__ {unsigned int n_bitrates; struct ieee80211_rate* bitrates; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_1 (struct ath5k_hw*,size_t,int,struct ieee80211_rate*,int) ;
 int FUNC_2 (struct ath5k_hw*,int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_3(struct ath5k_hw *VAR_4)
{
 struct ieee80211_rate *VAR_5;
 unsigned int VAR_6;

 u8 VAR_7 = VAR_1;


 for (VAR_6 = 0; VAR_6 < VAR_4->sbands[VAR_7].n_bitrates; VAR_6++) {
  u32 VAR_8;
  u16 VAR_9;

  if (VAR_4->ah_ack_bitrate_high)
   VAR_5 = &VAR_4->sbands[VAR_7].bitrates[VAR_3[VAR_6]];

  else if (VAR_6 < 4)
   VAR_5 = &VAR_4->sbands[VAR_7].bitrates[0];

  else
   VAR_5 = &VAR_4->sbands[VAR_7].bitrates[4];


  VAR_8 = FUNC_0(VAR_5->hw_value);







  VAR_9 = FUNC_1(VAR_4, VAR_7, 10,
     VAR_5, 0);

  FUNC_2(VAR_4, VAR_9, VAR_8);

  if (!(VAR_5->flags & VAR_2))
   continue;

  VAR_9 = FUNC_1(VAR_4, VAR_7, 10, VAR_5, 1);
  FUNC_2(VAR_4, VAR_9,
   VAR_8 + (VAR_0 << 2));
 }
}
