
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mach_port_type_t ;
typedef int mach_port_name_t ;
typedef int ipc_port_timestamp_t ;
typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ ipc_port_request_index_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef size_t ipc_entry_num_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_11__ {int ie_bits; scalar_t__ ie_request; scalar_t__ ie_object; } ;
struct TYPE_10__ {int ip_timestamp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,scalar_t__) ;

void
FUNC_9(
 ipc_port_timestamp_t VAR_5,
 ipc_entry_t VAR_6,
 mach_port_name_t VAR_7,
 mach_port_name_t *VAR_8,
 mach_port_type_t *VAR_9,
 ipc_entry_num_t *VAR_10)
{
 ipc_entry_bits_t VAR_11;
 ipc_port_request_index_t VAR_12;
 mach_port_type_t VAR_13 = 0;
 ipc_entry_num_t VAR_14;
 ipc_port_t VAR_15;

 VAR_11 = VAR_6->ie_bits;
 VAR_12 = VAR_6->ie_request;
 FUNC_3(VAR_15 = (ipc_port_t) VAR_6->ie_object);

 if (VAR_11 & VAR_3) {
  FUNC_4(FUNC_2(VAR_15));

  if (VAR_12 != VAR_1) {
   FUNC_6(VAR_15);
   FUNC_4(FUNC_5(VAR_15));
   VAR_13 |= FUNC_8(VAR_15, VAR_7, VAR_12);
   FUNC_7(VAR_15);
  }

 } else if (VAR_11 & VAR_4) {
  mach_port_type_t VAR_16;

  FUNC_4(FUNC_2(VAR_15));
  FUNC_6(VAR_15);

  VAR_16 = (VAR_12 != VAR_1) ?
     FUNC_8(VAR_15, VAR_7, VAR_12) : 0;






  if (FUNC_5(VAR_15) || FUNC_1(VAR_5, VAR_15->ip_timestamp)) {
   VAR_13 |= VAR_16;
  } else {
   VAR_11 &= ~(VAR_0);
   VAR_11 |= VAR_2;

   if (VAR_16 != 0)
    VAR_11++;
  }
  FUNC_7(VAR_15);
 }

 VAR_13 |= FUNC_0(VAR_11);

 VAR_14 = *VAR_10;
 VAR_8[VAR_14] = VAR_7;
 VAR_9[VAR_14] = VAR_13;
 *VAR_10 = VAR_14+1;
}
