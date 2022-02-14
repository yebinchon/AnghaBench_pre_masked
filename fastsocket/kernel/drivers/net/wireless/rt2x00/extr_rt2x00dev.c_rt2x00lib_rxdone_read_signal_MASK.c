
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxdone_entry_desc {int signal; int dev_flags; int rate_mode; } ;
struct rt2x00_rate {int plcp; int bitrate; int mcs; } ;
struct rt2x00_dev {size_t curr_band; struct ieee80211_supported_band* bands; } ;
struct ieee80211_supported_band {unsigned int n_bitrates; TYPE_1__* bitrates; } ;
struct TYPE_2__ {int hw_value; } ;


 int FUNC_0 (int,int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rt2x00_rate* FUNC_1 (int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_4,
     struct rxdone_entry_desc *VAR_5)
{
 struct ieee80211_supported_band *VAR_6;
 const struct rt2x00_rate *VAR_7;
 unsigned int VAR_8;
 int VAR_9 = VAR_5->signal;
 int VAR_10 = (VAR_5->dev_flags & VAR_1);

 switch (VAR_5->rate_mode) {
 case 131:
 case 128:




  if (VAR_5->dev_flags & VAR_2)
   VAR_9 = FUNC_0(VAR_5->rate_mode, VAR_9);

  VAR_6 = &VAR_4->bands[VAR_4->curr_band];
  for (VAR_8 = 0; VAR_8 < VAR_6->n_bitrates; VAR_8++) {
   VAR_7 = FUNC_1(VAR_6->bitrates[VAR_8].hw_value);
   if (((VAR_10 == VAR_3) &&
        (VAR_7->plcp == VAR_9)) ||
       ((VAR_10 == VAR_0) &&
         (VAR_7->bitrate == VAR_9)) ||
       ((VAR_10 == VAR_2) &&
         (VAR_7->mcs == VAR_9))) {
    return VAR_8;
   }
  }
  break;
 case 129:
 case 130:
  if (VAR_9 >= 0 && VAR_9 <= 76)
   return VAR_9;
  break;
 default:
  break;
 }

 FUNC_2(VAR_4, "Frame received with unrecognized signal, mode=0x%.4x, signal=0x%.4x, type=%d\n",
      VAR_5->rate_mode, VAR_9, VAR_10);
 return 0;
}
