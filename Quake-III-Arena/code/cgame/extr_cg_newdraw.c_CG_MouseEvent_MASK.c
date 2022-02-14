
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pm_type; } ;
struct TYPE_8__ {scalar_t__ showScores; TYPE_1__ predictedPlayerState; } ;
struct TYPE_6__ {scalar_t__ sizeCursor; scalar_t__ selectCursor; } ;
struct TYPE_7__ {int cursorX; int cursorY; int * capturedItem; TYPE_2__ media; scalar_t__ activeCursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;

void FUNC_3(int VAR_7, int VAR_8) {
 int VAR_9;

 if ( (VAR_4.predictedPlayerState.pm_type == VAR_2 || VAR_4.predictedPlayerState.pm_type == VAR_3) && VAR_4.showScores == VAR_6) {
    FUNC_2(0);
  return;
 }

 VAR_5.cursorX+= VAR_7;
 if (VAR_5.cursorX < 0)
  VAR_5.cursorX = 0;
 else if (VAR_5.cursorX > 640)
  VAR_5.cursorX = 640;

 VAR_5.cursorY += VAR_8;
 if (VAR_5.cursorY < 0)
  VAR_5.cursorY = 0;
 else if (VAR_5.cursorY > 480)
  VAR_5.cursorY = 480;

 VAR_9 = FUNC_0(VAR_5.cursorX, VAR_5.cursorY);
 VAR_5.activeCursor = 0;
 if (VAR_9 == VAR_0) {
  VAR_5.activeCursor = VAR_5.media.selectCursor;
 } else if (VAR_9 == VAR_1) {
  VAR_5.activeCursor = VAR_5.media.sizeCursor;
 }

  if (VAR_5.capturedItem) {
   FUNC_1(VAR_5.capturedItem, VAR_7, VAR_8);
  } else {
   FUNC_1(((void*)0), VAR_5.cursorX, VAR_5.cursorY);
  }

}
