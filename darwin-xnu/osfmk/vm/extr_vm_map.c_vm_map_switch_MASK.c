
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_4__ {int map; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

vm_map_t
FUNC_5(
 vm_map_t VAR_0)
{
 int VAR_1;
 thread_t VAR_2 = FUNC_2();
 vm_map_t VAR_3 = VAR_2->map;

 FUNC_3();
 VAR_1 = FUNC_1();




 FUNC_0(VAR_2, VAR_0, VAR_1);

 FUNC_4();
 return(VAR_3);
}
