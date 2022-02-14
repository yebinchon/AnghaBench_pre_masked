
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int mach_port_urefs_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_17__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_16__ {scalar_t__ ip_srights; scalar_t__ ip_receiver; int ip_receiver_name; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_1__*,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_8 (scalar_t__,TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static
kern_return_t
FUNC_10(
 ipc_space_t VAR_9,
 mach_port_name_t VAR_10,
 ipc_entry_t VAR_11,
 ipc_object_t *VAR_12,
 ipc_port_t *VAR_13,
 ipc_port_t *VAR_14)
{
 ipc_entry_bits_t VAR_15;
 mach_port_urefs_t VAR_16;
 ipc_port_t VAR_17;
 ipc_port_t VAR_18 = VAR_2;

 *VAR_14 = VAR_2;

 FUNC_2(FUNC_9(VAR_9));

 VAR_15 = VAR_11->ie_bits;

 if ((VAR_15 & VAR_6) == 0)
  goto invalid_right;

 VAR_16 = FUNC_1(VAR_15);
 if (VAR_16 < 2)
  goto invalid_right;

 VAR_17 = (ipc_port_t) VAR_11->ie_object;
 FUNC_2(VAR_17 != VAR_2);

 if (FUNC_7(VAR_9, VAR_17, VAR_10, VAR_11)) {
  *VAR_14 = VAR_17;
  goto invalid_right;
 }


 FUNC_2(VAR_17->ip_srights > 0);

 if (VAR_16 == 2) {
  if (VAR_15 & VAR_5) {
   FUNC_2(VAR_17->ip_receiver_name == VAR_10);
   FUNC_2(VAR_17->ip_receiver == VAR_9);
   FUNC_2(FUNC_0(VAR_15) ==
     VAR_7);

   VAR_17->ip_srights++;
   FUNC_3(VAR_17);
   FUNC_3(VAR_17);
  } else {
   FUNC_2(FUNC_0(VAR_15) == VAR_6);

   VAR_18 = FUNC_8(VAR_9, VAR_17,
            VAR_10, VAR_11);

   VAR_17->ip_srights++;
   FUNC_3(VAR_17);
   FUNC_6(VAR_9, (ipc_object_t) VAR_17,
     VAR_10, VAR_11);
   VAR_11->ie_object = VAR_1;
  }
  VAR_11->ie_bits = VAR_15 &~ (VAR_0|VAR_6);
 } else {
  VAR_17->ip_srights += 2;
  FUNC_3(VAR_17);
  FUNC_3(VAR_17);

  if (FUNC_1(VAR_15) < VAR_8)
   VAR_11->ie_bits = VAR_15-2;
 }
 FUNC_5(VAR_9, VAR_10, VAR_11);

 FUNC_4(VAR_17);

 *VAR_12 = (ipc_object_t) VAR_17;
 *VAR_13 = VAR_18;
 return VAR_4;

    invalid_right:
 return VAR_3;
}
