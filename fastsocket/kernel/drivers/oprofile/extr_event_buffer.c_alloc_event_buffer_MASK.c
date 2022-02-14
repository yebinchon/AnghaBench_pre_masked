
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int) ;

int FUNC_3(void)
{
 unsigned long VAR_9;

 FUNC_0(&VAR_8, VAR_9);
 VAR_3 = VAR_6;
 VAR_4 = VAR_7;
 FUNC_1(&VAR_8, VAR_9);

 if (VAR_4 >= VAR_3)
  return -VAR_0;

 VAR_2 = 0;
 VAR_5 = FUNC_2(sizeof(unsigned long) * VAR_3);
 if (!VAR_5)
  return -VAR_1;

 return 0;
}
