
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int cvarFlags; int enableCvar; } ;
typedef TYPE_1__ itemDef_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( itemDef_t *VAR_3, int VAR_4 ) {
 if (FUNC_0(VAR_4, &VAR_3->enableCvar)) {
  VAR_3->cvarFlags = VAR_0;
  return VAR_2;
 }
 return VAR_1;
}
