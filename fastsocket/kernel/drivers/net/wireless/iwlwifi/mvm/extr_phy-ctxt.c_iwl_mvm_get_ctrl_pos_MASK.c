
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfg80211_chan_def {int center_freq1; TYPE_1__* chan; } ;
struct TYPE_2__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline u8 FUNC_1(struct cfg80211_chan_def *VAR_8)
{
 switch (VAR_8->chan->center_freq - VAR_8->center_freq1) {
 case -70:
  return VAR_7;
 case -50:
  return VAR_5;
 case -30:
  return VAR_3;
 case -10:
  return VAR_1;
 case 10:
  return VAR_0;
 case 30:
  return VAR_2;
 case 50:
  return VAR_4;
 case 70:
  return VAR_6;
 default:
  FUNC_0(1, "Invalid channel definition");
 case 0:





  return VAR_1;
 }
}
