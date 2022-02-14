
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* ipmi_user_t ;
struct TYPE_5__ {TYPE_1__* intf; } ;
struct TYPE_4__ {int maintenance_mode; int maintenance_mode_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(ipmi_user_t VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->intf->maintenance_mode_lock, VAR_2);
 VAR_1 = VAR_0->intf->maintenance_mode;
 FUNC_1(&VAR_0->intf->maintenance_mode_lock, VAR_2);

 return VAR_1;
}
