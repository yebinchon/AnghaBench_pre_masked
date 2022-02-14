
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ iv_index_t ;
typedef int ipc_voucher_attr_manager_t ;
typedef TYPE_1__* ipc_voucher_attr_control_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {TYPE_1__* ivgte_control; int ivgte_manager; } ;
struct TYPE_6__ {scalar_t__ ivac_key_index; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(iv_index_t VAR_4,
     boolean_t VAR_5,
     ipc_voucher_attr_manager_t *VAR_6,
     ipc_voucher_attr_control_t *VAR_7)
{
 ipc_voucher_attr_control_t VAR_8;

 if (VAR_4 < VAR_2) {
  FUNC_2();
  if (((void*)0) != VAR_6)
   *VAR_6 = VAR_3[VAR_4].ivgte_manager;
  VAR_8 = VAR_3[VAR_4].ivgte_control;
  if (VAR_0 != VAR_8) {
   FUNC_0(VAR_4 == VAR_8->ivac_key_index);
   if (VAR_5) {
    FUNC_0(((void*)0) != VAR_7);
    FUNC_1(VAR_8);
   }
  }
  FUNC_3();
  if (((void*)0) != VAR_7)
   *VAR_7 = VAR_8;
 } else {
  if (((void*)0) != VAR_6)
   *VAR_6 = VAR_1;
  if (((void*)0) != VAR_7)
   *VAR_7 = VAR_0;
 }
}
