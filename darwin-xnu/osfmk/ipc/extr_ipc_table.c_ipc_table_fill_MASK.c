
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int vm_size_t ;
typedef TYPE_1__* ipc_table_size_t ;
typedef void* ipc_table_elems_t ;
struct TYPE_3__ {void* its_size; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void
FUNC_0(
 ipc_table_size_t VAR_1,
 unsigned int VAR_2,
 unsigned int VAR_3,
 vm_size_t VAR_4)
{
 unsigned int VAR_5;
 vm_size_t VAR_6 = VAR_3 * VAR_4;
 vm_size_t VAR_7;
 vm_size_t VAR_8;



 for (VAR_5 = 0, VAR_7 = 1;
      (VAR_5 < VAR_2) && (VAR_7 < VAR_0);
      VAR_7 <<= 1) {
  if (VAR_7 >= VAR_6) {
   VAR_1[VAR_5].its_size = (ipc_table_elems_t)(VAR_7 / VAR_4);
   VAR_5++;
  }
 }



 for (VAR_8 = VAR_0; VAR_5 < VAR_2;) {
  unsigned int VAR_9;

  for (VAR_9 = 0;
       (VAR_9 < 15) && (VAR_5 < VAR_2);
       VAR_9++, VAR_7 += VAR_8) {
   if (VAR_7 >= VAR_6) {
    VAR_1[VAR_5].its_size = (ipc_table_elems_t)(VAR_7 / VAR_4);
    VAR_5++;
   }
  }
  if (VAR_8 < (vm_size_t)(VAR_0 << 3))
   VAR_8 <<= 1;
 }
}
