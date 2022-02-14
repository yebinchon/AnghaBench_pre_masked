
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWidget ;
typedef int GtkAdjustment ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int,int ,int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int*,char***) ;
 int FUNC_14 () ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ) ;
 int VAR_6 ;

int FUNC_18(int VAR_7, char **VAR_8)
{
  GtkWidget *VAR_9, *VAR_10, *VAR_11;
  GtkAdjustment *VAR_12;


  FUNC_2(VAR_1);


  FUNC_4(((void*)0));

  FUNC_13(&VAR_7, &VAR_8);
  VAR_9 = FUNC_17(VAR_5);
  VAR_10 = FUNC_11(((void*)0));
  FUNC_12(FUNC_1(VAR_10), VAR_4);
  FUNC_9(FUNC_0(VAR_9), VAR_10);
  VAR_11 = FUNC_11(((void*)0));
  FUNC_12(FUNC_1(VAR_11), VAR_3);
  FUNC_9(FUNC_0(VAR_10), VAR_11);
  FUNC_10(FUNC_0(VAR_11), 5);
  VAR_12 = (GtkAdjustment*)FUNC_8(0, 0, 100, 0, 0, 0);
  VAR_0 = FUNC_15(VAR_12);
  FUNC_9(FUNC_0(VAR_11), VAR_0);
  FUNC_16(VAR_9);

  if(!(FUNC_3(&VAR_6, VAR_8[1], VAR_2, ((void*)0)) != 0))
    FUNC_5("can't create the thread");


  FUNC_6();
  FUNC_14();
  FUNC_7();
  return 0;
}
