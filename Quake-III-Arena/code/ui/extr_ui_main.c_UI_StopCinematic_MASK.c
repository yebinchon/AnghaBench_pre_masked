
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int currentServerCinematic; } ;
struct TYPE_10__ {int teamCount; TYPE_3__* teamList; TYPE_2__ serverStatus; TYPE_1__* mapList; } ;
struct TYPE_9__ {size_t integer; } ;
struct TYPE_8__ {int cinematic; } ;
struct TYPE_6__ {int cinematic; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_4(int VAR_5) {
 if (VAR_5 >= 0) {
   FUNC_3(VAR_5);
 } else {
  VAR_5 = FUNC_2(VAR_5);
  if (VAR_5 == VAR_1) {
   if (VAR_3.mapList[VAR_4.integer].cinematic >= 0) {
     FUNC_3(VAR_3.mapList[VAR_4.integer].cinematic);
     VAR_3.mapList[VAR_4.integer].cinematic = -1;
   }
  } else if (VAR_5 == VAR_2) {
   if (VAR_3.serverStatus.currentServerCinematic >= 0) {
     FUNC_3(VAR_3.serverStatus.currentServerCinematic);
    VAR_3.serverStatus.currentServerCinematic = -1;
   }
  } else if (VAR_5 == VAR_0) {
    int VAR_6 = FUNC_1(FUNC_0("ui_teamName"));
    if (VAR_6 >= 0 && VAR_6 < VAR_3.teamCount) {
    if (VAR_3.teamList[VAR_6].cinematic >= 0) {
      FUNC_3(VAR_3.teamList[VAR_6].cinematic);
     VAR_3.teamList[VAR_6].cinematic = -1;
    }
   }
  }
 }
}
