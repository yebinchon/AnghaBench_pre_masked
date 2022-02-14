
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc_evt_get_ie {int dummy; } ;
struct TYPE_2__ {int wCommand; int bCommandType; } ;
struct uwb_rc_cmd_set_ie {TYPE_1__ rccb; } ;
struct uwb_rc {int ies_capacity; int ies_mutex; struct uwb_rc_cmd_set_ie* ies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uwb_rc*,struct uwb_rc_evt_get_ie**) ;

int FUNC_4(struct uwb_rc *VAR_2)
{
 struct uwb_rc_evt_get_ie *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(&VAR_2->ies_mutex);

 VAR_2->ies = (struct uwb_rc_cmd_set_ie *)VAR_3;
 VAR_2->ies->rccb.bCommandType = VAR_0;
 VAR_2->ies->rccb.wCommand = FUNC_0(VAR_1);
 VAR_2->ies_capacity = VAR_4;

 FUNC_2(&VAR_2->ies_mutex);

 return 0;
}
