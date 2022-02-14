
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct ipc_port_request {int dummy; } ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_table_size_t ;
typedef scalar_t__ ipc_table_elems_t ;
typedef TYPE_2__* ipc_port_t ;
typedef TYPE_3__* ipc_port_request_t ;
typedef scalar_t__ ipc_port_request_index_t ;
struct TYPE_18__ {scalar_t__ ipr_next; TYPE_1__* ipr_size; int ipr_name; } ;
struct TYPE_17__ {TYPE_3__* ip_requests; } ;
struct TYPE_16__ {scalar_t__ its_size; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* VAR_6 ;
 TYPE_3__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (void*,void const*,scalar_t__) ;

kern_return_t
FUNC_9(
 ipc_port_t VAR_7,
 ipc_table_elems_t VAR_8)
{
 ipc_table_size_t VAR_9;
 ipc_port_request_t VAR_10, VAR_11;

 FUNC_0(FUNC_1(VAR_7));

 VAR_10 = VAR_7->ip_requests;
 if (VAR_10 == VAR_0)
  VAR_9 = &VAR_6[0];
 else
  VAR_9 = VAR_10->ipr_size + 1;

 if (VAR_8 != VAR_1) {
  if ((VAR_10 != VAR_0) &&
      (VAR_8 <= VAR_10->ipr_size->its_size)) {
   FUNC_5(VAR_7);
   return VAR_4;
         }
  while ((VAR_9->its_size) && (VAR_9->its_size < VAR_8)) {
   VAR_9++;
  }
  if (VAR_9->its_size == 0) {
   FUNC_5(VAR_7);
   return VAR_2;
  }
 }

 FUNC_3(VAR_7);
 FUNC_5(VAR_7);

 if ((VAR_9->its_size == 0) ||
     ((VAR_11 = FUNC_6(VAR_9)) == VAR_0)) {
  FUNC_4(VAR_7);
  return VAR_3;
 }

 FUNC_2(VAR_7);
 if (FUNC_1(VAR_7) && (VAR_7->ip_requests == VAR_10) &&
     ((VAR_10 == VAR_0) || (VAR_10->ipr_size+1 == VAR_9))) {
  ipc_table_size_t VAR_12;
  ipc_table_elems_t VAR_13, VAR_14;
  ipc_port_request_index_t VAR_15, VAR_16;



  if (VAR_10 != VAR_0) {
   VAR_12 = VAR_10->ipr_size;
   VAR_13 = VAR_12->its_size;
   VAR_15 = VAR_10->ipr_next;

   (void) FUNC_8((void *)(VAR_11 + 1),
         (const void *)(VAR_10 + 1),
         (VAR_13 - 1) * sizeof(struct ipc_port_request));
  } else {
   VAR_13 = 1;
   VAR_12 = 0;
   VAR_15 = 0;
  }

  VAR_14 = VAR_9->its_size;
  FUNC_0(VAR_14 > VAR_13);



  for (VAR_16 = VAR_13; VAR_16 < VAR_14; VAR_16++) {
   ipc_port_request_t VAR_17 = &VAR_11[VAR_16];

   VAR_17->ipr_name = VAR_5;
   VAR_17->ipr_next = VAR_15;
   VAR_15 = VAR_16;
  }

  VAR_11->ipr_next = VAR_15;
  VAR_11->ipr_size = VAR_9;
  VAR_7->ip_requests = VAR_11;
  FUNC_5(VAR_7);
  FUNC_4(VAR_7);

  if (VAR_10 != VAR_0) {
   FUNC_7(VAR_12, VAR_10);
         }
 } else {
  FUNC_5(VAR_7);
  FUNC_4(VAR_7);
  FUNC_7(VAR_9, VAR_11);
 }

 return VAR_4;
}
