
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned int,int *) ;
 unsigned long FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned int FUNC_7 () ;

void FUNC_8(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned int VAR_7 = FUNC_7();
 unsigned long VAR_8;
 int VAR_9;

 FUNC_5(VAR_8);
 VAR_9 = (VAR_6 - VAR_5 + (VAR_3 - 1)) >> VAR_2;
 if (VAR_9 > (VAR_0/4)) {
  FUNC_2();
 } else {
  unsigned long VAR_10;
  unsigned long VAR_11 = FUNC_1();

  VAR_10 = FUNC_0(VAR_7, &VAR_4);
  VAR_5 &= VAR_1;
  VAR_6 += (VAR_3 - 1);
  VAR_6 &= VAR_1;
  FUNC_6(VAR_10);
  while (VAR_5 < VAR_6) {
   FUNC_3(VAR_10, VAR_5);
   VAR_5 += VAR_3;
  }
  FUNC_6(VAR_11);
 }
 FUNC_4(VAR_8);
}
