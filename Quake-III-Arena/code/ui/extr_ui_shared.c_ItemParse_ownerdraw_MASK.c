
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int ownerDraw; } ;
struct TYPE_5__ {int type; TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( itemDef_t *VAR_3, int VAR_4 ) {
 if (!FUNC_0(VAR_4, &VAR_3->window.ownerDraw)) {
  return VAR_1;
 }
 VAR_3->type = VAR_0;
 return VAR_2;
}
