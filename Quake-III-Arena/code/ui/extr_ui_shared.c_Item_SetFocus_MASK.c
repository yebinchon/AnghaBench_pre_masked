
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_15__ {scalar_t__ h; int y; } ;
typedef TYPE_3__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_16__ {int itemCount; int cursorItem; TYPE_5__** items; } ;
typedef TYPE_4__ menuDef_t ;
struct TYPE_14__ {int flags; } ;
struct TYPE_17__ {int cvarFlags; scalar_t__ type; scalar_t__ focusSound; scalar_t__ onFocus; TYPE_2__ window; TYPE_3__ textRect; scalar_t__ parent; } ;
typedef TYPE_5__ itemDef_t ;
struct TYPE_13__ {scalar_t__ itemFocusSound; } ;
struct TYPE_12__ {int (* startLocalSound ) (scalar_t__,int ) ;TYPE_1__ Assets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_11__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 TYPE_5__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,float,float) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (scalar_t__,int ) ;

qboolean FUNC_5(itemDef_t *VAR_12, float VAR_13, float VAR_14) {
 int VAR_15;
 itemDef_t *VAR_16;
 sfxHandle_t *VAR_17 = &VAR_5->Assets.itemFocusSound;
 qboolean VAR_18 = VAR_10;
 menuDef_t *VAR_19;

 if (VAR_12 == ((void*)0) || VAR_12->window.flags & VAR_7 || VAR_12->window.flags & VAR_8 || !(VAR_12->window.flags & VAR_9)) {
  return VAR_10;
 }


 VAR_19 = (menuDef_t*)VAR_12->parent;


 if (VAR_12->cvarFlags & (VAR_2 | VAR_1) && !FUNC_0(VAR_12, VAR_2)) {
  return VAR_10;
 }

 if (VAR_12->cvarFlags & (VAR_4 | VAR_3) && !FUNC_0(VAR_12, VAR_4)) {
  return VAR_10;
 }

 VAR_16 = FUNC_2(VAR_12->parent);

 if (VAR_12->type == VAR_6) {
  rectDef_t VAR_20;
  VAR_20 = VAR_12->textRect;
  VAR_20.y -= VAR_20.h;
  if (FUNC_3(&VAR_20, VAR_13, VAR_14)) {
   VAR_12->window.flags |= VAR_8;
   if (VAR_12->focusSound) {
    VAR_17 = &VAR_12->focusSound;
   }
   VAR_18 = VAR_11;
  } else {
   if (VAR_16) {
    VAR_16->window.flags |= VAR_8;
    if (VAR_16->onFocus) {
     FUNC_1(VAR_16, VAR_16->onFocus);
    }
   }
  }
 } else {
     VAR_12->window.flags |= VAR_8;
  if (VAR_12->onFocus) {
   FUNC_1(VAR_12, VAR_12->onFocus);
  }
  if (VAR_12->focusSound) {
   VAR_17 = &VAR_12->focusSound;
  }
  VAR_18 = VAR_11;
 }

 if (VAR_18 && VAR_17) {
  VAR_5->startLocalSound( *VAR_17, VAR_0 );
 }

 for (VAR_15 = 0; VAR_15 < VAR_19->itemCount; VAR_15++) {
  if (VAR_19->items[VAR_15] == VAR_12) {
   VAR_19->cursorItem = VAR_15;
   break;
  }
 }

 return VAR_11;
}
