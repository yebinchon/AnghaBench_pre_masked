
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ open_r; scalar_t__ deviceData; } ;
typedef TYPE_1__ devoptab_t ;
struct TYPE_5__ {scalar_t__ open_r; } ;
typedef int PARTITION ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_4 (const char* VAR_1) {
 devoptab_t *VAR_2;
 PARTITION* VAR_3;

 if(!VAR_1)
  return;

 VAR_2 = (devoptab_t*)FUNC_0 (VAR_1);
 if (!VAR_2) {
  return;
 }


 if (VAR_2->open_r != VAR_0.open_r) {
  return;
 }

 if (FUNC_1 (VAR_1) == -1) {
  return;
 }

 VAR_3 = (PARTITION*)VAR_2->deviceData;
 FUNC_3 (VAR_3);
 FUNC_2 (VAR_2);
}
