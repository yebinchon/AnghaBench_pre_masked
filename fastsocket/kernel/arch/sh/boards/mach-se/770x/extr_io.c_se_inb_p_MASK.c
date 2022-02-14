
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int* FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

unsigned char FUNC_3(unsigned long VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_2(VAR_0))
  VAR_1 = (*FUNC_1(VAR_0) >> 8);
 else
  VAR_1 = (*FUNC_1(VAR_0))&0xff;
 FUNC_0();
 return VAR_1;
}
