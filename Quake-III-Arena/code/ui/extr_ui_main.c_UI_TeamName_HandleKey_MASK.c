
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {int teamName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static qboolean FUNC_3(int VAR_7, float *VAR_8, int VAR_9, qboolean VAR_10) {
  if (VAR_9 == VAR_2 || VAR_9 == VAR_3 || VAR_9 == VAR_0 || VAR_9 == VAR_1) {
    int VAR_11;
    VAR_11 = FUNC_1(FUNC_0((VAR_10) ? "ui_blueTeam" : "ui_redTeam"));

  if (VAR_9 == VAR_3) {
     VAR_11--;
  } else {
     VAR_11++;
  }

    if (VAR_11 >= VAR_6.teamCount) {
      VAR_11 = 0;
    } else if (VAR_11 < 0) {
   VAR_11 = VAR_6.teamCount - 1;
  }

    FUNC_2( (VAR_10) ? "ui_blueTeam" : "ui_redTeam", VAR_6.teamList[VAR_11].teamName);

    return VAR_5;
  }
  return VAR_4;
}
