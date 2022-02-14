
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

void FUNC_4(void *VAR_1, size_t VAR_2, int VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1;
 unsigned long VAR_5 = VAR_4 + VAR_2;

 switch (VAR_3) {
 case 129:
  FUNC_0();
 case 130:




  if ((VAR_4 & (VAR_0 - 1)) || (VAR_2 & (VAR_0 - 1)))
   FUNC_2(VAR_4, VAR_5);
  else
   FUNC_3(VAR_4, VAR_5);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_5);
  break;
 case 131:
  FUNC_2(VAR_4, VAR_5);
  break;
 }
}
