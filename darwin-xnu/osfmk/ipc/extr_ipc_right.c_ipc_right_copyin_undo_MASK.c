
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_5__ {int ie_bits; scalar_t__ ie_object; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(
 ipc_space_t VAR_10,
 mach_port_name_t VAR_11,
 ipc_entry_t VAR_12,
 mach_msg_type_name_t VAR_13,
 ipc_object_t VAR_14,
 ipc_port_t VAR_15)
{
 ipc_entry_bits_t VAR_16;

 VAR_16 = VAR_12->ie_bits;

 FUNC_2(FUNC_6(VAR_10));

 FUNC_2((VAR_13 == VAR_4) ||
        (VAR_13 == VAR_3) ||
        (VAR_13 == VAR_5));

 if (VAR_15 != VAR_2) {
  FUNC_2((VAR_13 == VAR_4) ||
         (VAR_13 == VAR_5));
  FUNC_2(FUNC_0(VAR_16) == VAR_7);
  FUNC_2(VAR_14 != VAR_1);

  VAR_12->ie_bits = ((VAR_16 &~ VAR_0) |
      VAR_6 | 2);

 } else if (FUNC_0(VAR_16) == VAR_7) {
  FUNC_2((VAR_13 == VAR_4) ||
         (VAR_13 == VAR_5));

  VAR_12->ie_bits = ((VAR_16 &~ VAR_0) |
      VAR_6 | 1);
 } else if (FUNC_0(VAR_16) == VAR_6) {
  FUNC_2(VAR_14 == VAR_1);
  FUNC_2(FUNC_1(VAR_16) > 0);

  if (VAR_13 != VAR_3) {
   FUNC_2(FUNC_1(VAR_16) <= VAR_9);

   if (FUNC_1(VAR_16) < VAR_9)
    VAR_12->ie_bits = VAR_16+1;
  }
 } else {
  FUNC_2((VAR_13 == VAR_4) ||
         (VAR_13 == VAR_3));
  FUNC_2(FUNC_0(VAR_16) == VAR_8);
  FUNC_2(VAR_14 != VAR_1);
  FUNC_2(VAR_12->ie_object == VAR_14);
  FUNC_2(FUNC_1(VAR_16) > 0);

  if (VAR_13 != VAR_3) {
   FUNC_2(FUNC_1(VAR_16) <= VAR_9);

   if (FUNC_1(VAR_16) < VAR_9)
    VAR_12->ie_bits = VAR_16+1;
  }






  (void) FUNC_5(VAR_10, (ipc_port_t) VAR_14,
           VAR_11, VAR_12);

 }
 FUNC_4(VAR_10, VAR_11, VAR_12);


 if (VAR_14 != VAR_1)
  FUNC_3(VAR_14);
}
