
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_4__ {int cursor; } ;
typedef TYPE_1__ YuiVdp2 ;
typedef int GtkWidget ;
typedef int GtkTreePath ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int **,int *) ;
 int FUNC_5 (int *,char*,int*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(GtkWidget * VAR_0, YuiVdp2 * VAR_1) {
 GtkTreePath * VAR_2;
 gchar * VAR_3;
 int VAR_4;

 FUNC_4(FUNC_0(VAR_0), &VAR_2, ((void*)0));

 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_2);

  FUNC_5(VAR_3, "%i", &VAR_4);

  VAR_1->cursor = VAR_4;

  FUNC_6(VAR_1);

  FUNC_1(VAR_3);
  FUNC_2(VAR_2);
 }
}
