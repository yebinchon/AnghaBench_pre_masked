
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef size_t ipc_table_elems_t ;
typedef TYPE_2__* ipc_port_t ;
typedef TYPE_3__* ipc_port_request_t ;
typedef size_t ipc_port_request_index_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {int ipr_soright; int ipr_name; TYPE_1__* ipr_size; } ;
struct TYPE_14__ {scalar_t__ ip_sprequests; scalar_t__ ip_spimportant; TYPE_3__* ip_requests; } ;
struct TYPE_13__ {size_t its_size; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,int) ;

void
FUNC_10(
 ipc_port_t VAR_4)
{
 ipc_port_request_index_t VAR_5 = 0;
 ipc_table_elems_t VAR_6 = 0;





 if (VAR_4->ip_sprequests == 0)
  return;

 FUNC_6(VAR_4);
 if (VAR_4->ip_sprequests == 0) {
  FUNC_7(VAR_4);
  return;
 }
 VAR_4->ip_sprequests = 0;

revalidate:
 if (FUNC_5(VAR_4)) {
  ipc_port_request_t VAR_7;


  VAR_7 = VAR_4->ip_requests;
  FUNC_4(VAR_7 != VAR_1);





  if (VAR_6 == 0)
   VAR_6 = VAR_7->ipr_size->its_size;


  while (++VAR_5 < VAR_6) {
   ipc_port_request_t VAR_8 = &VAR_7[VAR_5];
   mach_port_name_t VAR_9 = VAR_8->ipr_name;
   ipc_port_t VAR_10 = FUNC_0(VAR_8->ipr_soright);
   boolean_t VAR_11 = FUNC_1(VAR_8->ipr_soright);

   if (FUNC_3(VAR_9) && VAR_11 && FUNC_2(VAR_10)) {

    VAR_8->ipr_soright = VAR_2;
    FUNC_7(VAR_4);

    FUNC_8(VAR_10, VAR_9);

    FUNC_6(VAR_4);
    goto revalidate;
   }
  }
 }
 FUNC_7(VAR_4);
 return;
}
