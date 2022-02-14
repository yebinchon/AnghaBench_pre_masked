
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ inuse; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {int num_entities; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_0( void ) {
 int VAR_5;
 gentity_t *VAR_6;

 VAR_6 = &VAR_1[VAR_0];
 for ( VAR_5 = VAR_0; VAR_5 < VAR_2.num_entities; VAR_5++, VAR_6++) {
  if ( VAR_6->inuse ) {
   continue;
  }

  return VAR_4;
 }
 return VAR_3;
}
