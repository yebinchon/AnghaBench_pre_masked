
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ qhandle_t ;
struct TYPE_14__ {float endPos; float startPos; scalar_t__ elementStyle; int elementWidth; int elementHeight; float drawPadding; scalar_t__ numColumns; TYPE_2__* columnInfo; } ;
typedef TYPE_5__ listBoxDef_t ;
struct TYPE_13__ {int x; int y; int h; float w; } ;
struct TYPE_12__ {int flags; int outlineColor; TYPE_4__ rect; int foreColor; int borderColor; int borderSize; } ;
struct TYPE_15__ {float cursorPos; TYPE_3__ window; int textStyle; int textscale; int special; scalar_t__ typeData; } ;
typedef TYPE_6__ itemDef_t ;
struct TYPE_10__ {scalar_t__ scrollBarArrowLeft; scalar_t__ scrollBar; scalar_t__ scrollBarArrowRight; scalar_t__ scrollBarThumb; scalar_t__ scrollBarArrowUp; scalar_t__ scrollBarArrowDown; } ;
struct TYPE_16__ {float (* feederCount ) (int ) ;scalar_t__ (* feederItemImage ) (int ,float) ;char* (* feederItemText ) (int ,float,int,scalar_t__*) ;int (* fillRect ) (float,float,float,float,int ) ;int (* drawText ) (float,float,int ,int ,char const*,int ,int ,int ) ;int (* drawHandlePic ) (float,float,int,int,scalar_t__) ;int (* drawRect ) (float,float,int,int,int ,int ) ;TYPE_1__ Assets; } ;
struct TYPE_11__ {float pos; int width; int maxChars; } ;


 TYPE_9__* VAR_0 ;
 float FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float,float,int,float,scalar_t__) ;
 int FUNC_3 (float,float,int,int,scalar_t__) ;
 int FUNC_4 (float,float,int,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,float) ;
 int FUNC_6 (float,float,int,int,scalar_t__) ;
 int FUNC_7 (float,float,int,int,int ,int ) ;
 char* FUNC_8 (int ,float,int,scalar_t__*) ;
 int FUNC_9 (float,float,int,int,scalar_t__) ;
 int FUNC_10 (float,float,int ,int ,char const*,int ,int ,int ) ;
 char* FUNC_11 (int ,float,int,scalar_t__*) ;
 int FUNC_12 (float,float,int,int,scalar_t__) ;
 int FUNC_13 (float,float,int ,int ,char const*,int ,int ,int ) ;
 int FUNC_14 (float,float,float,float,int ) ;
 int FUNC_15 (float,float,float,int,scalar_t__) ;
 int FUNC_16 (float,float,int,int,scalar_t__) ;
 int FUNC_17 (float,float,int,int,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,float) ;
 int FUNC_19 (float,float,int,int,scalar_t__) ;
 int FUNC_20 (float,float,int,int,int ,int ) ;
 int FUNC_21 (float,float,int,int,scalar_t__) ;

void FUNC_22(itemDef_t *VAR_4) {
 float VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 qhandle_t VAR_11;
 qhandle_t VAR_12;
 listBoxDef_t *VAR_13 = (listBoxDef_t*)VAR_4->typeData;





 VAR_8 = VAR_0->feederCount(VAR_4->special);

 if (VAR_4->window.flags & VAR_3) {


  VAR_5 = VAR_4->window.rect.x + 1;
  VAR_6 = VAR_4->window.rect.y + VAR_4->window.rect.h - VAR_2 - 1;
  VAR_0->drawHandlePic(VAR_5, VAR_6, VAR_2, VAR_2, VAR_0->Assets.scrollBarArrowLeft);
  VAR_5 += VAR_2 - 1;
  VAR_7 = VAR_4->window.rect.w - (VAR_2 * 2);
  VAR_0->drawHandlePic(VAR_5, VAR_6, VAR_7+1, VAR_2, VAR_0->Assets.scrollBar);
  VAR_5 += VAR_7 - 1;
  VAR_0->drawHandlePic(VAR_5, VAR_6, VAR_2, VAR_2, VAR_0->Assets.scrollBarArrowRight);

  VAR_10 = FUNC_0(VAR_4);
  if (VAR_10 > VAR_5 - VAR_2 - 1) {
   VAR_10 = VAR_5 - VAR_2 - 1;
  }
  VAR_0->drawHandlePic(VAR_10, VAR_6, VAR_2, VAR_2, VAR_0->Assets.scrollBarThumb);

  VAR_13->endPos = VAR_13->startPos;
  VAR_7 = VAR_4->window.rect.w - 2;


  if (VAR_13->elementStyle == VAR_1) {

   VAR_5 = VAR_4->window.rect.x + 1;
   VAR_6 = VAR_4->window.rect.y + 1;
   for (VAR_9 = VAR_13->startPos; VAR_9 < VAR_8; VAR_9++) {


    VAR_11 = VAR_0->feederItemImage(VAR_4->special, VAR_9);
    if (VAR_11) {
     VAR_0->drawHandlePic(VAR_5+1, VAR_6+1, VAR_13->elementWidth - 2, VAR_13->elementHeight - 2, VAR_11);
    }

    if (VAR_9 == VAR_4->cursorPos) {
     VAR_0->drawRect(VAR_5, VAR_6, VAR_13->elementWidth-1, VAR_13->elementHeight-1, VAR_4->window.borderSize, VAR_4->window.borderColor);
    }

    VAR_7 -= VAR_13->elementWidth;
    if (VAR_7 < VAR_13->elementWidth) {
     VAR_13->drawPadding = VAR_7;
     break;
    }
    VAR_5 += VAR_13->elementWidth;
    VAR_13->endPos++;

   }
  } else {

  }
 } else {

  VAR_5 = VAR_4->window.rect.x + VAR_4->window.rect.w - VAR_2 - 1;
  VAR_6 = VAR_4->window.rect.y + 1;
  VAR_0->drawHandlePic(VAR_5, VAR_6, VAR_2, VAR_2, VAR_0->Assets.scrollBarArrowUp);
  VAR_6 += VAR_2 - 1;

  VAR_13->endPos = VAR_13->startPos;
  VAR_7 = VAR_4->window.rect.h - (VAR_2 * 2);
  VAR_0->drawHandlePic(VAR_5, VAR_6, VAR_2, VAR_7+1, VAR_0->Assets.scrollBar);
  VAR_6 += VAR_7 - 1;
  VAR_0->drawHandlePic(VAR_5, VAR_6, VAR_2, VAR_2, VAR_0->Assets.scrollBarArrowDown);

  VAR_10 = FUNC_0(VAR_4);
  if (VAR_10 > VAR_6 - VAR_2 - 1) {
   VAR_10 = VAR_6 - VAR_2 - 1;
  }
  VAR_0->drawHandlePic(VAR_5, VAR_10, VAR_2, VAR_2, VAR_0->Assets.scrollBarThumb);


  VAR_7 = VAR_4->window.rect.h - 2;
  if (VAR_13->elementStyle == VAR_1) {

   VAR_5 = VAR_4->window.rect.x + 1;
   VAR_6 = VAR_4->window.rect.y + 1;
   for (VAR_9 = VAR_13->startPos; VAR_9 < VAR_8; VAR_9++) {


    VAR_11 = VAR_0->feederItemImage(VAR_4->special, VAR_9);
    if (VAR_11) {
     VAR_0->drawHandlePic(VAR_5+1, VAR_6+1, VAR_13->elementWidth - 2, VAR_13->elementHeight - 2, VAR_11);
    }

    if (VAR_9 == VAR_4->cursorPos) {
     VAR_0->drawRect(VAR_5, VAR_6, VAR_13->elementWidth - 1, VAR_13->elementHeight - 1, VAR_4->window.borderSize, VAR_4->window.borderColor);
    }

    VAR_13->endPos++;
    VAR_7 -= VAR_13->elementWidth;
    if (VAR_7 < VAR_13->elementHeight) {
     VAR_13->drawPadding = VAR_13->elementHeight - VAR_7;
     break;
    }
    VAR_6 += VAR_13->elementHeight;

   }
  } else {
   VAR_5 = VAR_4->window.rect.x + 1;
   VAR_6 = VAR_4->window.rect.y + 1;
   for (VAR_9 = VAR_13->startPos; VAR_9 < VAR_8; VAR_9++) {
    const char *VAR_14;



    if (VAR_13->numColumns > 0) {
     int VAR_15;
     for (VAR_15 = 0; VAR_15 < VAR_13->numColumns; VAR_15++) {
      VAR_14 = VAR_0->feederItemText(VAR_4->special, VAR_9, VAR_15, &VAR_12);
      if (VAR_12 >= 0) {
       VAR_0->drawHandlePic(VAR_5 + 4 + VAR_13->columnInfo[VAR_15].pos, VAR_6 - 1 + VAR_13->elementHeight / 2, VAR_13->columnInfo[VAR_15].width, VAR_13->columnInfo[VAR_15].width, VAR_12);
      } else if (VAR_14) {
       VAR_0->drawText(VAR_5 + 4 + VAR_13->columnInfo[VAR_15].pos, VAR_6 + VAR_13->elementHeight, VAR_4->textscale, VAR_4->window.foreColor, VAR_14, 0, VAR_13->columnInfo[VAR_15].maxChars, VAR_4->textStyle);
      }
     }
    } else {
     VAR_14 = VAR_0->feederItemText(VAR_4->special, VAR_9, 0, &VAR_12);
     if (VAR_12 >= 0) {

     } else if (VAR_14) {
      VAR_0->drawText(VAR_5 + 4, VAR_6 + VAR_13->elementHeight, VAR_4->textscale, VAR_4->window.foreColor, VAR_14, 0, 0, VAR_4->textStyle);
     }
    }

    if (VAR_9 == VAR_4->cursorPos) {
     VAR_0->fillRect(VAR_5 + 2, VAR_6 + 2, VAR_4->window.rect.w - VAR_2 - 4, VAR_13->elementHeight, VAR_4->window.outlineColor);
    }

    VAR_7 -= VAR_13->elementHeight;
    if (VAR_7 < VAR_13->elementHeight) {
     VAR_13->drawPadding = VAR_13->elementHeight - VAR_7;
     break;
    }
    VAR_13->endPos++;
    VAR_6 += VAR_13->elementHeight;

   }
  }
 }
}
