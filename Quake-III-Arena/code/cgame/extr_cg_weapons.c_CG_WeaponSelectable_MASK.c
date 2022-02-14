
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {TYPE_2__* snap; } ;
struct TYPE_4__ {int* stats; int * ammo; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static qboolean FUNC_0( int VAR_4 ) {
 if ( !VAR_1.snap->ps.ammo[VAR_4] ) {
  return VAR_2;
 }
 if ( ! (VAR_1.snap->ps.stats[ VAR_0 ] & ( 1 << VAR_4 ) ) ) {
  return VAR_2;
 }

 return VAR_3;
}
