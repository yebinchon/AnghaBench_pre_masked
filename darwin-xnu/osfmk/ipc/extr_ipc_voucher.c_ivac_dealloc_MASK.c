
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t natural_t ;
typedef size_t iv_index_t ;
typedef TYPE_1__* ipc_voucher_attr_manager_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_19__ {int ivgte_key; TYPE_2__* ivgte_control; TYPE_1__* ivgte_manager; } ;
struct TYPE_18__ {scalar_t__ ivace_refs; } ;
struct TYPE_17__ {scalar_t__ ip_srights; } ;
struct TYPE_16__ {size_t ivac_key_index; size_t ivac_table_size; TYPE_6__* ivac_table; int ivac_refs; TYPE_3__* ivac_port; } ;
struct TYPE_15__ {int (* ivam_release ) (TYPE_1__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_9__* VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_6__*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,TYPE_2__*) ;

void
FUNC_12(ipc_voucher_attr_control_t VAR_5)
{
 ipc_voucher_attr_manager_t VAR_6 = VAR_1;
 iv_index_t VAR_7 = VAR_5->ivac_key_index;
 ipc_port_t VAR_8 = VAR_5->ivac_port;
 natural_t VAR_9;






 FUNC_5();
 if (FUNC_8(&VAR_5->ivac_refs) > 0) {
  FUNC_6();
  return;
 }


 if (VAR_4[VAR_7].ivgte_control == VAR_5) {
  VAR_6 = VAR_4[VAR_7].ivgte_manager;
  VAR_4[VAR_7].ivgte_manager = VAR_1;
  VAR_4[VAR_7].ivgte_control = VAR_0;
  VAR_4[VAR_7].ivgte_key = VAR_2;
 }
 FUNC_6();


 if (VAR_1 != VAR_6)
  (VAR_6->ivam_release)(VAR_6);







 if (FUNC_0(VAR_8)) {
  FUNC_1(FUNC_2(VAR_8));
  FUNC_1(VAR_8->ip_srights == 0);

  FUNC_3(VAR_8);
 }
 FUNC_7(VAR_5->ivac_table, VAR_5->ivac_table_size * sizeof(*VAR_5->ivac_table));
 FUNC_4(VAR_5);
 FUNC_11(VAR_3, VAR_5);
}
