
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {int users; } ;
struct ieee80211_hdr {int frame_control; int addr2; } ;
struct TYPE_5__ {TYPE_4__* ap; } ;
typedef TYPE_1__ local_info_t ;
struct TYPE_6__ {int sta_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sta_info* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct sta_info*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(local_info_t *VAR_3, struct ieee80211_hdr *VAR_4)
{
 struct sta_info *VAR_5;
 u16 VAR_6;

 FUNC_5(&VAR_3->ap->sta_table_lock);
 VAR_5 = FUNC_0(VAR_3->ap, VAR_4->addr2);
 if (VAR_5)
  FUNC_2(&VAR_5->users);
 FUNC_6(&VAR_3->ap->sta_table_lock);

 if (!VAR_5)
  return -1;

 VAR_6 = FUNC_4(VAR_4->frame_control);
 FUNC_3(VAR_3, VAR_5, VAR_6 & VAR_1,
         VAR_6 & VAR_0,
         VAR_6 & VAR_2);

 FUNC_1(&VAR_5->users);
 return 0;
}
