
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
typedef int entityState_t ;
struct TYPE_2__ {int parseEntitiesNum; int * parseEntities; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_1( int VAR_5, entityState_t *VAR_6 ) {

 if ( VAR_5 >= VAR_2.parseEntitiesNum ) {
  FUNC_0( VAR_0, "CL_GetParseEntityState: %i >= %i",
   VAR_5, VAR_2.parseEntitiesNum );
 }


 if ( VAR_5 <= VAR_2.parseEntitiesNum - VAR_1 ) {
  return VAR_3;
 }

 *VAR_6 = VAR_2.parseEntities[ VAR_5 & ( VAR_1 - 1 ) ];
 return VAR_4;
}
