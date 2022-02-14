
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ demoplaying; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_4( void ) {
 if ( VAR_2.state != VAR_0 || VAR_1.demoplaying ) {
  FUNC_3 ("Not connected to a server.\n");
  return;
 }


 if ( FUNC_1() > 1 ) {
  FUNC_0( FUNC_2() );
 }
}
