
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int itemCount; TYPE_3__** items; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_8__ {TYPE_1__ window; } ;
typedef TYPE_3__ itemDef_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;

itemDef_t *FUNC_1(menuDef_t *VAR_0, const char *VAR_1) {
  int VAR_2;
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
    return ((void*)0);
  }

  for (VAR_2 = 0; VAR_2 < VAR_0->itemCount; VAR_2++) {
    if (FUNC_0(VAR_1, VAR_0->items[VAR_2]->window.name) == 0) {
      return VAR_0->items[VAR_2];
    }
  }

  return ((void*)0);
}
