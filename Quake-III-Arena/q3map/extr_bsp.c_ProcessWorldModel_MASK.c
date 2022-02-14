
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
typedef int qboolean ;
struct TYPE_30__ {int brushes; scalar_t__ firstDrawSurf; } ;
typedef TYPE_2__ entity_t ;
typedef int bspface_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int * FUNC_18 (int ) ;
 int FUNC_19 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,int ) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_26 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_27( void ) {
 entity_t *VAR_10;
 tree_t *VAR_11;
 bspface_t *VAR_12;
 qboolean VAR_13;

 FUNC_2();

 VAR_10 = &VAR_0[0];
 VAR_10->firstDrawSurf = 0;


 FUNC_21( VAR_10 );



 VAR_12 = FUNC_16 ( VAR_0[0].brushes );
 VAR_11 = FUNC_5( VAR_12 );
 FUNC_17 (VAR_11);
 FUNC_9( VAR_10, VAR_11 );


 if ( FUNC_12 (VAR_11) ) {


  FUNC_6 (VAR_11->headnode);




  FUNC_3( VAR_10, VAR_11 );

  VAR_12 = FUNC_18( VAR_0[0].brushes );
  FUNC_14 (VAR_11);
  VAR_11 = FUNC_5( VAR_12 );
  FUNC_17( VAR_11 );
  FUNC_9( VAR_10, VAR_11 );
  VAR_13 = VAR_7;
 } else {
  FUNC_25 ("**********************\n");
  FUNC_25 ("******* leaked *******\n");
  FUNC_25 ("**********************\n");
  FUNC_15 (VAR_11);
  if ( VAR_2 ) {
   FUNC_25 ("--- MAP LEAKED, ABORTING LEAKTEST ---\n");
   FUNC_26 (0);
  }
  VAR_13 = VAR_8;




  FUNC_3( VAR_10, VAR_11 );
 }


 FUNC_20( VAR_11 );
 if ( !VAR_13 ) {
  FUNC_24( VAR_11 );
 }
 if ( VAR_1 ) {

  FUNC_23( VAR_11, VAR_9 );
 }
 FUNC_11 (VAR_11);


 FUNC_7( VAR_10, VAR_11 );


 FUNC_0( VAR_11 );



 if ( !VAR_3 ) {
  FUNC_13();
 }


 if ( !VAR_5 ) {
  FUNC_22( VAR_10, VAR_11 );
 }



 if ( !VAR_4 ) {
  FUNC_19( VAR_10, VAR_11 );
 }


 if ( !VAR_6 ) {
  FUNC_10( VAR_10 );
 }


 FUNC_1( VAR_10 );


 FUNC_8( VAR_10, VAR_11 );

 FUNC_4( VAR_11->headnode );

 FUNC_14 (VAR_11);
}
