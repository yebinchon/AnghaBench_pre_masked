
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;

int FUNC_2(void)
{
 if (!VAR_1)
  return 0;
 if (FUNC_0(0, VAR_2, ((void*)0)) > 0)
  VAR_4 = VAR_2;
 else if (FUNC_0(0, VAR_5, ((void*)0)) > 0)
  VAR_4 = VAR_5;
 else
  return -VAR_0;
 return FUNC_1(&VAR_3);
}
