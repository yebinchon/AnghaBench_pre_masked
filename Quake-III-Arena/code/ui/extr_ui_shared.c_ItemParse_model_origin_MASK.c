
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int * origin; } ;
typedef TYPE_1__ modelDef_t ;
struct TYPE_6__ {scalar_t__ typeData; } ;
typedef TYPE_2__ itemDef_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2( itemDef_t *VAR_2, int VAR_3 ) {
 modelDef_t *VAR_4;
 FUNC_0(VAR_2);
 VAR_4 = (modelDef_t*)VAR_2->typeData;

 if (FUNC_1(VAR_3, &VAR_4->origin[0])) {
  if (FUNC_1(VAR_3, &VAR_4->origin[1])) {
   if (FUNC_1(VAR_3, &VAR_4->origin[2])) {
    return VAR_1;
   }
  }
 }
 return VAR_0;
}
