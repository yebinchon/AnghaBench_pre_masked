
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; int * shader; } ;
typedef TYPE_1__ terrainSurf_t ;
typedef int shaderInfo_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* VAR_4 ;

terrainSurf_t *FUNC_2( shaderInfo_t *VAR_5, int VAR_6, int VAR_7 ) {
 int VAR_8;

 if ( VAR_1 && ( VAR_1->shader == VAR_5 ) && ( VAR_1->x == VAR_6 ) && ( VAR_1->y == VAR_7 ) ) {
  return VAR_1;
 }

 VAR_1 = VAR_4;
 for( VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_1++ ) {
  if ( ( VAR_1->shader == VAR_5 ) && ( VAR_1->x == VAR_6 ) && ( VAR_1->y == VAR_7 ) ) {
   return VAR_1;
  }
 }

 if ( VAR_3 >= VAR_2 ) {
  VAR_2 += VAR_0;
  VAR_4 = FUNC_1( VAR_4, VAR_2 * sizeof( *VAR_4 ) );
  FUNC_0( VAR_4 + VAR_3 + 1, 0, ( VAR_2 - VAR_3 - 1 ) * sizeof( *VAR_4 ) );
 }

 VAR_1= &VAR_4[ VAR_3++ ];
 VAR_1->shader = VAR_5;
 VAR_1->x = VAR_6;
 VAR_1->y = VAR_7;

 return VAR_1;
}
