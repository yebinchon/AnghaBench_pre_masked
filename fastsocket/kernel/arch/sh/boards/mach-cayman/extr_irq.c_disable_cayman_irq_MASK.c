
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;
 unsigned char VAR_6;

 VAR_2 -= VAR_1;
 VAR_5 = VAR_0 + ((VAR_2 / 8) << 2);
 VAR_6 = 1<<(VAR_2 % 8);
 FUNC_3(VAR_3);
 VAR_4 = FUNC_0(VAR_5);
 VAR_4 &= ~VAR_6;
 FUNC_1(VAR_4, VAR_5);
 FUNC_2(VAR_3);
}
