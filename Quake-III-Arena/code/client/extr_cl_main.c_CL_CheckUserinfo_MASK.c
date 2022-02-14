
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;

void FUNC_3( void ) {

 if ( VAR_3.state < VAR_0 ) {
  return;
 }

 if ( VAR_2->integer ) {
  return;
 }

 if ( VAR_4 & VAR_1 ) {
  VAR_4 &= ~VAR_1;
  FUNC_0( FUNC_2("userinfo \"%s\"", FUNC_1( VAR_1 ) ) );
 }

}
