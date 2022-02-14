
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {int cinematic; int teamName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static qboolean FUNC_6(int VAR_9, float *VAR_10, int VAR_11) {
  if (VAR_11 == VAR_3 || VAR_11 == VAR_4 || VAR_11 == VAR_1 || VAR_11 == VAR_2) {
    int VAR_12;
    VAR_12 = FUNC_3(FUNC_0("ui_teamName"));
  if (VAR_7.teamList[VAR_12].cinematic >= 0) {
    FUNC_4(VAR_7.teamList[VAR_12].cinematic);
   VAR_7.teamList[VAR_12].cinematic = -1;
  }
  if (VAR_11 == VAR_4) {
     VAR_12--;
  } else {
     VAR_12++;
  }
    if (VAR_12 >= VAR_7.teamCount) {
      VAR_12 = 0;
    } else if (VAR_12 < 0) {
   VAR_12 = VAR_7.teamCount - 1;
  }
   FUNC_5( "ui_teamName", VAR_7.teamList[VAR_12].teamName);
 FUNC_2();
 FUNC_1(VAR_0, 0);
 VAR_8 = VAR_6;
    return VAR_6;
  }
  return VAR_5;
}
