
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {int width; int height; int wrapHeight; int wrapWidth; int ** points; } ;
typedef TYPE_1__ cGrid_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1( cGrid_t *VAR_0 ) {
 int VAR_1, VAR_2, VAR_3;
 vec3_t VAR_4;
 qboolean VAR_5;

 if ( VAR_0->width > VAR_0->height ) {
  for ( VAR_1 = 0 ; VAR_1 < VAR_0->height ; VAR_1++ ) {
   for ( VAR_2 = VAR_1 + 1 ; VAR_2 < VAR_0->width ; VAR_2++ ) {
    if ( VAR_2 < VAR_0->height ) {

     FUNC_0( VAR_0->points[VAR_1][VAR_2], VAR_4 );
     FUNC_0( VAR_0->points[VAR_2][VAR_1], VAR_0->points[VAR_1][VAR_2] );
     FUNC_0( VAR_4, VAR_0->points[VAR_2][VAR_1] );
    } else {

     FUNC_0( VAR_0->points[VAR_2][VAR_1], VAR_0->points[VAR_1][VAR_2] );
    }
   }
  }
 } else {
  for ( VAR_1 = 0 ; VAR_1 < VAR_0->width ; VAR_1++ ) {
   for ( VAR_2 = VAR_1 + 1 ; VAR_2 < VAR_0->height ; VAR_2++ ) {
    if ( VAR_2 < VAR_0->width ) {

     FUNC_0( VAR_0->points[VAR_2][VAR_1], VAR_4 );
     FUNC_0( VAR_0->points[VAR_1][VAR_2], VAR_0->points[VAR_2][VAR_1] );
     FUNC_0( VAR_4, VAR_0->points[VAR_1][VAR_2] );
    } else {

     FUNC_0( VAR_0->points[VAR_1][VAR_2], VAR_0->points[VAR_2][VAR_1] );
    }
   }
  }
 }

 VAR_3 = VAR_0->width;
 VAR_0->width = VAR_0->height;
 VAR_0->height = VAR_3;

 VAR_5 = VAR_0->wrapWidth;
 VAR_0->wrapWidth = VAR_0->wrapHeight;
 VAR_0->wrapHeight = VAR_5;
}
