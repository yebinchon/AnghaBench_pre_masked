
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svEntity_t ;
typedef int sharedEntity_t ;
struct TYPE_2__ {int * svEntities; } ;


 int * FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

sharedEntity_t *FUNC_1( svEntity_t *VAR_1 ) {
 int VAR_2;

 VAR_2 = VAR_1 - VAR_0.svEntities;
 return FUNC_0( VAR_2 );
}
