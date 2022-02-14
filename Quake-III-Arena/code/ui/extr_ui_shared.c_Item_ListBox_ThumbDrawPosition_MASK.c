
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x; int w; int y; int h; } ;
struct TYPE_9__ {int flags; TYPE_1__ rect; } ;
struct TYPE_10__ {TYPE_2__ window; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_11__ {int cursorx; int cursory; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

int FUNC_1(itemDef_t *VAR_4) {
 int VAR_5, VAR_6;

 if (VAR_3 == VAR_4) {
  if (VAR_4->window.flags & VAR_2) {
   VAR_5 = VAR_4->window.rect.x + VAR_1 + 1;
   VAR_6 = VAR_4->window.rect.x + VAR_4->window.rect.w - 2*VAR_1 - 1;
   if (VAR_0->cursorx >= VAR_5 + VAR_1/2 && VAR_0->cursorx <= VAR_6 + VAR_1/2) {
    return VAR_0->cursorx - VAR_1/2;
   }
   else {
    return FUNC_0(VAR_4);
   }
  }
  else {
   VAR_5 = VAR_4->window.rect.y + VAR_1 + 1;
   VAR_6 = VAR_4->window.rect.y + VAR_4->window.rect.h - 2*VAR_1 - 1;
   if (VAR_0->cursory >= VAR_5 + VAR_1/2 && VAR_0->cursory <= VAR_6 + VAR_1/2) {
    return VAR_0->cursory - VAR_1/2;
   }
   else {
    return FUNC_0(VAR_4);
   }
  }
 }
 else {
  return FUNC_0(VAR_4);
 }
}
