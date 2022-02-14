
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int *,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_3("set-indicator");

 if (VAR_6 == VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_6, 3, 1, ((void*)0), VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_5 == -2 || (VAR_5 >= 9900 && VAR_5 <= 9905));

 if (VAR_5 < 0)
  return FUNC_2(VAR_5);

 return VAR_5;
}
