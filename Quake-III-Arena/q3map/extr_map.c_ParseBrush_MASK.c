
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bspbrush_t ;
struct TYPE_5__ {int* portalareas; int contents; int brushnum; scalar_t__ entitynum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_5 (void) {
 bspbrush_t *VAR_9;

 FUNC_2();

 VAR_4->portalareas[0] = -1;
 VAR_4->portalareas[1] = -1;
 VAR_4->entitynum = VAR_8-1;
 VAR_4->brushnum = VAR_5;


 if ( !FUNC_3( VAR_4 ) ) {
  return;
 }


 FUNC_4( VAR_4 );


 if (VAR_6 && (VAR_4->contents & VAR_0) ) {
  FUNC_1( VAR_4 );
  return;
 }


 if (VAR_7 && (VAR_4->contents & (VAR_1 | VAR_2 | VAR_3)) ) {
  FUNC_1( VAR_4 );
  return;
 }

 VAR_9 = FUNC_0( );
 if ( !VAR_9 ) {
  return;
 }
}
