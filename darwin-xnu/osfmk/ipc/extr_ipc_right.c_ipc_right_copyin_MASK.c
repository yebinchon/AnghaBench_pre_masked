
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
typedef int boolean_t ;
struct TYPE_21__ {int ie_bits; scalar_t__ ie_object; scalar_t__ ie_request; } ;
struct TYPE_20__ {int ip_tempowner; int ip_impcount; int ip_sorights; int ip_srights; int ip_receiver; int ip_receiver_name; int ip_imp_task; int ip_messages; struct TYPE_20__* ip_destination; int ip_mscount; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ,TYPE_2__*) ;
 int FUNC_11 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_12 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (int ,TYPE_1__*,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_15 (int ,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_16 (int ) ;

kern_return_t
FUNC_17(
 ipc_space_t VAR_19,
 mach_port_name_t VAR_20,
 ipc_entry_t VAR_21,
 mach_msg_type_name_t VAR_22,
 boolean_t VAR_23,
 ipc_object_t *VAR_24,
 ipc_port_t *VAR_25,
 ipc_port_t *VAR_26,
 int *VAR_27)
{
 ipc_entry_bits_t VAR_28;
 ipc_port_t VAR_29;

 *VAR_26 = VAR_7;
 *VAR_27 = 0;

 VAR_28 = VAR_21->ie_bits;

 FUNC_2(FUNC_16(VAR_19));

 switch (VAR_22) {
     case 132: {

  if ((VAR_28 & VAR_13) == 0)
   goto invalid_right;

  VAR_29 = (ipc_port_t) VAR_21->ie_object;
  FUNC_2(VAR_29 != VAR_7);

  FUNC_7(VAR_29);
  FUNC_2(FUNC_6(VAR_29));
  FUNC_2(VAR_29->ip_receiver_name == VAR_20);
  FUNC_2(VAR_29->ip_receiver == VAR_19);

  VAR_29->ip_mscount++;
  VAR_29->ip_srights++;
  FUNC_8(VAR_29);
  FUNC_9(VAR_29);

  *VAR_24 = (ipc_object_t) VAR_29;
  *VAR_25 = VAR_7;
  break;
     }

     case 131: {

  if ((VAR_28 & VAR_13) == 0)
   goto invalid_right;

  VAR_29 = (ipc_port_t) VAR_21->ie_object;
  FUNC_2(VAR_29 != VAR_7);

  FUNC_7(VAR_29);
  FUNC_2(FUNC_6(VAR_29));
  FUNC_2(VAR_29->ip_receiver_name == VAR_20);
  FUNC_2(VAR_29->ip_receiver == VAR_19);

  VAR_29->ip_sorights++;
  FUNC_8(VAR_29);
  FUNC_9(VAR_29);

  *VAR_24 = (ipc_object_t) VAR_29;
  *VAR_25 = VAR_7;
  break;
     }

     case 130: {
  ipc_port_t VAR_30 = VAR_7;

  if ((VAR_28 & VAR_13) == 0)
   goto invalid_right;
  if (FUNC_5(VAR_21->ie_object) != VAR_4) {






   return VAR_8;
  }

  VAR_29 = (ipc_port_t) VAR_21->ie_object;
  FUNC_2(VAR_29 != VAR_7);

  FUNC_7(VAR_29);
  FUNC_2(FUNC_6(VAR_29));
  FUNC_2(VAR_29->ip_receiver_name == VAR_20);
  FUNC_2(VAR_29->ip_receiver == VAR_19);

  if (VAR_28 & VAR_14) {
   FUNC_2(FUNC_0(VAR_28) ==
     VAR_16);
   FUNC_2(FUNC_1(VAR_28) > 0);
   FUNC_2(VAR_29->ip_srights > 0);

   FUNC_12(VAR_19, (ipc_object_t) VAR_29,
     VAR_20, VAR_21);
   FUNC_8(VAR_29);
  } else {
   FUNC_2(FUNC_0(VAR_28) == VAR_13);
   FUNC_2(FUNC_1(VAR_28) == 0);

   VAR_30 = FUNC_15(VAR_19, VAR_29,
            VAR_20, VAR_21);
   VAR_21->ie_object = VAR_6;
  }
  VAR_21->ie_bits = VAR_28 &~ VAR_13;
  FUNC_10(VAR_19, VAR_20, VAR_21);

  (void)FUNC_13(VAR_29, VAR_0);
  FUNC_3(&VAR_29->ip_messages);
  VAR_29->ip_receiver_name = VAR_11;
  VAR_29->ip_destination = VAR_7;
  FUNC_4(&VAR_29->ip_messages);
  FUNC_9(VAR_29);

  *VAR_24 = (ipc_object_t) VAR_29;
  *VAR_25 = VAR_30;
  break;
     }

     case 133: {

  if (VAR_28 & VAR_12)
   goto copy_dead;



  if ((VAR_28 & VAR_17) == 0)
   goto invalid_right;

  FUNC_2(FUNC_1(VAR_28) > 0);

  VAR_29 = (ipc_port_t) VAR_21->ie_object;
  FUNC_2(VAR_29 != VAR_7);

  if (FUNC_14(VAR_19, VAR_29, VAR_20, VAR_21)) {
   VAR_28 = VAR_21->ie_bits;
   *VAR_26 = VAR_29;
   goto copy_dead;
  }


  if ((VAR_28 & VAR_14) == 0) {
   FUNC_2(FUNC_0(VAR_28) == VAR_15);
   FUNC_2(VAR_29->ip_sorights > 0);

   FUNC_9(VAR_29);
   goto invalid_right;
  }

  FUNC_2(VAR_29->ip_srights > 0);

  VAR_29->ip_srights++;
  FUNC_8(VAR_29);
  FUNC_9(VAR_29);

  *VAR_24 = (ipc_object_t) VAR_29;
  *VAR_25 = VAR_7;
  break;
     }

     case 129: {
  ipc_port_t VAR_31 = VAR_7;

  if (VAR_28 & VAR_12)
   goto move_dead;



  if ((VAR_28 & VAR_17) == 0)
   goto invalid_right;

  FUNC_2(FUNC_1(VAR_28) > 0);

  VAR_29 = (ipc_port_t) VAR_21->ie_object;
  FUNC_2(VAR_29 != VAR_7);

  if (FUNC_14(VAR_19, VAR_29, VAR_20, VAR_21)) {
   VAR_28 = VAR_21->ie_bits;
   *VAR_26 = VAR_29;
   goto move_dead;
  }


  if ((VAR_28 & VAR_14) == 0) {
   FUNC_2(FUNC_0(VAR_28) == VAR_15);
   FUNC_2(VAR_29->ip_sorights > 0);

   FUNC_9(VAR_29);
   goto invalid_right;
  }

  FUNC_2(VAR_29->ip_srights > 0);

  if (FUNC_1(VAR_28) == 1) {
   if (VAR_28 & VAR_13) {
    FUNC_2(VAR_29->ip_receiver_name == VAR_20);
    FUNC_2(VAR_29->ip_receiver == VAR_19);
    FUNC_2(FUNC_0(VAR_28) ==
      VAR_16);

    FUNC_8(VAR_29);
   } else {
    FUNC_2(FUNC_0(VAR_28) ==
      VAR_14);

    VAR_31 = FUNC_15(VAR_19, VAR_29,
             VAR_20, VAR_21);
    FUNC_11(VAR_19, (ipc_object_t) VAR_29,
      VAR_20, VAR_21);
    VAR_21->ie_object = VAR_6;

   }
   VAR_21->ie_bits = VAR_28 &~
    (VAR_1|VAR_14);
  } else {
   VAR_29->ip_srights++;
   FUNC_8(VAR_29);

   if (FUNC_1(VAR_28) < VAR_18)
    VAR_21->ie_bits = VAR_28-1;
  }

  FUNC_10(VAR_19, VAR_20, VAR_21);
  FUNC_9(VAR_29);

  *VAR_24 = (ipc_object_t) VAR_29;
  *VAR_25 = VAR_31;
  break;
     }

     case 128: {
  ipc_port_t VAR_32;

  if (VAR_28 & VAR_12)
   goto move_dead;



  if ((VAR_28 & VAR_17) == 0)
   goto invalid_right;

  FUNC_2(FUNC_1(VAR_28) > 0);

  VAR_29 = (ipc_port_t) VAR_21->ie_object;
  FUNC_2(VAR_29 != VAR_7);

  if (FUNC_14(VAR_19, VAR_29, VAR_20, VAR_21)) {
   VAR_28 = VAR_21->ie_bits;
   *VAR_26 = VAR_29;
   goto move_dead;
  }


  if ((VAR_28 & VAR_15) == 0) {
   FUNC_2(VAR_28 & VAR_14);
   FUNC_2(VAR_29->ip_srights > 0);

   FUNC_9(VAR_29);
   goto invalid_right;
  }

  FUNC_2(FUNC_0(VAR_28) == VAR_15);
  FUNC_2(FUNC_1(VAR_28) == 1);
  FUNC_2(VAR_29->ip_sorights > 0);

  VAR_32 = FUNC_15(VAR_19, VAR_29, VAR_20, VAR_21);
  FUNC_9(VAR_29);

  VAR_21->ie_object = VAR_6;
  VAR_21->ie_bits = VAR_28 &~
   (VAR_1 | VAR_15);
  FUNC_10(VAR_19, VAR_20, VAR_21);
  *VAR_24 = (ipc_object_t) VAR_29;
  *VAR_25 = VAR_32;
  break;
     }

     default:
     invalid_right:
  return VAR_9;
 }

 return VAR_10;

    copy_dead:
 FUNC_2(FUNC_0(VAR_28) == VAR_12);
 FUNC_2(FUNC_1(VAR_28) > 0);
 FUNC_2(VAR_21->ie_request == VAR_2);
 FUNC_2(VAR_21->ie_object == 0);

 if (!VAR_23)
  goto invalid_right;

 *VAR_24 = VAR_5;
 *VAR_25 = VAR_7;
 return VAR_10;

    move_dead:
 FUNC_2(FUNC_0(VAR_28) == VAR_12);
 FUNC_2(FUNC_1(VAR_28) > 0);
 FUNC_2(VAR_21->ie_request == VAR_2);
 FUNC_2(VAR_21->ie_object == 0);

 if (!VAR_23)
  goto invalid_right;

 if (FUNC_1(VAR_28) == 1) {
  VAR_28 &= ~VAR_12;
 }

 if (FUNC_1(VAR_28) < VAR_18)
  VAR_21->ie_bits = VAR_28-1;

 FUNC_10(VAR_19, VAR_20, VAR_21);
 *VAR_24 = VAR_5;
 *VAR_25 = VAR_7;
 return VAR_10;

}
