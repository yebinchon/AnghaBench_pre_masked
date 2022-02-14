
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (((VAR_3 | VAR_2) & (VAR_0 - 1)) == 0) {
  VAR_4 = VAR_2 + VAR_3;
  do {
   FUNC_2(VAR_2);
   VAR_2 += VAR_0;
  } while(VAR_2 != VAR_4);
 } else if (VAR_3 > VAR_1) {
  FUNC_1();
 } else {
  FUNC_0(VAR_2, VAR_2 + VAR_3);
 }
}
