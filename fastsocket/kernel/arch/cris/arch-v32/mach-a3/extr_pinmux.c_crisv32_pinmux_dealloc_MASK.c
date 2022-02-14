
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;

 FUNC_0();

 if (VAR_6 > VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_3, VAR_10);

 for (VAR_9 = VAR_7; VAR_9 <= VAR_8; VAR_9++)
  VAR_5[VAR_6 * VAR_2 + VAR_9] = VAR_4;

 FUNC_1(VAR_6);
 FUNC_3(&VAR_3, VAR_10);

 return 0;
}
