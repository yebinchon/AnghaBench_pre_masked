
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ mach_port_urefs_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ ipc_port_request_index_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_22__ {scalar_t__ ie_request; int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_21__ {scalar_t__ ip_receiver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (TYPE_1__*,int ,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*,...) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_13 (int ,int ,TYPE_2__**) ;
 scalar_t__ VAR_14 ;
 int FUNC_14 (int ) ;

kern_return_t
FUNC_15(
 ipc_space_t VAR_15,
 mach_port_name_t VAR_16,
 boolean_t VAR_17,
 boolean_t VAR_18,
 ipc_port_t VAR_19,
 ipc_port_t *VAR_20)
{
 ipc_port_request_index_t VAR_21;
 ipc_port_t VAR_22 = VAR_3;
 ipc_entry_t VAR_23;
 kern_return_t VAR_24;





 for (;;) {
  ipc_port_t VAR_25 = VAR_3;

  VAR_24 = FUNC_13(VAR_15, VAR_16, &VAR_23);
  if (VAR_24 != VAR_7)
   return VAR_24;



  VAR_21 = VAR_23->ie_request;


  if (VAR_19 == VAR_3 && VAR_21 == VAR_1) {
   FUNC_14(VAR_15);
   *VAR_20 = VAR_3;
   return VAR_7;
  }


  if (VAR_23->ie_bits & VAR_10) {
   ipc_port_request_index_t VAR_26;

   VAR_25 = (ipc_port_t) VAR_23->ie_object;
   FUNC_1(VAR_25 != VAR_3);

   if (!FUNC_12(VAR_15, VAR_25, VAR_16, VAR_23)) {



    if (VAR_19 == VAR_3) {
     if (VAR_21 != VAR_1)
      VAR_22 = FUNC_10(VAR_25, VAR_16, VAR_21);
     FUNC_4(VAR_25);
     VAR_23->ie_request = VAR_1;
     FUNC_5(VAR_15, VAR_16, VAR_23);
     FUNC_14(VAR_15);
     break;
    }





    if (VAR_18 && VAR_17 &&
        ((VAR_23->ie_bits & VAR_11) ||
         VAR_25->ip_receiver == VAR_14 || !FUNC_2(VAR_25))) {
     if (VAR_21 != VAR_1)
      VAR_22 = FUNC_10(VAR_25, VAR_16, VAR_21);
     FUNC_4(VAR_25);
     VAR_23->ie_request = VAR_1;
     FUNC_5(VAR_15, VAR_16, VAR_23);
     FUNC_14(VAR_15);

     FUNC_7(VAR_19, VAR_16);
     break;
    }





    if (VAR_21 != VAR_1)
     VAR_22 = FUNC_10(VAR_25, VAR_16, VAR_21);






    VAR_24 = FUNC_9(VAR_25, VAR_16, VAR_19,
           VAR_18, VAR_17,
           &VAR_26);

    if (VAR_24 != VAR_7) {
     FUNC_1(VAR_22 == VAR_3);
     FUNC_14(VAR_15);

     VAR_24 = FUNC_11(VAR_25, VAR_4);


     if (VAR_24 != VAR_7)
      return VAR_24;

     continue;
    }


    FUNC_1(VAR_26 != VAR_1);
    VAR_23->ie_request = VAR_26;
    FUNC_5(VAR_15, VAR_16, VAR_23);
    FUNC_14(VAR_15);







     FUNC_4(VAR_25);

    break;
   }


  }


  if ((VAR_18 || VAR_17) && VAR_19 != VAR_3 &&
      (VAR_23->ie_bits & VAR_8)) {
   mach_port_urefs_t VAR_27 = FUNC_0(VAR_23->ie_bits);

   FUNC_1(VAR_27 > 0);


   if (VAR_27 < VAR_12)
    (VAR_23->ie_bits)++;

   FUNC_5(VAR_15, VAR_16, VAR_23);

   FUNC_14(VAR_15);

   if (VAR_25 != VAR_3)
    FUNC_3(VAR_25);

   FUNC_6(VAR_19, VAR_16);
   VAR_22 = VAR_3;
   break;
  }

  VAR_24 = (VAR_23->ie_bits & VAR_9) ?
      VAR_5 : VAR_6;

  FUNC_14(VAR_15);

  if (VAR_25 != VAR_3)
   FUNC_3(VAR_25);

  return VAR_24;
 }

 *VAR_20 = VAR_22;
 return VAR_7;
}
