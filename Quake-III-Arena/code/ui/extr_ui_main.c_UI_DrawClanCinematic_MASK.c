
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_7__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_5__ {int cinematic; int teamIcon; int teamIcon_Metal; int imageName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5) {
  int VAR_6;
  VAR_6 = FUNC_2(FUNC_0("ui_teamName"));
  if (VAR_6 >= 0 && VAR_6 < VAR_2.teamCount) {

  if (VAR_2.teamList[VAR_6].cinematic >= -2) {
   if (VAR_2.teamList[VAR_6].cinematic == -1) {
    VAR_2.teamList[VAR_6].cinematic = FUNC_4(FUNC_8("%s.roq", VAR_2.teamList[VAR_6].imageName), 0, 0, 0, 0, (VAR_0 | VAR_1) );
   }
   if (VAR_2.teamList[VAR_6].cinematic >= 0) {
     FUNC_5(VAR_2.teamList[VAR_6].cinematic);
    FUNC_6(VAR_2.teamList[VAR_6].cinematic, VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h);
     FUNC_3(VAR_2.teamList[VAR_6].cinematic);
   } else {
      FUNC_7( VAR_5 );
    FUNC_1( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_2.teamList[VAR_6].teamIcon_Metal);
    FUNC_7(((void*)0));
    VAR_2.teamList[VAR_6].cinematic = -2;
   }
  } else {
    FUNC_7( VAR_5 );
   FUNC_1( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_2.teamList[VAR_6].teamIcon);
   FUNC_7(((void*)0));
  }
 }

}
