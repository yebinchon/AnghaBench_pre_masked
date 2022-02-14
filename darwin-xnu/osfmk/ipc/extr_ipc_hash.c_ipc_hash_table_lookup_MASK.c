
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef size_t mach_port_index_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
typedef size_t ipc_entry_num_t ;
typedef int boolean_t ;
struct TYPE_4__ {size_t ie_index; scalar_t__ ie_object; int ie_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (scalar_t__,size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (size_t,int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;

boolean_t
FUNC_4(
 ipc_entry_t VAR_3,
 ipc_entry_num_t VAR_4,
 ipc_object_t VAR_5,
 mach_port_name_t *VAR_6,
 ipc_entry_t *VAR_7)
{
 mach_port_index_t VAR_8, VAR_9;

 if (VAR_5 == VAR_1) {
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_4);
 while ((VAR_9 = VAR_3[VAR_8].ie_index) != 0) {
  ipc_entry_t VAR_10;

  FUNC_3(VAR_9 < VAR_4);
  VAR_10 = &VAR_3[VAR_9];
  if (VAR_10->ie_object == VAR_5) {
   *VAR_7 = VAR_10;
   *VAR_6 = FUNC_2(VAR_9,
      FUNC_0(VAR_10->ie_bits));
   return VAR_2;
  }

  if (++VAR_8 == VAR_4)
   VAR_8 = 0;
 }

 return VAR_0;
}
