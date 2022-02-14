
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void FUNC_7(GtkWidget * VAR_2) {
 gint VAR_3, VAR_4;
 char VAR_5[512];

 FUNC_5(FUNC_0(VAR_2), &VAR_3, &VAR_4);

 FUNC_6(VAR_5, "%d", VAR_3);
 FUNC_2(VAR_1, "Gtk", "X", VAR_5);
 FUNC_6(VAR_5, "%d", VAR_4);
 FUNC_2(VAR_1, "Gtk", "Y", VAR_5);

 FUNC_1(VAR_0, FUNC_3(VAR_1, 0, 0), -1, 0);
 FUNC_4();
}
