
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t curvalue; } ;
struct TYPE_4__ {size_t nummaps; int* mapGamebits; int maxpages; scalar_t__ currentmap; scalar_t__ page; int * maplist; TYPE_1__ gametype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 char* FUNC_5 (int) ;
 int FUNC_6 () ;
 int* VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void FUNC_7( void* VAR_7, int VAR_8 ) {
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 const char *VAR_13;

 if( VAR_8 != VAR_4) {
  return;
 }

 VAR_10 = FUNC_6();
 VAR_6.nummaps = 0;
 VAR_12 = 1 << VAR_5[VAR_6.gametype.curvalue];
 if( VAR_5[VAR_6.gametype.curvalue] == VAR_0 ) {
  VAR_12 |= ( 1 << VAR_1 );
 }
 for( VAR_9 = 0; VAR_9 < VAR_10; VAR_9++ ) {
  VAR_13 = FUNC_5( VAR_9 );

  VAR_11 = FUNC_0( FUNC_1( VAR_13, "type") );
  if( !( VAR_11 & VAR_12 ) ) {
   continue;
  }

  FUNC_2( VAR_6.maplist[VAR_6.nummaps], FUNC_1( VAR_13, "map"), VAR_3 );
  FUNC_3( VAR_6.maplist[VAR_6.nummaps] );
  VAR_6.mapGamebits[VAR_6.nummaps] = VAR_11;
  VAR_6.nummaps++;
 }
 VAR_6.maxpages = (VAR_6.nummaps + VAR_2-1)/VAR_2;
 VAR_6.page = 0;
 VAR_6.currentmap = 0;

 FUNC_4();
}
