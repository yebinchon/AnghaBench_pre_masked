
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef TYPE_1__* ipc_table_size_t ;
typedef size_t ipc_table_elems_t ;
typedef TYPE_2__* ipc_port_t ;
typedef TYPE_3__* ipc_port_request_t ;
typedef size_t ipc_port_request_index_t ;
struct TYPE_12__ {int ipr_soright; int ipr_name; TYPE_1__* ipr_size; } ;
struct TYPE_11__ {TYPE_3__* ip_requests; } ;
struct TYPE_10__ {size_t its_size; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

void
FUNC_6(
 ipc_port_t VAR_1)
{
 ipc_port_request_t VAR_2 = VAR_1->ip_requests;

 FUNC_3(!FUNC_4(VAR_1));
 if (VAR_2 != VAR_0) {
  ipc_table_size_t VAR_3 = VAR_2->ipr_size;
  ipc_table_elems_t VAR_4 = VAR_3->its_size;
  ipc_port_request_index_t VAR_5;
  for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++) {
   ipc_port_request_t VAR_6 = &VAR_2[VAR_5];
   mach_port_name_t VAR_7 = VAR_6->ipr_name;
   ipc_port_t VAR_8 = FUNC_0(VAR_6->ipr_soright);

   if (FUNC_2(VAR_7) && FUNC_1(VAR_8)) {
    FUNC_5(VAR_8, VAR_7);
   }
  }
 }
}
