
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int background; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
typedef int itemDef_t ;
struct TYPE_6__ {int (* registerShaderNoMip ) (char const*) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;

qboolean FUNC_2( itemDef_t *VAR_3, int VAR_4 ) {
 const char *VAR_5;
 menuDef_t *VAR_6 = (menuDef_t*)VAR_3;

 if (!FUNC_0(VAR_4, &VAR_5)) {
  return VAR_1;
 }
 VAR_6->window.background = VAR_0->registerShaderNoMip(VAR_5);
 return VAR_2;
}
