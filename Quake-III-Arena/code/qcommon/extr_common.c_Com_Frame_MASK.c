
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int integer; void* modified; int value; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {int integer; void* modified; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,int,int,int,...) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int,void*) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

void FUNC_13( void ) {

 int VAR_15, VAR_16;
 static int VAR_17;
 int VAR_18;

 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;





 if ( FUNC_12 (VAR_0) ) {
  return;
 }



 VAR_19 =0;
 VAR_20 =0;
 VAR_21 =0;
 VAR_22 = 0;
 VAR_23 = 0;



 VAR_18 = 0x87243987;


 FUNC_7();


 if ( VAR_9->modified ) {
  if ( !VAR_1->value ) {
   FUNC_11( VAR_9->integer, VAR_10 );
  }
  VAR_9->modified = VAR_10;
 }




 if ( VAR_7->integer ) {
  VAR_19 = FUNC_10 ();
 }


 if ( !VAR_1->integer && VAR_5->integer > 0 && !VAR_8->integer ) {
  VAR_16 = 1000 / VAR_5->integer;
 } else {
  VAR_16 = 1;
 }
 do {
  VAR_4 = FUNC_4();
  if ( VAR_17 > VAR_4 ) {
   VAR_17 = VAR_4;
  }
  VAR_15 = VAR_4 - VAR_17;
 } while ( VAR_15 < VAR_16 );
 FUNC_3 ();

 VAR_17 = VAR_4;


 VAR_2 = VAR_15;
 VAR_15 = FUNC_5( VAR_15 );




 if ( VAR_7->integer ) {
  VAR_20 = FUNC_10 ();
 }

 FUNC_9( VAR_15 );





 if ( VAR_1->modified ) {

  FUNC_8( "dedicated", "0", 0 );
  VAR_1->modified = VAR_10;
  if ( !VAR_1->integer ) {
   FUNC_1();
   FUNC_11( VAR_9->integer, VAR_10 );
  } else {
   FUNC_2();
   FUNC_11( 1, VAR_11 );
  }
 }




 if ( !VAR_1->integer ) {




  if ( VAR_7->integer ) {
   VAR_21 = FUNC_10 ();
  }
  FUNC_4();
  FUNC_3 ();





  if ( VAR_7->integer ) {
   VAR_22 = FUNC_10 ();
  }

  FUNC_0( VAR_15 );

  if ( VAR_7->integer ) {
   VAR_23 = FUNC_10 ();
  }
 }




 if ( VAR_7->integer ) {
  int VAR_24, VAR_25, VAR_26, VAR_27;

  VAR_24 = VAR_23 - VAR_20;
  VAR_25 = VAR_21 - VAR_20;
  VAR_26 = VAR_20 - VAR_19 + VAR_22 - VAR_21;
  VAR_27 = VAR_23 - VAR_22;
  VAR_25 -= VAR_14;
  VAR_27 -= VAR_13 + VAR_12;

  FUNC_6 ("frame:%i all:%3i sv:%3i ev:%3i cl:%3i gm:%3i rf:%3i bk:%3i\n",
      VAR_3, VAR_24, VAR_25, VAR_26, VAR_27, VAR_14, VAR_13, VAR_12 );
 }




 if ( VAR_6->integer ) {

  extern int VAR_28, VAR_29, VAR_30;
  extern int VAR_31;

  FUNC_6 ("%4i traces  (%ib %ip) %4i points\n", VAR_28,
   VAR_29, VAR_30, VAR_31);
  VAR_28 = 0;
  VAR_29 = 0;
  VAR_30 = 0;
  VAR_31 = 0;
 }


 VAR_18 = VAR_17 * 0x87243987;

 VAR_3++;
}
