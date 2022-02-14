
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ state; int keyCatchers; int realFrametime; int frametime; int realtime; int framecount; scalar_t__ cddialog; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (double,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,int ,int ) ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

void FUNC_13 ( int VAR_16 ) {

 if ( !VAR_11->integer ) {
  return;
 }

 if ( VAR_10.cddialog ) {

  VAR_10.cddialog = VAR_14;
  FUNC_12( VAR_15, VAR_6, VAR_5 );
 } else if ( VAR_10.state == VAR_1 && !( VAR_10.keyCatchers & VAR_3 )
  && !VAR_12->integer ) {

  FUNC_10();
  FUNC_12( VAR_15, VAR_6, VAR_4 );
 }


 if ( VAR_7->integer && VAR_16) {

  if ( VAR_10.state == VAR_0 || VAR_8->integer) {
   FUNC_5( VAR_2, "screenshot silent\n" );
  }

  VAR_16 = (1000 / VAR_7->integer) * VAR_13->value;
  if (VAR_16 == 0) {
   VAR_16 = 1;
  }
 }


 VAR_10.realFrametime = VAR_16;


 VAR_10.frametime = VAR_16;

 VAR_10.realtime += VAR_10.frametime;

 if ( VAR_9->integer ) {
  FUNC_7 ( VAR_10.realFrametime * 0.25, 0 );
 }


 FUNC_2();



 FUNC_1();


 FUNC_3();


 FUNC_0();


 FUNC_4();


 FUNC_9();


 FUNC_11();


 FUNC_8();

 FUNC_6();

 VAR_10.framecount++;
}
