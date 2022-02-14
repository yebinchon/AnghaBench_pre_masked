
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_3__ {int action_group; } ;
typedef TYPE_1__ YuiWindow ;
typedef int GtkWidget ;
typedef int GtkAction ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(GtkWidget * VAR_0, YuiWindow * VAR_1) {
 GtkAction * VAR_2 = FUNC_3(VAR_1->action_group, "frameskip");
 gboolean VAR_3 = FUNC_4(FUNC_2(VAR_2));

 if (VAR_3)
  FUNC_1 ();
 else
  FUNC_0 ();
}
