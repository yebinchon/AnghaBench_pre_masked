
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(unsigned int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_4 >> 3;
 int VAR_6 = 1 << (VAR_4 & 7);

 if (VAR_3)
  VAR_0[VAR_5] |= VAR_6;
 else
  VAR_0[VAR_5] &= ~VAR_6;

 FUNC_1(VAR_0[VAR_5],
  FUNC_0(VAR_1[VAR_5]));
}
