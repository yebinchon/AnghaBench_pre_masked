
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {int cluster; } ;
typedef TYPE_1__ mnode_t ;
typedef int byte ;


 int* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int const) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2( const vec3_t VAR_2, const vec3_t VAR_3 ) {
 mnode_t *VAR_4;
 byte *VAR_5;

 VAR_4 = FUNC_1( VAR_2 );
 VAR_5 = FUNC_0( VAR_4->cluster );
 VAR_4 = FUNC_1( VAR_3 );

 if ( !(VAR_5[VAR_4->cluster>>3] & (1<<(VAR_4->cluster&7))) ) {
  return VAR_0;
 }
 return VAR_1;
}
