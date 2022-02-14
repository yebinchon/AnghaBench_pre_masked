
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dataMask; scalar_t__ dataBase; scalar_t__ entryPoint; } ;


 TYPE_1__* VAR_0 ;

void *FUNC_0( int VAR_1 ) {
 if ( !VAR_1 ) {
  return ((void*)0);
 }

 if ( VAR_0==((void*)0) )
   return ((void*)0);

 if ( VAR_0->entryPoint ) {
  return (void *)(VAR_0->dataBase + VAR_1);
 }
 else {
  return (void *)(VAR_0->dataBase + (VAR_1 & VAR_0->dataMask));
 }
}
