
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int PC; } ;
typedef TYPE_1__ sh2regs_struct ;
typedef TYPE_2__* gpointer ;
typedef int gchar ;
struct TYPE_9__ {int debugsh; int bpList; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkWidget ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *,int *,int ,int **,int) ;
 int FUNC_6 (int *,int **,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,unsigned int*) ;

void FUNC_9(GtkWidget * VAR_0, gpointer VAR_1) {
 GtkTreeSelection * VAR_2;
 YuiSh * VAR_3 = VAR_1;
 GtkTreeIter VAR_4;
 GtkTreeModel * VAR_5;
 gchar * VAR_6;
 unsigned int VAR_7;
 GtkTreeView * VAR_8;

 VAR_8 = FUNC_0(VAR_3->bpList);

   VAR_2 = FUNC_7(VAR_8);

   FUNC_6(VAR_2, &VAR_5, &VAR_4);

   FUNC_5(VAR_5, &VAR_4, 0, &VAR_6, -1);
          FUNC_8(VAR_6, "%8X", &VAR_7);

          FUNC_1(VAR_3->debugsh, VAR_7);

 {
  sh2regs_struct VAR_9;
  FUNC_2(VAR_3->debugsh, &VAR_9);
  FUNC_4(VAR_3,VAR_9.PC);
  FUNC_3(VAR_3);
 }
}
