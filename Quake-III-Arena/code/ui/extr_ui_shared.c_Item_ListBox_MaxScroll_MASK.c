
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int elementWidth; int elementHeight; } ;
typedef TYPE_3__ listBoxDef_t ;
struct TYPE_7__ {int w; int h; } ;
struct TYPE_8__ {int flags; TYPE_1__ rect; } ;
struct TYPE_10__ {TYPE_2__ window; int special; scalar_t__ typeData; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_11__ {int (* feederCount ) (int ) ;} ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(itemDef_t *VAR_2) {
 listBoxDef_t *VAR_3 = (listBoxDef_t*)VAR_2->typeData;
 int VAR_4 = VAR_0->feederCount(VAR_2->special);
 int VAR_5;

 if (VAR_2->window.flags & VAR_1) {
  VAR_5 = VAR_4 - (VAR_2->window.rect.w / VAR_3->elementWidth) + 1;
 }
 else {
  VAR_5 = VAR_4 - (VAR_2->window.rect.h / VAR_3->elementHeight) + 1;
 }
 if (VAR_5 < 0) {
  return 0;
 }
 return VAR_5;
}
