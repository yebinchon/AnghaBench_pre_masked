
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


struct TYPE_14__ {scalar_t__ time; int scoreBoardShowing; TYPE_2__* snap; int showScores; scalar_t__ levelShot; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ orderTime; scalar_t__ gametype; scalar_t__ orderPending; } ;
struct TYPE_8__ {scalar_t__ pm_type; scalar_t__* persistant; scalar_t__* stats; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 scalar_t__ VAR_0 ;
 int FUNC_23 () ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;

__attribute__((used)) static void FUNC_24( void ) {






 if ( VAR_5.levelShot ) {
  return;
 }

 if ( VAR_6.integer == 0 ) {
  return;
 }

 if ( VAR_5.snap->ps.pm_type == VAR_2 ) {
  FUNC_7();
  return;
 }






 if ( VAR_5.snap->ps.persistant[VAR_1] == VAR_4 ) {
  FUNC_14();
  FUNC_3();
  FUNC_4();
 } else {

  if ( !VAR_5.showScores && VAR_5.snap->ps.stats[VAR_3] > 0 ) {







   FUNC_15();


   FUNC_1();




   FUNC_3();
   FUNC_4();
   FUNC_22();


   FUNC_6();



   FUNC_12();
  }

  if ( VAR_9.gametype >= VAR_0 ) {

   FUNC_16();

  }
 }

 FUNC_20();
 FUNC_17();

 FUNC_8();






 FUNC_19();



 FUNC_10();
 FUNC_9();


 if ( !FUNC_5() ) {
  FUNC_21();
 }


 VAR_5.scoreBoardShowing = FUNC_13();
 if ( !VAR_5.scoreBoardShowing) {
  FUNC_2();
 }
}
