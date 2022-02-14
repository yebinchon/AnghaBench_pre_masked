
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_9__ {scalar_t__ is_sub_map; } ;
struct TYPE_8__ {struct TYPE_8__* shadow; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(
        vm_map_entry_t VAR_0,
 vm_object_t VAR_1)
{
        int VAR_2;
 vm_object_t VAR_3;
 vm_object_t VAR_4;

 if (FUNC_0(VAR_0) == 0)
  return(0);

        if (VAR_0->is_sub_map)
  return(0);
 else {
  VAR_2 = 0;

  VAR_3 = FUNC_0(VAR_0);
  FUNC_1(VAR_3);

  while (VAR_3) {
   if (VAR_3 == VAR_1)
    VAR_2++;
   VAR_4 = VAR_3->shadow;
   if (VAR_4)
    FUNC_1(VAR_4);
   FUNC_2(VAR_3);

   VAR_3 = VAR_4;
  }
 }
 return(VAR_2);
}
