
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_9__ {scalar_t__ realTime; } ;
struct TYPE_14__ {size_t myTeamCount; scalar_t__* teamClientNums; scalar_t__ playerNumber; scalar_t__ newHighScoreTime; scalar_t__ newBestTime; int demoAvailable; TYPE_2__ uiDC; void* soundHighScore; int newHighScoreSound; TYPE_1__* gameTypes; scalar_t__ teamLeader; } ;
struct TYPE_13__ {size_t integer; } ;
struct TYPE_12__ {size_t integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {size_t integer; } ;
struct TYPE_8__ {scalar_t__ gtEnum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 void* VAR_17 ;
 void* VAR_18 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_7__ VAR_19 ;
 TYPE_6__ VAR_20 ;
 TYPE_5__ VAR_21 ;
 TYPE_4__ VAR_22 ;
 TYPE_3__ VAR_23 ;

__attribute__((used)) static qboolean FUNC_2(int VAR_24) {
 qboolean VAR_25 = VAR_18;

 while (VAR_24) {

  if (VAR_24 & VAR_8) {
   if (FUNC_0("g_gametype") != VAR_2) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_8;
  }

  if (VAR_24 & VAR_15) {
   if (FUNC_0("g_gametype") == VAR_2) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_15;
  }

  if (VAR_24 & VAR_9) {

   if (!VAR_19.teamLeader) {
    VAR_25 = VAR_17;
   } else {

    if (VAR_23.integer < VAR_19.myTeamCount && VAR_19.teamClientNums[VAR_23.integer] == VAR_19.playerNumber) {
     VAR_25 = VAR_17;
    }
   }
   VAR_24 &= ~VAR_9;
  }
  if (VAR_24 & VAR_16) {

   if (VAR_19.teamLeader) {

    if (!(VAR_23.integer < VAR_19.myTeamCount && VAR_19.teamClientNums[VAR_23.integer] == VAR_19.playerNumber)) {
     VAR_25 = VAR_17;
    }

   }
   VAR_24 &= ~VAR_16;
  }
  if (VAR_24 & VAR_7) {

   if (VAR_22.integer != VAR_0) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_7;
  }
  if (VAR_24 & VAR_14) {

   if (VAR_22.integer == VAR_0) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_14;
  }
  if (VAR_24 & VAR_5) {
   if (VAR_19.gameTypes[VAR_20.integer].gtEnum <= VAR_3 ) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_5;
  }
  if (VAR_24 & VAR_4) {
   if (VAR_19.gameTypes[VAR_20.integer].gtEnum > VAR_3 ) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_4;
  }
  if (VAR_24 & VAR_11) {
   if (VAR_19.gameTypes[VAR_21.integer].gtEnum <= VAR_3 ) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_11;
  }
  if (VAR_24 & VAR_10) {
   if (VAR_19.gameTypes[VAR_21.integer].gtEnum > VAR_3 ) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_10;
  }
  if (VAR_24 & VAR_13) {
   if (VAR_19.newHighScoreTime < VAR_19.uiDC.realTime) {
    VAR_25 = VAR_17;
   } else {
    if (VAR_19.soundHighScore) {
     if (FUNC_0("sv_killserver") == 0) {

      FUNC_1(VAR_19.newHighScoreSound, VAR_1);
      VAR_19.soundHighScore = VAR_17;
     }
    }
   }
   VAR_24 &= ~VAR_13;
  }
  if (VAR_24 & VAR_12) {
   if (VAR_19.newBestTime < VAR_19.uiDC.realTime) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_12;
  }
  if (VAR_24 & VAR_6) {
   if (!VAR_19.demoAvailable) {
    VAR_25 = VAR_17;
   }
   VAR_24 &= ~VAR_6;
  } else {
   VAR_24 = 0;
  }
 }
  return VAR_25;
}
