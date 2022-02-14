
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef int gchar ;
struct TYPE_5__ {int debugsh; int mbpList; } ;
typedef TYPE_1__ YuiSh ;
typedef int GtkWidget ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int ,int **,int) ;
 int FUNC_4 (int *,int **,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,unsigned int*) ;

void FUNC_7(GtkWidget * VAR_0, gpointer VAR_1) {
 GtkTreeSelection * VAR_2;
 YuiSh * VAR_3 = VAR_1;
 GtkTreeIter VAR_4;
 GtkTreeModel * VAR_5;
 gchar * VAR_6;
 unsigned int VAR_7;
 GtkTreeView * VAR_8;

 VAR_8 = FUNC_0(VAR_3->mbpList);

   VAR_2 = FUNC_5(VAR_8);

   FUNC_4(VAR_2, &VAR_5, &VAR_4);

   FUNC_3(VAR_5, &VAR_4, 0, &VAR_6, -1);
          FUNC_6(VAR_6, "%8X", &VAR_7);

          FUNC_1(VAR_3->debugsh, VAR_7);

 FUNC_2(VAR_3);
}
