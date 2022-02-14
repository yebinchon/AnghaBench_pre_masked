
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__* st; scalar_t__* xyz; } ;
typedef TYPE_1__ drawVert_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

qboolean FUNC_1( drawVert_t *VAR_2, drawVert_t *VAR_3, qboolean VAR_4 ) {
 int VAR_5;

 for( VAR_5 = 0; VAR_5 < 3; VAR_5++ ) {
  if ( FUNC_0( VAR_2->xyz[ VAR_5 ] + 0.1 ) != FUNC_0( VAR_3->xyz[ VAR_5 ] + 0.1 ) ) {
   return VAR_0;
  }
  if ( VAR_4 && ( ( VAR_2->st[ 0 ] != VAR_3->st[ 0 ] ) || ( VAR_2->st[ 1 ] != VAR_3->st[ 1 ] ) ) ) {
   return VAR_0;
  }
 }

 return VAR_1;
}
