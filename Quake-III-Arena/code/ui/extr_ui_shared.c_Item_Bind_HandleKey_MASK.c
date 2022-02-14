
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_7__ {int rect; } ;
struct TYPE_8__ {int cvar; TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_10__ {int (* setBinding ) (int,char*) ;int cursory; int cursorx; } ;
struct TYPE_9__ {int bind1; int bind2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_6__* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;

qboolean FUNC_7(itemDef_t *VAR_10, int VAR_11, qboolean VAR_12) {
 int VAR_13;
 int VAR_14;

 if (FUNC_2(&VAR_10->window.rect, VAR_0->cursorx, VAR_0->cursory) && !VAR_7)
 {
  if (VAR_12 && (VAR_11 == VAR_3 || VAR_11 == VAR_2)) {
   VAR_7 = VAR_9;
   VAR_5 = VAR_10;
  }
  return VAR_9;
 }
 else
 {
  if (!VAR_7 || VAR_5 == ((void*)0)) {
   return VAR_9;
  }

  if (VAR_11 & VAR_1) {
   return VAR_9;
  }

  switch (VAR_11)
  {
   case 128:
    VAR_7 = VAR_8;
    return VAR_9;

   case 129:
    VAR_13 = FUNC_0(VAR_10->cvar);
    if (VAR_13 != -1) {
     VAR_6[VAR_13].bind1 = -1;
     VAR_6[VAR_13].bind2 = -1;
    }
    FUNC_1(VAR_9);
    VAR_7 = VAR_8;
    VAR_5 = ((void*)0);
    return VAR_9;

   case '`':
    return VAR_9;
  }
 }

 if (VAR_11 != -1)
 {

  for (VAR_14=0; VAR_14 < VAR_4; VAR_14++)
  {

   if (VAR_6[VAR_14].bind2 == VAR_11) {
    VAR_6[VAR_14].bind2 = -1;
   }

   if (VAR_6[VAR_14].bind1 == VAR_11)
   {
    VAR_6[VAR_14].bind1 = VAR_6[VAR_14].bind2;
    VAR_6[VAR_14].bind2 = -1;
   }
  }
 }


 VAR_13 = FUNC_0(VAR_10->cvar);

 if (VAR_13 != -1) {
  if (VAR_11 == -1) {
   if( VAR_6[VAR_13].bind1 != -1 ) {
    VAR_0->setBinding( VAR_6[VAR_13].bind1, "" );
    VAR_6[VAR_13].bind1 = -1;
   }
   if( VAR_6[VAR_13].bind2 != -1 ) {
    VAR_0->setBinding( VAR_6[VAR_13].bind2, "" );
    VAR_6[VAR_13].bind2 = -1;
   }
  }
  else if (VAR_6[VAR_13].bind1 == -1) {
   VAR_6[VAR_13].bind1 = VAR_11;
  }
  else if (VAR_6[VAR_13].bind1 != VAR_11 && VAR_6[VAR_13].bind2 == -1) {
   VAR_6[VAR_13].bind2 = VAR_11;
  }
  else {
   VAR_0->setBinding( VAR_6[VAR_13].bind1, "" );
   VAR_0->setBinding( VAR_6[VAR_13].bind2, "" );
   VAR_6[VAR_13].bind1 = VAR_11;
   VAR_6[VAR_13].bind2 = -1;
  }
 }

 FUNC_1(VAR_9);
 VAR_7 = VAR_8;

 return VAR_9;
}
