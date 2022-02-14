
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nfy ;
typedef int diva_os_spin_lock_magic_t ;
struct TYPE_5__ {int context; int (* callback ) (int ,int *,int) ;} ;
typedef TYPE_1__ didd_adapter_change_notification_t ;
struct TYPE_6__ {scalar_t__ callback; } ;
typedef int DESCRIPTOR ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4 (DESCRIPTOR* VAR_3, int VAR_4) {
 int VAR_5, VAR_6;
 didd_adapter_change_notification_t VAR_7;
 diva_os_spin_lock_magic_t VAR_8;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = 0;
  FUNC_0 (&VAR_2, &VAR_8, "didd_nfy");
  if (VAR_1[VAR_5].callback) {
   FUNC_2 (&VAR_7, &VAR_1[VAR_5], sizeof(VAR_7));
   VAR_6 = 1;
  }
  FUNC_1 (&VAR_2, &VAR_8, "didd_nfy");
  if (VAR_6) {
   (*(VAR_7.callback))(VAR_7.context, VAR_3, VAR_4);
  }
 }
}
