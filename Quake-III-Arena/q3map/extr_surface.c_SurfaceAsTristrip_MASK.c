
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numVerts; int numIndexes; scalar_t__ firstIndex; scalar_t__ firstVert; } ;
typedef TYPE_1__ dsurface_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,int*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4( dsurface_t *VAR_7 ) {
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15[VAR_0];


 VAR_10 = ( VAR_7->numVerts - 2 ) * 3;
 if ( VAR_10 > VAR_0 ) {
  FUNC_0( "MAX_INDICES exceeded for surface" );
 }



 for ( VAR_9 = 0 ; VAR_9 < VAR_7->numVerts ; VAR_9++ ) {
  for ( VAR_11 = 0, VAR_8 = 0 ; VAR_8 < VAR_7->numVerts - 2 - VAR_8 ; VAR_8++ ) {
   VAR_12 = ( VAR_7->numVerts - 1 - VAR_8 + VAR_9 ) % VAR_7->numVerts;
   VAR_13 = ( VAR_8 + VAR_9 ) % VAR_7->numVerts;
   VAR_14 = ( VAR_7->numVerts - 2 - VAR_8 + VAR_9 ) % VAR_7->numVerts;

   if ( FUNC_1( VAR_5 + VAR_7->firstVert, VAR_12, VAR_13, VAR_14 ) ) {
    break;
   }
   VAR_15[VAR_11++] = VAR_12;
   VAR_15[VAR_11++] = VAR_13;
   VAR_15[VAR_11++] = VAR_14;

   if ( VAR_8 + 1 != VAR_7->numVerts - 1 - VAR_8 ) {
    VAR_12 = ( VAR_7->numVerts - 2 - VAR_8 + VAR_9 ) % VAR_7->numVerts;
    VAR_13 = ( VAR_8 + VAR_9 ) % VAR_7->numVerts;
    VAR_14 = ( VAR_8 + 1 + VAR_9 ) % VAR_7->numVerts;

    if ( FUNC_1( VAR_5 + VAR_7->firstVert, VAR_12, VAR_13, VAR_14 ) ) {
     break;
    }
    VAR_15[VAR_11++] = VAR_12;
    VAR_15[VAR_11++] = VAR_13;
    VAR_15[VAR_11++] = VAR_14;
   }
  }
  if ( VAR_11 == VAR_10 ) {
   break;
  }
 }



 if ( VAR_11 < VAR_10 ) {
  VAR_2++;
  FUNC_2( VAR_7 );
  return;
 }


 VAR_3++;

 if ( VAR_6 + VAR_11 > VAR_1 ) {
  FUNC_0( "MAX_MAP_DRAW_INDEXES" );
 }
 VAR_7->firstIndex = VAR_6;
 VAR_7->numIndexes = VAR_11;

 FUNC_3( VAR_4 + VAR_6, VAR_15, VAR_11 * sizeof(int) );
 VAR_6 += VAR_11;
}
