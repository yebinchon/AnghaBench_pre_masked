
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_7__ {TYPE_1__* teamList; } ;
struct TYPE_5__ {int teamIcon; void* teamIcon_Metal; int imageName; void* teamIcon_Name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(rectDef_t *VAR_1, vec3_t VAR_2) {
  int VAR_3 = FUNC_2(FUNC_0("ui_opponentName"));
 if (VAR_0.teamList[VAR_3].teamIcon == -1) {
    VAR_0.teamList[VAR_3].teamIcon = FUNC_3(VAR_0.teamList[VAR_3].imageName);
    VAR_0.teamList[VAR_3].teamIcon_Metal = FUNC_3(FUNC_5("%s_metal",VAR_0.teamList[VAR_3].imageName));
    VAR_0.teamList[VAR_3].teamIcon_Name = FUNC_3(FUNC_5("%s_name", VAR_0.teamList[VAR_3].imageName));
 }

  FUNC_4( VAR_2 );
 FUNC_1( VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->h, VAR_0.teamList[VAR_3].teamIcon_Metal );
  FUNC_4( ((void*)0) );
}
