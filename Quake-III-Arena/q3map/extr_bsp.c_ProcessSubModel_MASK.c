
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {TYPE_2__* headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_24__ {TYPE_4__* brushlist; int planenum; } ;
typedef TYPE_2__ node_t ;
struct TYPE_25__ {TYPE_4__* brushes; int firstDrawSurf; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_26__ {struct TYPE_26__* next; } ;
typedef TYPE_4__ bspbrush_t ;


 TYPE_2__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_1__*) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_13( void ) {
 entity_t *VAR_7;
 tree_t *VAR_8;
 bspbrush_t *VAR_9, *VAR_10;
 node_t *VAR_11;

 FUNC_3 ();

 VAR_7 = &VAR_1[VAR_2];
 VAR_7->firstDrawSurf = VAR_6;

 FUNC_11( VAR_7 );



 VAR_11 = FUNC_0();
 VAR_11->planenum = VAR_0;
 for ( VAR_9 = VAR_7->brushes ; VAR_9 ; VAR_9 = VAR_9->next ) {
  VAR_10 = FUNC_5( VAR_9 );
  VAR_10->next = VAR_11->brushlist;
  VAR_11->brushlist = VAR_10;
 }

 VAR_8 = FUNC_1();
 VAR_8->headnode = VAR_11;

 FUNC_4( VAR_7, VAR_8 );


 if ( !VAR_4 ) {
  FUNC_12( VAR_7, VAR_8 );
 }



 if ( !VAR_3 ) {
  FUNC_10( VAR_7, VAR_8 );
 }


 if ( !VAR_5 ) {
  FUNC_8( VAR_7 );
 }


 FUNC_2( VAR_7 );


 FUNC_7( VAR_7, VAR_8 );

 FUNC_6 ( VAR_11 );

 FUNC_9( VAR_8 );
}
