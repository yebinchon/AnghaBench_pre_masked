
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int ownerDraw; } ;
struct TYPE_4__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
typedef int itemDef_t ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( itemDef_t *VAR_2, int VAR_3 ) {
 menuDef_t *VAR_4 = (menuDef_t*)VAR_2;

 if (!FUNC_0(VAR_3, &VAR_4->window.ownerDraw)) {
  return VAR_0;
 }
 return VAR_1;
}
