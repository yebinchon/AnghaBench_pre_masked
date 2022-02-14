
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int modulation; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct ieee80211_device *VAR_4,
        struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{
 FUNC_1(VAR_6->name, "802.11");
 if(VAR_4->modulation & VAR_0)
  FUNC_0(VAR_6->name, "b");
 if(VAR_4->modulation & VAR_1)
  FUNC_0(VAR_6->name, "g");
 if (VAR_4->mode & (VAR_2 | VAR_3))
  FUNC_0(VAR_6->name, "n");
 return 0;
}
