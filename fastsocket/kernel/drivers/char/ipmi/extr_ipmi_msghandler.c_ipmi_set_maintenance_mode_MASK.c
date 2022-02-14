
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ipmi_user_t ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_6__ {int maintenance_mode; int maintenance_mode_enable; int maintenance_mode_lock; int auto_maintenance_timeout; } ;
struct TYPE_5__ {TYPE_2__* intf; } ;


 int VAR_0 ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(ipmi_user_t VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 unsigned long VAR_4;
 ipmi_smi_t VAR_5 = VAR_1->intf;

 FUNC_1(&VAR_5->maintenance_mode_lock, VAR_4);
 if (VAR_5->maintenance_mode != VAR_2) {
  switch (VAR_2) {
  case 130:
   VAR_5->maintenance_mode = VAR_2;
   VAR_5->maintenance_mode_enable
    = (VAR_5->auto_maintenance_timeout > 0);
   break;

  case 129:
   VAR_5->maintenance_mode = VAR_2;
   VAR_5->maintenance_mode_enable = 0;
   break;

  case 128:
   VAR_5->maintenance_mode = VAR_2;
   VAR_5->maintenance_mode_enable = 1;
   break;

  default:
   VAR_3 = -VAR_0;
   goto out_unlock;
  }

  FUNC_0(VAR_5);
 }
 out_unlock:
 FUNC_2(&VAR_5->maintenance_mode_lock, VAR_4);

 return VAR_3;
}
