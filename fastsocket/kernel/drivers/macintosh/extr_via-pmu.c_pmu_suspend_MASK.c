
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
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int * VAR_10 ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(void)
{
 unsigned long VAR_11;

 if (!VAR_10)
  return;

 FUNC_2(&VAR_6, VAR_11);
 VAR_8++;
 if (VAR_8 > 1) {
  FUNC_3(&VAR_6, VAR_11);
  return;
 }

 do {
  FUNC_3(&VAR_6, VAR_11);
  if (VAR_9)
   VAR_3 = 1;
  FUNC_4(0, ((void*)0));
  FUNC_2(&VAR_6, VAR_11);
  if (!VAR_3 && VAR_7 == VAR_5 && !VAR_9) {
   if (VAR_4 >= 0)
    FUNC_0(VAR_4);
   FUNC_1(&VAR_10[VAR_1], VAR_0 | VAR_2);
   FUNC_3(&VAR_6, VAR_11);
   break;
  }
 } while (1);
}
