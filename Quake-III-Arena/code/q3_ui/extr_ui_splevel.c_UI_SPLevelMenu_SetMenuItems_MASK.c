
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


struct TYPE_8__ {int x; int bottom; int flags; } ;
struct TYPE_14__ {TYPE_1__ generic; scalar_t__ shader; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {TYPE_5__ generic; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_2__ generic; } ;
struct TYPE_13__ {char const* selectedArenaInfo; int numMaps; TYPE_4__ item_rightarrow; TYPE_3__ item_leftarrow; TYPE_7__* item_maps; scalar_t__** levelPicNames; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,char const*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void FUNC_8( void ) {
 int VAR_11;
 int VAR_12;
 const char *VAR_13;

 if ( VAR_9 > VAR_3 ) {
  VAR_8 = -1;
 }
 else if ( VAR_8 == -1 ) {
  VAR_8 = 0;
 }

 if( VAR_9 == VAR_10 || VAR_9 == VAR_4 ) {
  VAR_8 = 0;
 }

 if( VAR_8 != -1 ) {
  FUNC_7( "ui_spSelection", VAR_9 * VAR_0 + VAR_8 );
 }

 if( VAR_9 == VAR_10 ) {
  VAR_13 = FUNC_3( "training" );
  VAR_12 = FUNC_6( FUNC_1( VAR_13, "num" ) );
  FUNC_5( 0, VAR_12, VAR_13 );
  VAR_5.selectedArenaInfo = VAR_13;

  VAR_5.item_maps[0].generic.x = 256;
  FUNC_0( &VAR_5.item_maps[0] );
  VAR_5.item_maps[0].generic.bottom += 32;
  VAR_5.numMaps = 1;

  VAR_5.item_maps[1].generic.flags |= VAR_2;
  VAR_5.item_maps[2].generic.flags |= VAR_2;
  VAR_5.item_maps[3].generic.flags |= VAR_2;
  VAR_5.levelPicNames[1][0] = 0;
  VAR_5.levelPicNames[2][0] = 0;
  VAR_5.levelPicNames[3][0] = 0;
  VAR_5.item_maps[1].shader = 0;
  VAR_5.item_maps[2].shader = 0;
  VAR_5.item_maps[3].shader = 0;
 }
 else if( VAR_9 == VAR_4 ) {
  VAR_13 = FUNC_3( "final" );
  VAR_12 = FUNC_6( FUNC_1( VAR_13, "num" ) );
  FUNC_5( 0, VAR_12, VAR_13 );
  VAR_5.selectedArenaInfo = VAR_13;

  VAR_5.item_maps[0].generic.x = 256;
  FUNC_0( &VAR_5.item_maps[0] );
  VAR_5.item_maps[0].generic.bottom += 32;
  VAR_5.numMaps = 1;

  VAR_5.item_maps[1].generic.flags |= VAR_2;
  VAR_5.item_maps[2].generic.flags |= VAR_2;
  VAR_5.item_maps[3].generic.flags |= VAR_2;
  VAR_5.levelPicNames[1][0] = 0;
  VAR_5.levelPicNames[2][0] = 0;
  VAR_5.levelPicNames[3][0] = 0;
  VAR_5.item_maps[1].shader = 0;
  VAR_5.item_maps[2].shader = 0;
  VAR_5.item_maps[3].shader = 0;
 }
 else {
  VAR_5.item_maps[0].generic.x = 46;
  FUNC_0( &VAR_5.item_maps[0] );
  VAR_5.item_maps[0].generic.bottom += 18;
  VAR_5.numMaps = 4;

  for ( VAR_11 = 0; VAR_11 < 4; VAR_11++ ) {
   VAR_12 = VAR_9 * VAR_0 + VAR_11;
   VAR_13 = FUNC_2( VAR_12 );
   FUNC_5( VAR_11, VAR_12, VAR_13 );
  }

  if( VAR_8 != -1 ) {
   VAR_5.selectedArenaInfo = FUNC_2( VAR_9 * VAR_0 + VAR_8 );
  }
 }


 if ( VAR_9 == VAR_7 ) {
  VAR_5.item_leftarrow.generic.flags |= ( VAR_2 | VAR_1 );
 }
 else {
  VAR_5.item_leftarrow.generic.flags &= ~( VAR_2 | VAR_1 );
 }

 if ( VAR_9 == VAR_6 ) {
  VAR_5.item_rightarrow.generic.flags |= ( VAR_2 | VAR_1 );
 }
 else {
  VAR_5.item_rightarrow.generic.flags &= ~( VAR_2 | VAR_1 );
 }

 FUNC_4();
}
