
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int modulation; scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(struct ieee80211_device *VAR_6,
        struct iw_request_info *VAR_7,
        union iwreq_data *VAR_8, char *VAR_9)
{
 FUNC_1(VAR_8->name, "802.11", VAR_5);
 if(VAR_6->modulation & VAR_0){
  FUNC_0(VAR_8->name, "b", VAR_5);
  if(VAR_6->modulation & VAR_4)
   FUNC_0(VAR_8->name, "/g", VAR_5);
 }else if(VAR_6->modulation & VAR_4)
  FUNC_0(VAR_8->name, "g", VAR_5);

 if((VAR_6->state == VAR_1) ||
  (VAR_6->state == VAR_2))
  FUNC_0(VAR_8->name,"  link", VAR_5);
 else if(VAR_6->state != VAR_3)
  FUNC_0(VAR_8->name," .....", VAR_5);


 return 0;
}
