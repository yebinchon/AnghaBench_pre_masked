
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int flags; } ;
struct TYPE_4__ {int flags_and; int flags_or; } ;
struct TYPE_3__ {TYPE_2__ set_flags_sta; } ;
struct prism2_hostapd_param {TYPE_1__ u; int sta_addr; } ;
struct ap_data {int sta_table_lock; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct ap_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ap_data *VAR_1,
     struct prism2_hostapd_param *VAR_2)
{
 struct sta_info *VAR_3;

 FUNC_1(&VAR_1->sta_table_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2->sta_addr);
 if (VAR_3) {
  VAR_3->flags |= VAR_2->u.set_flags_sta.flags_or;
  VAR_3->flags &= VAR_2->u.set_flags_sta.flags_and;
 }
 FUNC_2(&VAR_1->sta_table_lock);

 if (!VAR_3)
  return -VAR_0;

 return 0;
}
