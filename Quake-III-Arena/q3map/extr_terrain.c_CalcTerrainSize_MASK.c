
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {int maxs; int mins; struct TYPE_5__* next; } ;
typedef TYPE_1__ bspbrush_t ;
struct TYPE_6__ {TYPE_1__* brushes; } ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__*) ;
 char* FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

void FUNC_7( vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3 ) {
 bspbrush_t *VAR_4;
 int VAR_5;
 const char *VAR_6;


 FUNC_1( VAR_1, VAR_2 );
 for( VAR_4 = VAR_0->brushes; VAR_4 != ((void*)0); VAR_4 = VAR_4->next ) {
  FUNC_0( VAR_4->mins, VAR_1, VAR_2 );
  FUNC_0( VAR_4->maxs, VAR_1, VAR_2 );
 }

 VAR_6 = FUNC_4( VAR_0, "min" );
 if ( VAR_6[ 0 ] ) {
  FUNC_3( VAR_0, "min", VAR_1 );
 }

 VAR_6 = FUNC_4( VAR_0, "max" );
 if ( VAR_6[ 0 ] ) {
  FUNC_3( VAR_0, "max", VAR_2 );
 }

 for( VAR_5 = 0; VAR_5 < 3; VAR_5++ ) {
  VAR_1[ VAR_5 ] = FUNC_6( VAR_1[ VAR_5 ] + 0.1 );
  VAR_2[ VAR_5 ] = FUNC_6( VAR_2[ VAR_5 ] + 0.1 );
 }

 FUNC_5( VAR_2, VAR_1, VAR_3 );

 if ( ( VAR_3[ 0 ] <= 0 ) || ( VAR_3[ 1 ] <= 0 ) ) {
  FUNC_2 ("CalcTerrainSize: Invalid terrain size: %fx%f", VAR_3[ 0 ], VAR_3[ 1 ] );
 }
}
