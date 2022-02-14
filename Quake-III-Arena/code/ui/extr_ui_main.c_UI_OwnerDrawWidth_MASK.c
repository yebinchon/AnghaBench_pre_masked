
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {size_t description; } ;
struct TYPE_15__ {int teamCount; int aliasCount; size_t numJoinGameTypes; TYPE_3__* aliasList; TYPE_2__* teamList; TYPE_1__* gameTypes; } ;
struct TYPE_14__ {size_t integer; } ;
struct TYPE_13__ {size_t integer; } ;
struct TYPE_12__ {size_t integer; } ;
struct TYPE_11__ {char* name; } ;
struct TYPE_10__ {int teamName; } ;
struct TYPE_9__ {char* gameType; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,float,int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char** VAR_0 ;
 size_t* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 char** VAR_5 ;
 int FUNC_5 (char*) ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 char* FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(int VAR_10, float VAR_11) {
 int VAR_12, VAR_13, VAR_14;
 const char *VAR_15;
 const char *VAR_16 = ((void*)0);

  switch (VAR_10) {
    case 143:
     VAR_13 = FUNC_0( 5, 100, FUNC_5("handicap") );
    VAR_12 = 20 - VAR_13 / 5;
    VAR_16 = VAR_0[VAR_12];
      break;
    case 145:
    VAR_16 = FUNC_3("ui_teamName");
      break;
    case 144:
    VAR_16 = VAR_6.gameTypes[VAR_7.integer].gameType;
      break;
    case 131:
    VAR_12 = FUNC_5( "g_spSkill" );
    if (VAR_12 < 1 || VAR_12 > VAR_3) {
     VAR_12 = 1;
    }
     VAR_16 = VAR_5[VAR_12-1];
      break;
    case 146:
     VAR_12 = FUNC_4(FUNC_3("ui_blueTeam"));
     if (VAR_12 >= 0 && VAR_12 < VAR_6.teamCount) {
       VAR_16 = FUNC_6("%s: %s", "Blue", VAR_6.teamList[VAR_12].teamName);
     }
      break;
    case 133:
     VAR_12 = FUNC_4(FUNC_3("ui_redTeam"));
     if (VAR_12 >= 0 && VAR_12 < VAR_6.teamCount) {
       VAR_16 = FUNC_6("%s: %s", "Red", VAR_6.teamList[VAR_12].teamName);
     }
      break;
    case 151:
  case 150:
  case 149:
  case 148:
  case 147:
   VAR_14 = FUNC_5(FUNC_6("ui_blueteam%i", VAR_10-151 + 1));
   if (VAR_14 <= 0) {
    VAR_15 = "Closed";
   } else if (VAR_14 == 1) {
    VAR_15 = "Human";
   } else {
    VAR_14 -= 2;
    if (VAR_14 >= VAR_6.aliasCount) {
     VAR_14 = 0;
    }
    VAR_15 = VAR_6.aliasList[VAR_14].name;
   }
   VAR_16 = FUNC_6("%i. %s", VAR_10-151 + 1, VAR_15);
      break;
    case 138:
  case 137:
  case 136:
  case 135:
  case 134:
   VAR_14 = FUNC_5(FUNC_6("ui_redteam%i", VAR_10-138 + 1));
   if (VAR_14 <= 0) {
    VAR_15 = "Closed";
   } else if (VAR_14 == 1) {
    VAR_15 = "Human";
   } else {
    VAR_14 -= 2;
    if (VAR_14 >= VAR_6.aliasCount) {
     VAR_14 = 0;
    }
    VAR_15 = VAR_6.aliasList[VAR_14].name;
   }
   VAR_16 = FUNC_6("%i. %s", VAR_10-138 + 1, VAR_15);
      break;
  case 140:
   if (VAR_8.integer < 0 || VAR_8.integer > VAR_6.numJoinGameTypes) {
    VAR_8.integer = 0;
   }
   VAR_16 = FUNC_6("Source: %s", VAR_1[VAR_8.integer]);
   break;
  case 141:
   if (VAR_9.integer < 0 || VAR_9.integer > VAR_2) {
    VAR_9.integer = 0;
   }
   VAR_16 = FUNC_6("Filter: %s", VAR_4[VAR_9.integer].description );
   break;
  case 130:
   break;
  case 128:
   break;
  case 129:
   break;
  case 152:
   break;
  case 139:
   break;
  case 142:
   if (FUNC_1()) {
    VAR_16 = "Waiting for new key... Press ESCAPE to cancel";
   } else {
    VAR_16 = "Press ENTER or CLICK to change, Press BACKSPACE to clear";
   }
   break;
  case 132:
   VAR_16 = FUNC_3(FUNC_6("ui_lastServerRefresh_%i", VAR_8.integer));
   break;
    default:
      break;
  }

 if (VAR_16) {
  return FUNC_2(VAR_16, VAR_11, 0);
 }
 return 0;
}
