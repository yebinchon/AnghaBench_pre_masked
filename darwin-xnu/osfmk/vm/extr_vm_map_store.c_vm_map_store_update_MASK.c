
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef void* vm_map_entry_t ;
struct TYPE_4__ {void* hint; void* first_free; int holelistenabled; } ;


 int VAR_0 ;


 void* FUNC_0 (TYPE_1__*) ;

void
FUNC_1( vm_map_t VAR_1, vm_map_entry_t VAR_2, int VAR_3 )
{
 switch (VAR_3) {
  case 129:
   break;
  case 128:
   if((VAR_1->holelistenabled == VAR_0) && ((VAR_2) == (VAR_1)->first_free)) {
    (VAR_1)->first_free = FUNC_0(VAR_1);
   }
   if((VAR_2) == (VAR_1)->hint) {
    (VAR_1)->hint = FUNC_0(VAR_1);
   }
   break;
  default:
   break;
 }
}
