
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ pm_type; } ;
struct TYPE_6__ {scalar_t__ showScores; TYPE_1__ predictedPlayerState; } ;
struct TYPE_5__ {int cursorY; int cursorX; int * capturedItem; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int,scalar_t__,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;

void FUNC_4(int VAR_7, qboolean VAR_8) {

 if (!VAR_8) {
  return;
 }

 if ( VAR_4.predictedPlayerState.pm_type == VAR_2 || (VAR_4.predictedPlayerState.pm_type == VAR_3 && VAR_4.showScores == VAR_6)) {
  FUNC_0(VAR_0);
    FUNC_3(0);
  return;
 }
  FUNC_2(VAR_7, VAR_8, VAR_5.cursorX, VAR_5.cursorY);

 if (VAR_5.capturedItem) {
  VAR_5.capturedItem = ((void*)0);
 } else {
  if (VAR_7 == VAR_1 && VAR_8) {
   VAR_5.capturedItem = FUNC_1(VAR_5.cursorX, VAR_5.cursorY);
  }
 }
}
