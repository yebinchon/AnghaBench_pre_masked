
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef int GtkWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ,int *) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int*,char***) ;
 int FUNC_21 () ;
 int * FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (int ) ;
 int FUNC_26 (char*) ;
 int VAR_7 ;

int FUNC_27(int VAR_8, char **VAR_9)
{
  GtkWidget *VAR_10, *VAR_11, *VAR_12, *VAR_13;


  FUNC_6(VAR_0);


  FUNC_10(((void*)0));
  FUNC_14();
  FUNC_13();

  FUNC_20(&VAR_8, &VAR_9);


  VAR_10 = FUNC_25(VAR_4);


  VAR_11 = FUNC_18(((void*)0));
  FUNC_19(FUNC_2(VAR_11), VAR_3);
  FUNC_16(FUNC_1(VAR_10), VAR_11);


  VAR_12 = FUNC_18(((void*)0));
  FUNC_19(FUNC_2(VAR_12), VAR_2);
  FUNC_17(FUNC_1(VAR_12), 5);
  FUNC_16(FUNC_1(VAR_11), VAR_12);


  VAR_13 = FUNC_22();
  FUNC_23(FUNC_3 (VAR_13));

  gint VAR_14 = FUNC_11(300, VAR_7, VAR_13);
  FUNC_7(FUNC_5(VAR_13), "pulse_id",
                    FUNC_0(VAR_14));
  FUNC_16(FUNC_1(VAR_12), VAR_13);

  FUNC_24(VAR_10);
  FUNC_26("gtk_widget_show_all\n");

  FUNC_8(FUNC_5 (VAR_10), "delete-event",
                   FUNC_4(VAR_5), ((void*)0));

  if(!(FUNC_9(&VAR_6, VAR_13, VAR_1, ((void*)0)) != 0))
    FUNC_12("can't create the thread");

  FUNC_21();
  FUNC_15();
  FUNC_26("gdk_threads_leave\n");

  return 0;
}
