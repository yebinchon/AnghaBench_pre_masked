
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
typedef int itemDef_t ;


 int FUNC_0 (int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( itemDef_t *VAR_3, int VAR_4 ) {
 int VAR_5;
 menuDef_t *VAR_6 = (menuDef_t*)VAR_3;

 if (!FUNC_0(VAR_4, &VAR_5)) {
  return VAR_1;
 }
 if (VAR_5) {
  VAR_6->window.flags |= VAR_0;
 }
 return VAR_2;
}
