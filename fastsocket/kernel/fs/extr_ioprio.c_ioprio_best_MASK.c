
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned short,unsigned short) ;

int FUNC_2(unsigned short VAR_2, unsigned short VAR_3)
{
 unsigned short VAR_4 = FUNC_0(VAR_2);
 unsigned short VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_4 = VAR_0;
 if (VAR_5 == VAR_1)
  VAR_5 = VAR_0;

 if (VAR_4 == VAR_5)
  return FUNC_1(VAR_2, VAR_3);
 if (VAR_4 > VAR_5)
  return VAR_3;
 else
  return VAR_2;
}
