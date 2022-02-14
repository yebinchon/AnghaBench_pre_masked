
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long* vulp ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;

void
FUNC_3(unsigned long VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;


 VAR_3 = *(vulp)VAR_0;
 VAR_3 &= VAR_1;





 while (VAR_3) {
  VAR_4 = FUNC_0(~VAR_3);
  VAR_3 &= VAR_3 - 1;
  if (VAR_4 == 7)
   FUNC_2(VAR_2);
  else
   FUNC_1(16+VAR_4);
 }
}
