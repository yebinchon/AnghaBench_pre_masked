
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gpointer ;
typedef int gchar ;
typedef int GtkWidget ;
typedef int GtkTreePath ;
typedef int GList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int **,int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int*) ;

__attribute__((used)) static void FUNC_13(GtkWidget * VAR_3, gpointer VAR_4) {
 GtkTreePath * VAR_5;
 gchar * VAR_6;
 int VAR_7;
 GtkWidget * VAR_8 = VAR_4;
 GList * VAR_9;
 GtkWidget * VAR_10;

 VAR_9 = FUNC_5(FUNC_0(VAR_8));
 for(VAR_7 = 1;VAR_7 < 4;VAR_7++) {
  VAR_10 = FUNC_4(VAR_9, VAR_7);
  if (VAR_10 != ((void*)0)) FUNC_9(VAR_10);
 }

 FUNC_8(FUNC_1(VAR_3), &VAR_5, ((void*)0));

 if (VAR_5) {
  int VAR_11;

  VAR_6 = FUNC_7(VAR_5);
  FUNC_12(VAR_6, "%d", &VAR_11);

  switch(VAR_11) {
   case 0:
    FUNC_3(VAR_2, "General", "PerType", VAR_1);
    FUNC_11(VAR_8);
    break;
   case 1:
    FUNC_3(VAR_2, "General", "PerType", VAR_0);
    FUNC_10(VAR_8);
    break;
  }

  FUNC_2(VAR_6);
  FUNC_6(VAR_5);
 }
}
