
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,char*) ;
 int VAR_5 ;
 int FUNC_12 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_13(int VAR_10, char **VAR_11)
{
  if(VAR_10 <= 1)
    return 0;

  if(FUNC_2(VAR_2)) {
    FUNC_11(VAR_8, "Could not init curl\n");
    return 1;
  }

  VAR_3 = FUNC_8();
  VAR_9 = FUNC_10(VAR_3, VAR_6, ((void*)0));

  VAR_4 = FUNC_4();
  FUNC_5(VAR_4, VAR_0, VAR_5);
  FUNC_5(VAR_4, VAR_1, VAR_7);

  while(VAR_10-- > 1) {
    FUNC_0(VAR_11[VAR_10], VAR_10);
  }

  FUNC_6(VAR_3);

  FUNC_3(VAR_4);
  FUNC_9(VAR_9);
  FUNC_7(VAR_3);

  FUNC_12();
  FUNC_1();

  return 0;
}
