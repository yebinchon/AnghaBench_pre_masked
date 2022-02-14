
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {TYPE_1__* activemenu; } ;
struct TYPE_3__ {int fullscreen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;

qboolean FUNC_1( void ) {
 if ( VAR_2.activemenu && ( FUNC_0() & VAR_0 ) ) {
  return VAR_2.activemenu->fullscreen;
 }

 return VAR_1;
}
