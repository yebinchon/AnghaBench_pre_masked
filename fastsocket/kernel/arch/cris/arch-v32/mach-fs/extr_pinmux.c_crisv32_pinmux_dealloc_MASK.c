
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 FUNC_0();

 if (VAR_5 > VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_2, VAR_9);

 for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++)
  VAR_4[VAR_5][VAR_8] = VAR_3;

 FUNC_1(VAR_5);
 FUNC_3(&VAR_2, VAR_9);

 return 0;
}
