
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int myTeamCount; char** teamNames; int teamLeader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static qboolean FUNC_4(int VAR_6, float *VAR_7, int VAR_8) {
  if (VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == VAR_0 || VAR_8 == VAR_1) {
  int VAR_9;

  FUNC_0();
  if (!VAR_5.teamLeader) {
   return VAR_4;
  }
  VAR_9 = FUNC_2("cg_selectedPlayer");

  if (VAR_8 == VAR_3) {
   VAR_9--;
  } else {
   VAR_9++;
  }

  if (VAR_9 > VAR_5.myTeamCount) {
   VAR_9 = 0;
  } else if (VAR_9 < 0) {
   VAR_9 = VAR_5.myTeamCount;
  }

  if (VAR_9 == VAR_5.myTeamCount) {
    FUNC_1( "cg_selectedPlayerName", "Everyone");
  } else {
    FUNC_1( "cg_selectedPlayerName", VAR_5.teamNames[VAR_9]);
  }
   FUNC_1( "cg_selectedPlayer", FUNC_3("%d", VAR_9));
 }
 return VAR_4;
}
