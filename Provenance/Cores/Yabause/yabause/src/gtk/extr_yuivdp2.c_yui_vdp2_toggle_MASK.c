
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_5__ {TYPE_1__* yui; } ;
typedef TYPE_2__ YuiVdp2 ;
struct TYPE_4__ {int action_group; } ;
typedef int GtkCellRendererToggle ;
typedef int GtkAction ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int const*,char*,int*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_5(GtkCellRendererToggle * VAR_1, const gchar * VAR_2, YuiVdp2 * VAR_3) {
 int VAR_4;
 GtkAction * VAR_5 = ((void*)0);

 FUNC_4(VAR_2, "%d", &VAR_4);
 if (! VAR_0[VAR_4]) return;

 VAR_5 = FUNC_1(VAR_3->yui->action_group, VAR_0[VAR_4]);
 FUNC_3(FUNC_0(VAR_5), ! FUNC_2(FUNC_0(VAR_5)));
}
