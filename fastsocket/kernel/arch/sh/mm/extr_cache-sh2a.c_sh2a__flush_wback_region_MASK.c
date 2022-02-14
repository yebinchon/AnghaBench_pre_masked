
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;

 VAR_7 = (unsigned long)VAR_4 & ~(VAR_2-1);
 VAR_8 = ((unsigned long)VAR_4 + VAR_5 + VAR_2-1)
  & ~(VAR_2-1);

 FUNC_5(VAR_9);
 FUNC_3();

 for (VAR_6 = VAR_7; VAR_6 < VAR_8; VAR_6+=VAR_2) {
  unsigned long VAR_10 = VAR_0 | (VAR_6 & 0x000007f0);
  int VAR_11;
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   unsigned long VAR_12 = FUNC_1(VAR_10 | (VAR_11 << 11));
   if ((VAR_12 & VAR_1) == (VAR_6 & VAR_1)) {
    VAR_12 &= ~VAR_3;
    FUNC_2(VAR_12, VAR_10 | (VAR_11 << 11));
   }
  }
 }

 FUNC_0();
 FUNC_4(VAR_9);
}
