
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (void*,void*,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void *FUNC_8(unsigned long VAR_3)
{
 void *VAR_4 = (void *) VAR_3;
 unsigned long VAR_5;

 FUNC_1();
 FUNC_5();
 if (FUNC_3(VAR_3)) {
  VAR_5 = VAR_2 - (VAR_3 & ~VAR_1);
  VAR_4 = (void *) FUNC_0(VAR_0);
  if (VAR_4)
   FUNC_4(VAR_4, (void *) FUNC_2(VAR_3), VAR_5);
 }
 FUNC_6();
 FUNC_7();
 return VAR_4;
}
