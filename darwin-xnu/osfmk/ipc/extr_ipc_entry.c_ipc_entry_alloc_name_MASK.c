
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ mach_port_index_t ;
typedef scalar_t__ mach_port_gen_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
struct TYPE_12__ {scalar_t__ ie_next; scalar_t__ ie_object; int ie_request; scalar_t__ ie_bits; } ;
struct TYPE_11__ {scalar_t__ is_table_size; int is_table_free; TYPE_2__* is_table; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

kern_return_t
FUNC_13(
 ipc_space_t VAR_6,
 mach_port_name_t VAR_7,
 ipc_entry_t *VAR_8)
{
 mach_port_index_t VAR_9 = FUNC_3(VAR_7);
 mach_port_gen_t VAR_10 = FUNC_2(VAR_7);

 if (VAR_9 > FUNC_9())
  return VAR_4;

 FUNC_6(FUNC_5(VAR_7));


 FUNC_11(VAR_6);

 for (;;) {
  ipc_entry_t VAR_11;

  if (!FUNC_10(VAR_6)) {
   FUNC_12(VAR_6);
   return VAR_3;
  }
  if (VAR_9 < VAR_6->is_table_size) {
   ipc_entry_t VAR_12 = VAR_6->is_table;

   VAR_11 = &VAR_12[VAR_9];

   if (VAR_9 == 0) {

    FUNC_6(!FUNC_1(VAR_11->ie_bits));
    FUNC_6(!FUNC_0(VAR_11->ie_bits));
    FUNC_12(VAR_6);
    return VAR_2;
   } else if (FUNC_1(VAR_11->ie_bits)) {
    if (FUNC_0(VAR_11->ie_bits) == VAR_10) {

     *VAR_8 = VAR_11;
     return VAR_5;
    } else {


     FUNC_12(VAR_6);
     return VAR_2;
    }
   } else {
    mach_port_index_t VAR_13, VAR_14;






    for (VAR_13 = 0;
         (VAR_14 = VAR_12[VAR_13].ie_next)
       != VAR_9;
         VAR_13 = VAR_14)
     continue;

    VAR_12[VAR_13].ie_next =
     VAR_12[VAR_14].ie_next;
    VAR_6->is_table_free--;


    FUNC_8(VAR_6,
         FUNC_4(VAR_13,
          FUNC_0(VAR_12[VAR_13].ie_bits)),
         &VAR_12[VAR_13]);

    VAR_11->ie_bits = VAR_10;
    VAR_11->ie_request = VAR_0;
    *VAR_8 = VAR_11;

    FUNC_6(VAR_11->ie_object == VAR_1);
    return VAR_5;
   }
  }







                kern_return_t VAR_15;
  VAR_15 = FUNC_7(VAR_6, VAR_9 + 1);
  FUNC_6(VAR_15 != VAR_4);
  if (VAR_15 != VAR_5) {

   return VAR_15;
  }
  continue;
 }
}
