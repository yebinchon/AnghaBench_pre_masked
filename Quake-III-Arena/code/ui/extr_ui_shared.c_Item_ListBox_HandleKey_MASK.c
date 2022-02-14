
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_10__ {int elementWidth; int cursorPos; int startPos; int elementHeight; int notselectable; scalar_t__ doubleClick; } ;
typedef TYPE_2__ listBoxDef_t ;
struct TYPE_12__ {int w; int h; } ;
struct TYPE_9__ {int flags; TYPE_4__ rect; } ;
struct TYPE_11__ {int cursorPos; int special; TYPE_1__ window; scalar_t__ typeData; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_13__ {int (* feederCount ) (int ) ;scalar_t__ realTime; int (* feederSelection ) (int ,int) ;int cursory; int cursorx; } ;


 TYPE_8__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

qboolean FUNC_11(itemDef_t *VAR_30, int VAR_31, qboolean VAR_32, qboolean VAR_33) {
 listBoxDef_t *VAR_34 = (listBoxDef_t*)VAR_30->typeData;
 int VAR_35 = VAR_0->feederCount(VAR_30->special);
 int VAR_36, VAR_37;

 if (VAR_33 || (FUNC_2(&VAR_30->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_30->window.flags & VAR_20)) {
  VAR_36 = FUNC_0(VAR_30);
  if (VAR_30->window.flags & VAR_21) {
   VAR_37 = (VAR_30->window.rect.w / VAR_34->elementWidth);
   if ( VAR_31 == VAR_13 || VAR_31 == VAR_8 )
   {
    if (!VAR_34->notselectable) {
     VAR_34->cursorPos--;
     if (VAR_34->cursorPos < 0) {
      VAR_34->cursorPos = 0;
     }
     if (VAR_34->cursorPos < VAR_34->startPos) {
      VAR_34->startPos = VAR_34->cursorPos;
     }
     if (VAR_34->cursorPos >= VAR_34->startPos + VAR_37) {
      VAR_34->startPos = VAR_34->cursorPos - VAR_37 + 1;
     }
     VAR_30->cursorPos = VAR_34->cursorPos;
     VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
    }
    else {
     VAR_34->startPos--;
     if (VAR_34->startPos < 0)
      VAR_34->startPos = 0;
    }
    return VAR_29;
   }
   if ( VAR_31 == VAR_18 || VAR_31 == VAR_11 )
   {
    if (!VAR_34->notselectable) {
     VAR_34->cursorPos++;
     if (VAR_34->cursorPos < VAR_34->startPos) {
      VAR_34->startPos = VAR_34->cursorPos;
     }
     if (VAR_34->cursorPos >= VAR_35) {
      VAR_34->cursorPos = VAR_35-1;
     }
     if (VAR_34->cursorPos >= VAR_34->startPos + VAR_37) {
      VAR_34->startPos = VAR_34->cursorPos - VAR_37 + 1;
     }
     VAR_30->cursorPos = VAR_34->cursorPos;
     VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
    }
    else {
     VAR_34->startPos++;
     if (VAR_34->startPos >= VAR_35)
      VAR_34->startPos = VAR_35-1;
    }
    return VAR_29;
   }
  }
  else {
   VAR_37 = (VAR_30->window.rect.h / VAR_34->elementHeight);
   if ( VAR_31 == VAR_19 || VAR_31 == VAR_12 )
   {
    if (!VAR_34->notselectable) {
     VAR_34->cursorPos--;
     if (VAR_34->cursorPos < 0) {
      VAR_34->cursorPos = 0;
     }
     if (VAR_34->cursorPos < VAR_34->startPos) {
      VAR_34->startPos = VAR_34->cursorPos;
     }
     if (VAR_34->cursorPos >= VAR_34->startPos + VAR_37) {
      VAR_34->startPos = VAR_34->cursorPos - VAR_37 + 1;
     }
     VAR_30->cursorPos = VAR_34->cursorPos;
     VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
    }
    else {
     VAR_34->startPos--;
     if (VAR_34->startPos < 0)
      VAR_34->startPos = 0;
    }
    return VAR_29;
   }
   if ( VAR_31 == VAR_2 || VAR_31 == VAR_5 )
   {
    if (!VAR_34->notselectable) {
     VAR_34->cursorPos++;
     if (VAR_34->cursorPos < VAR_34->startPos) {
      VAR_34->startPos = VAR_34->cursorPos;
     }
     if (VAR_34->cursorPos >= VAR_35) {
      VAR_34->cursorPos = VAR_35-1;
     }
     if (VAR_34->cursorPos >= VAR_34->startPos + VAR_37) {
      VAR_34->startPos = VAR_34->cursorPos - VAR_37 + 1;
     }
     VAR_30->cursorPos = VAR_34->cursorPos;
     VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
    }
    else {
     VAR_34->startPos++;
     if (VAR_34->startPos > VAR_36)
      VAR_34->startPos = VAR_36;
    }
    return VAR_29;
   }
  }

  if (VAR_31 == VAR_14 || VAR_31 == VAR_15) {
   if (VAR_30->window.flags & VAR_22) {
    VAR_34->startPos--;
    if (VAR_34->startPos < 0) {
     VAR_34->startPos = 0;
    }
   } else if (VAR_30->window.flags & VAR_25) {

    VAR_34->startPos++;
    if (VAR_34->startPos > VAR_36) {
     VAR_34->startPos = VAR_36;
    }
   } else if (VAR_30->window.flags & VAR_24) {

    VAR_34->startPos -= VAR_37;
    if (VAR_34->startPos < 0) {
     VAR_34->startPos = 0;
    }
   } else if (VAR_30->window.flags & VAR_23) {

    VAR_34->startPos += VAR_37;
    if (VAR_34->startPos > VAR_36) {
     VAR_34->startPos = VAR_36;
    }
   } else if (VAR_30->window.flags & VAR_26) {

   } else {

    if (VAR_0->realTime < VAR_27 && VAR_34->doubleClick) {
     FUNC_1(VAR_30, VAR_34->doubleClick);
    }
    VAR_27 = VAR_0->realTime + VAR_1;
    if (VAR_30->cursorPos != VAR_34->cursorPos) {
     VAR_30->cursorPos = VAR_34->cursorPos;
     VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
    }
   }
   return VAR_29;
  }
  if ( VAR_31 == VAR_4 || VAR_31 == VAR_7) {

   VAR_34->startPos = 0;
   return VAR_29;
  }
  if ( VAR_31 == VAR_3 || VAR_31 == VAR_6) {

   VAR_34->startPos = VAR_36;
   return VAR_29;
  }
  if (VAR_31 == VAR_17 || VAR_31 == VAR_10 ) {

   if (!VAR_34->notselectable) {
    VAR_34->cursorPos -= VAR_37;
    if (VAR_34->cursorPos < 0) {
     VAR_34->cursorPos = 0;
    }
    if (VAR_34->cursorPos < VAR_34->startPos) {
     VAR_34->startPos = VAR_34->cursorPos;
    }
    if (VAR_34->cursorPos >= VAR_34->startPos + VAR_37) {
     VAR_34->startPos = VAR_34->cursorPos - VAR_37 + 1;
    }
    VAR_30->cursorPos = VAR_34->cursorPos;
    VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
   }
   else {
    VAR_34->startPos -= VAR_37;
    if (VAR_34->startPos < 0) {
     VAR_34->startPos = 0;
    }
   }
   return VAR_29;
  }
  if ( VAR_31 == VAR_16 || VAR_31 == VAR_9 ) {

   if (!VAR_34->notselectable) {
    VAR_34->cursorPos += VAR_37;
    if (VAR_34->cursorPos < VAR_34->startPos) {
     VAR_34->startPos = VAR_34->cursorPos;
    }
    if (VAR_34->cursorPos >= VAR_35) {
     VAR_34->cursorPos = VAR_35-1;
    }
    if (VAR_34->cursorPos >= VAR_34->startPos + VAR_37) {
     VAR_34->startPos = VAR_34->cursorPos - VAR_37 + 1;
    }
    VAR_30->cursorPos = VAR_34->cursorPos;
    VAR_0->feederSelection(VAR_30->special, VAR_30->cursorPos);
   }
   else {
    VAR_34->startPos += VAR_37;
    if (VAR_34->startPos > VAR_36) {
     VAR_34->startPos = VAR_36;
    }
   }
   return VAR_29;
  }
 }
 return VAR_28;
}
