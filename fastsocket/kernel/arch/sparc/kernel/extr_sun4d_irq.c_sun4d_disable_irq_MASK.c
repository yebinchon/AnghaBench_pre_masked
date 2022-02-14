
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4)
{
 int VAR_5 = VAR_1[(VAR_4 >> 5) - 1];
 unsigned long VAR_6;

 if (VAR_4 < VAR_0)
  return;

 FUNC_2(&VAR_3, VAR_6);
 FUNC_1(VAR_5, FUNC_0(VAR_5) | (1 << VAR_2[(VAR_4 >> 2) & 7]));
 FUNC_3(&VAR_3, VAR_6);
}
