
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int multi; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int GMainLoop ;
typedef int GIOChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 () ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;

int FUNC_9(int VAR_9, char **VAR_10)
{
  GlobalInfo *VAR_11;
  GMainLoop*VAR_12;
  int VAR_13;
  GIOChannel* VAR_14;
  VAR_11 = FUNC_7(sizeof(GlobalInfo));

  VAR_13 = FUNC_8();
  VAR_14 = FUNC_4(VAR_13);
  FUNC_3(VAR_14, VAR_5, VAR_6, VAR_11);
  VAR_12 = FUNC_5(((void*)0), VAR_4);
  VAR_11->multi = FUNC_1();
  FUNC_2(VAR_11->multi, VAR_1, VAR_7);
  FUNC_2(VAR_11->multi, VAR_0, VAR_11);
  FUNC_2(VAR_11->multi, VAR_3, VAR_8);
  FUNC_2(VAR_11->multi, VAR_2, VAR_11);




  FUNC_6(VAR_12);
  FUNC_0(VAR_11->multi);
  return 0;
}
