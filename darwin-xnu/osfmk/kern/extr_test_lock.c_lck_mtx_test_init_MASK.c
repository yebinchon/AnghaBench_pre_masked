
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 scalar_t__ FUNC_5 (int*,int ,int,int ) ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_8(void)
{
 static int VAR_7 = 0;





 if (FUNC_7(&VAR_7, VAR_0) >= 2)
  return;

 if (FUNC_5(&VAR_7, 0, 1, VAR_1)){
  FUNC_2(&VAR_6);
  FUNC_3(&VAR_5, "testlck_mtx", &VAR_6);
  FUNC_1(&VAR_4);
  FUNC_4(&VAR_3, &VAR_5, &VAR_4);

  FUNC_0();

  FUNC_6(&VAR_7, VAR_2);
 }

 while(FUNC_7(&VAR_7, VAR_0) < 2);
}
