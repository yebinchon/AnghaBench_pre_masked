
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;
typedef int YuiPage ;
typedef int GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,char*,char const*) ;

GtkWidget * FUNC_13(YuiPage * VAR_3, const gchar * VAR_4) {
 GtkWidget * VAR_5;
 GtkWidget * VAR_6;
 GtkWidget * VAR_7;
 gchar VAR_8[1024];

 VAR_6 = FUNC_6(((void*)0));

 FUNC_4(FUNC_0(VAR_3), VAR_6, VAR_0, VAR_2, 0);
 FUNC_8(FUNC_2(VAR_6), VAR_1);

 VAR_7 = FUNC_11(VAR_0, 0);
 FUNC_5(FUNC_1(VAR_6), VAR_7);

 FUNC_12(VAR_8, "<b>%s</b>", VAR_4);

 VAR_5 = FUNC_9(VAR_8);
 FUNC_7(FUNC_2(VAR_6), VAR_5);
 FUNC_10(FUNC_3(VAR_5), VAR_2);

 return VAR_7;
}
