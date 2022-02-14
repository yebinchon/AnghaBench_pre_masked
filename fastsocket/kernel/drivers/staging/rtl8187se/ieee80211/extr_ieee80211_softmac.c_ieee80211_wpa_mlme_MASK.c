
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_device *VAR_1, int VAR_2, int VAR_3)
{

 int VAR_4 = 0;

 switch (VAR_2) {
 case 129:

  break;

 case 128:
  FUNC_0(VAR_1);
  break;

 default:
  FUNC_1("Unknown MLME request: %d\n", VAR_2);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
