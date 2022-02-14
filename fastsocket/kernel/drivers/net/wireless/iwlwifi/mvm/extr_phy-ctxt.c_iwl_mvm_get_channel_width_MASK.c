
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_chan_def {int width; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct cfg80211_chan_def *VAR_4)
{
 switch (VAR_4->width) {
 case 130:
 case 131:
  return VAR_1;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 case 132:
  return VAR_0;
 default:
  FUNC_0(1, "Invalid channel width=%u", VAR_4->width);
  return VAR_1;
 }
}
