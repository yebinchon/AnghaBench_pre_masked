
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int menu; int action_group; } ;
typedef TYPE_2__ YuiWindow ;
struct TYPE_7__ {unsigned int width; unsigned int height; } ;
struct TYPE_9__ {TYPE_1__ allocation; } ;
typedef int GtkWidget ;
typedef int GtkAction ;


 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned int,unsigned int) ;
 int FUNC_9 (int ) ;

void FUNC_10(GtkWidget * VAR_0, YuiWindow * VAR_1) {
 GtkAction * VAR_2 = FUNC_3(VAR_1->action_group, "fullscreen");
 static unsigned int VAR_3 = 1;
 static unsigned int VAR_4 = 1;

 if (FUNC_4(FUNC_0(VAR_2))) {
  VAR_3 = FUNC_1(VAR_1)->allocation.width;
  VAR_4 = FUNC_1(VAR_1)->allocation.height;
  FUNC_5(VAR_1->menu);
  FUNC_7(FUNC_2(VAR_1));
 } else {
  FUNC_9(FUNC_2(VAR_1));
  FUNC_6(VAR_1->menu);
  FUNC_8(FUNC_2(VAR_1), VAR_3, VAR_4);
 }
}
