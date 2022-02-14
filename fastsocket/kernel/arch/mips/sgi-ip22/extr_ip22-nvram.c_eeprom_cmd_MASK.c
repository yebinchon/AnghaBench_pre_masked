
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int,unsigned int*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(unsigned int *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 unsigned short VAR_6;
 int VAR_7;

 VAR_6 = VAR_4 | (VAR_5 << (16 - VAR_0));
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6 & (1<<15))
   FUNC_1(FUNC_0(VAR_3) | VAR_1, VAR_3);
  else
   FUNC_1(FUNC_0(VAR_3) & ~VAR_1, VAR_3);
  FUNC_1(FUNC_0(VAR_3) & ~VAR_2, VAR_3);
  FUNC_2();
  FUNC_1(FUNC_0(VAR_3) | VAR_2, VAR_3);
  FUNC_2();
  VAR_6 <<= 1;
 }

 FUNC_1(FUNC_0(VAR_3) & ~VAR_1, VAR_3);
}
