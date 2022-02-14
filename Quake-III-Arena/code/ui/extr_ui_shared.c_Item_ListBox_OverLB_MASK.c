
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int x; int y; int h; int w; } ;
typedef TYPE_3__ rectDef_t ;
typedef int listBoxDef_t ;
struct TYPE_9__ {int x; int y; int h; int w; } ;
struct TYPE_10__ {int flags; TYPE_1__ rect; } ;
struct TYPE_12__ {TYPE_2__ window; scalar_t__ typeData; int special; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_13__ {int (* feederCount ) (int ) ;} ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,float,float) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;

int FUNC_3(itemDef_t *VAR_8, float VAR_9, float VAR_10) {
 rectDef_t VAR_11;
 listBoxDef_t *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_14 = VAR_0->feederCount(VAR_8->special);
 VAR_12 = (listBoxDef_t*)VAR_8->typeData;
 if (VAR_8->window.flags & VAR_2) {

  VAR_11.x = VAR_8->window.rect.x;
  VAR_11.y = VAR_8->window.rect.y + VAR_8->window.rect.h - VAR_1;
  VAR_11.h = VAR_11.w = VAR_1;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_3;
  }

  VAR_11.x = VAR_8->window.rect.x + VAR_8->window.rect.w - VAR_1;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_6;
  }

  VAR_13 = FUNC_0(VAR_8);
  VAR_11.x = VAR_13;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_7;
  }
  VAR_11.x = VAR_8->window.rect.x + VAR_1;
  VAR_11.w = VAR_13 - VAR_11.x;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_5;
  }
  VAR_11.x = VAR_13 + VAR_1;
  VAR_11.w = VAR_8->window.rect.x + VAR_8->window.rect.w - VAR_1;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_4;
  }
 } else {
  VAR_11.x = VAR_8->window.rect.x + VAR_8->window.rect.w - VAR_1;
  VAR_11.y = VAR_8->window.rect.y;
  VAR_11.h = VAR_11.w = VAR_1;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_3;
  }
  VAR_11.y = VAR_8->window.rect.y + VAR_8->window.rect.h - VAR_1;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_6;
  }
  VAR_13 = FUNC_0(VAR_8);
  VAR_11.y = VAR_13;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_7;
  }
  VAR_11.y = VAR_8->window.rect.y + VAR_1;
  VAR_11.h = VAR_13 - VAR_11.y;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_5;
  }
  VAR_11.y = VAR_13 + VAR_1;
  VAR_11.h = VAR_8->window.rect.y + VAR_8->window.rect.h - VAR_1;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   return VAR_4;
  }
 }
 return 0;
}
