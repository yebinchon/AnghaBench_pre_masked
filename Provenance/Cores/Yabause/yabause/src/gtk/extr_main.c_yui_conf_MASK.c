
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int gboolean ;
typedef int GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ,int ,int ,char*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 () ;

void FUNC_10(void) {
 gint VAR_7;
 GtkWidget * VAR_8;

 VAR_8 = FUNC_2();

 VAR_7 = FUNC_6(FUNC_0(VAR_8));
 FUNC_8(VAR_8);
 switch(VAR_7) {
  case 128:
                {
   gboolean VAR_9;
   FUNC_3(VAR_4, FUNC_5(VAR_5, 0, 0), -1, 0);
   VAR_9 = FUNC_9();
   if (VAR_9) {
                         GtkWidget* VAR_10 = FUNC_7 (FUNC_1(VAR_6),
                                                                         VAR_1,
                                                                         VAR_2,
                                                                         VAR_0,
                                                                         "You must restart Yabause before the changes take effect.");

                         FUNC_6 (FUNC_0(VAR_10));
                         FUNC_8 (VAR_10);
   }
   break;
                }
  case 129:
   FUNC_4(VAR_5, VAR_4, VAR_3, 0);
   break;
 }
}
