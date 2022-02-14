
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int notselectable; } ;
typedef TYPE_1__ listBoxDef_t ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ typeData; } ;
typedef TYPE_2__ itemDef_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;

qboolean FUNC_1( itemDef_t *VAR_2, int VAR_3 ) {
 listBoxDef_t *VAR_4;
 FUNC_0(VAR_2);
 VAR_4 = (listBoxDef_t*)VAR_2->typeData;
 if (VAR_2->type == VAR_0 && VAR_4) {
  VAR_4->notselectable = VAR_1;
 }
 return VAR_1;
}
