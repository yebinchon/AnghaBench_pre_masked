
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_6 >> VAR_2;
 unsigned long *VAR_8;

 VAR_8 = VAR_3 + (VAR_7 >> VAR_1);
 VAR_7 &= (VAR_0 - 1);

 FUNC_1(&VAR_5);

 FUNC_0(*VAR_8 & (1L << VAR_7));

 *VAR_8 |= (1L << VAR_7);
 VAR_4++;

 FUNC_2(&VAR_5);
}
