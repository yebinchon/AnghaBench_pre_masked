
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned char,int ) ;

void FUNC_3(unsigned char VAR_2, unsigned long VAR_3)
{
 if (VAR_3 >= VAR_1 && VAR_3 < VAR_0)
  FUNC_2(VAR_2, FUNC_1(VAR_3));
 else
  *(volatile unsigned char *)FUNC_0(VAR_3) = VAR_2;
}
