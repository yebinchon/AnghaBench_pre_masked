
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(void)
{
 int VAR_6, VAR_7;

idr_again:
 if (FUNC_4(FUNC_1(&VAR_4, VAR_2) == 0))
  return -VAR_1;
 FUNC_2(&VAR_5);
 VAR_6 = FUNC_0(&VAR_4, ((void*)0), &VAR_7);
 FUNC_3(&VAR_5);
 if (FUNC_4(VAR_6 == -VAR_0))
  goto idr_again;
 else if (FUNC_4(VAR_6))
  return VAR_6;
 if (VAR_7 > VAR_3)
  return -VAR_1;
 return VAR_7;
}
