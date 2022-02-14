
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ xStart; scalar_t__ yStart; scalar_t__ nextScrollTime; scalar_t__ adjustValue; scalar_t__ nextAdjustTime; int scrollKey; TYPE_6__* item; } ;
typedef TYPE_3__ scrollInfo_t ;
struct TYPE_12__ {int x; int y; int h; int w; } ;
typedef TYPE_4__ rectDef_t ;
struct TYPE_13__ {int startPos; } ;
typedef TYPE_5__ listBoxDef_t ;
struct TYPE_15__ {scalar_t__ cursorx; scalar_t__ cursory; scalar_t__ realTime; } ;
struct TYPE_9__ {int x; int y; int h; int w; } ;
struct TYPE_10__ {int flags; TYPE_1__ rect; } ;
struct TYPE_14__ {TYPE_2__ window; scalar_t__ typeData; } ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(void *VAR_8) {
 scrollInfo_t *VAR_9 = (scrollInfo_t*)VAR_8;
 rectDef_t VAR_10;
 int VAR_11, VAR_12;

 listBoxDef_t *VAR_13 = (listBoxDef_t*)VAR_9->item->typeData;
 if (VAR_9->item->window.flags & VAR_5) {
  if (VAR_0->cursorx == VAR_9->xStart) {
   return;
  }
  VAR_10.x = VAR_9->item->window.rect.x + VAR_1 + 1;
  VAR_10.y = VAR_9->item->window.rect.y + VAR_9->item->window.rect.h - VAR_1 - 1;
  VAR_10.h = VAR_1;
  VAR_10.w = VAR_9->item->window.rect.w - (VAR_1*2) - 2;
  VAR_12 = FUNC_1(VAR_9->item);

  VAR_11 = (VAR_0->cursorx - VAR_10.x - VAR_1/2) * VAR_12 / (VAR_10.w - VAR_1);
  if (VAR_11 < 0) {
   VAR_11 = 0;
  }
  else if (VAR_11 > VAR_12) {
   VAR_11 = VAR_12;
  }
  VAR_13->startPos = VAR_11;
  VAR_9->xStart = VAR_0->cursorx;
 }
 else if (VAR_0->cursory != VAR_9->yStart) {

  VAR_10.x = VAR_9->item->window.rect.x + VAR_9->item->window.rect.w - VAR_1 - 1;
  VAR_10.y = VAR_9->item->window.rect.y + VAR_1 + 1;
  VAR_10.h = VAR_9->item->window.rect.h - (VAR_1*2) - 2;
  VAR_10.w = VAR_1;
  VAR_12 = FUNC_1(VAR_9->item);

  VAR_11 = (VAR_0->cursory - VAR_10.y - VAR_1/2) * VAR_12 / (VAR_10.h - VAR_1);
  if (VAR_11 < 0) {
   VAR_11 = 0;
  }
  else if (VAR_11 > VAR_12) {
   VAR_11 = VAR_12;
  }
  VAR_13->startPos = VAR_11;
  VAR_9->yStart = VAR_0->cursory;
 }

 if (VAR_0->realTime > VAR_9->nextScrollTime) {



  FUNC_0(VAR_9->item, VAR_9->scrollKey, VAR_7, VAR_6);
  VAR_9->nextScrollTime = VAR_0->realTime + VAR_9->adjustValue;
 }

 if (VAR_0->realTime > VAR_9->nextAdjustTime) {
  VAR_9->nextAdjustTime = VAR_0->realTime + VAR_2;
  if (VAR_9->adjustValue > VAR_4) {
   VAR_9->adjustValue -= VAR_3;
  }
 }
}
