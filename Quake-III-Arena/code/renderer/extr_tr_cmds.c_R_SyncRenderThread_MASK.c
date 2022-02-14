
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int smpActive; } ;
struct TYPE_3__ {int registered; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_2( void ) {
 if ( !VAR_2.registered ) {
  return;
 }
 FUNC_1( VAR_1 );

 if ( !VAR_0.smpActive ) {
  return;
 }
 FUNC_0();
}
