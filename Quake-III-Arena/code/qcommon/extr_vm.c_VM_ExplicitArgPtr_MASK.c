
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dataMask; scalar_t__ dataBase; scalar_t__ entryPoint; } ;
typedef TYPE_1__ vm_t ;


 int * VAR_0 ;

void *FUNC_0( vm_t *VAR_1, int VAR_2 ) {
 if ( !VAR_2 ) {
  return ((void*)0);
 }


 if ( VAR_0==((void*)0) )
   return ((void*)0);


 if ( VAR_1->entryPoint ) {
  return (void *)(VAR_1->dataBase + VAR_2);
 }
 else {
  return (void *)(VAR_1->dataBase + (VAR_2 & VAR_1->dataMask));
 }
}
