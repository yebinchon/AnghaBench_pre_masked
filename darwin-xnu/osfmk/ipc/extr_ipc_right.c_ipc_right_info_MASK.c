
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_urefs_t ;
typedef int mach_port_type_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef scalar_t__ ipc_port_request_index_t ;
typedef TYPE_1__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_4__ {int ie_bits; scalar_t__ ie_request; scalar_t__ ie_object; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;

kern_return_t
FUNC_11(
 ipc_space_t VAR_5,
 mach_port_name_t VAR_6,
 ipc_entry_t VAR_7,
 mach_port_type_t *VAR_8,
 mach_port_urefs_t *VAR_9)
{
 ipc_port_t VAR_10;
 ipc_entry_bits_t VAR_11;
 mach_port_type_t VAR_12 = 0;
 ipc_port_request_index_t VAR_13;

 VAR_11 = VAR_7->ie_bits;
 VAR_13 = VAR_7->ie_request;
 VAR_10 = (ipc_port_t) VAR_7->ie_object;

 if (VAR_11 & VAR_3) {
  FUNC_3(FUNC_2(VAR_10));

  if (VAR_13 != VAR_0) {
   FUNC_5(VAR_10);
   FUNC_3(FUNC_4(VAR_10));
   VAR_12 |= FUNC_8(VAR_10, VAR_6, VAR_13);
   FUNC_7(VAR_10);
  }
  FUNC_10(VAR_5);

 } else if (VAR_11 & VAR_4) {





  if (!FUNC_9(VAR_5, VAR_10, VAR_6, VAR_7)) {
   if (VAR_13 != VAR_0)
    VAR_12 |= FUNC_8(VAR_10, VAR_6, VAR_13);
   FUNC_7(VAR_10);
   FUNC_10(VAR_5);
  } else {
   VAR_11 = VAR_7->ie_bits;
   FUNC_3(FUNC_0(VAR_11) == VAR_2);
   FUNC_10(VAR_5);
   FUNC_6(VAR_10);
  }
 } else {
  FUNC_10(VAR_5);
 }

 VAR_12 |= FUNC_0(VAR_11);

 *VAR_8 = VAR_12;
 *VAR_9 = FUNC_1(VAR_11);
 return VAR_1;
}
