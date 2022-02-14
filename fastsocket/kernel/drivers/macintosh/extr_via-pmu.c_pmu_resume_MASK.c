
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int * VAR_7 ;

void
FUNC_5(void)
{
 unsigned long VAR_8;

 if (!VAR_7 || (VAR_6 < 1))
  return;

 FUNC_3(&VAR_5, VAR_8);
 VAR_6--;
 if (VAR_6 > 0) {
  FUNC_4(&VAR_5, VAR_8);
  return;
 }
 VAR_3 = 1;
 if (VAR_4 >= 0)
  FUNC_0(VAR_4);
 FUNC_1(&VAR_7[VAR_1], VAR_0 | VAR_2);
 FUNC_4(&VAR_5, VAR_8);
 FUNC_2();
}
