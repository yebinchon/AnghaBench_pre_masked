
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {int xyz; } ;
typedef TYPE_1__ drawVert_t ;


 float VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static qboolean FUNC_3( drawVert_t *VAR_3, int VAR_4, int VAR_5, int VAR_6 ) {
 vec3_t VAR_7, VAR_8, VAR_9;
 float VAR_10;

 FUNC_2( VAR_3[VAR_5].xyz, VAR_3[VAR_4].xyz, VAR_7 );
 FUNC_2( VAR_3[VAR_6].xyz, VAR_3[VAR_4].xyz, VAR_8 );
 FUNC_0( VAR_7, VAR_8, VAR_9 );
 VAR_10 = FUNC_1( VAR_9 );


 if ( VAR_10 < VAR_0 ) {
  return VAR_2;
 }

 return VAR_1;
}
