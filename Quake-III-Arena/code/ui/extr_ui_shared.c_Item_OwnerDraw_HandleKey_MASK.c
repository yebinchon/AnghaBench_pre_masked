
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int ownerDrawFlags; int ownerDraw; } ;
struct TYPE_6__ {int special; TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_7__ {int (* ownerDrawHandleKey ) (int ,int ,int *,int) ;} ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int) ;

qboolean FUNC_1(itemDef_t *VAR_2, int VAR_3) {
  if (VAR_2 && VAR_0->ownerDrawHandleKey) {
    return VAR_0->ownerDrawHandleKey(VAR_2->window.ownerDraw, VAR_2->window.ownerDrawFlags, &VAR_2->special, VAR_3);
  }
  return VAR_1;
}
