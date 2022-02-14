
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_7 = (unsigned long)VAR_4 & ~(VAR_2-1);
 VAR_8 = ((unsigned long)VAR_4 + VAR_5 + VAR_2-1)
  & ~(VAR_2-1);
 for (VAR_6 = VAR_7; VAR_6 < VAR_8; VAR_6+=VAR_2) {
  unsigned long VAR_9 = VAR_0 | (VAR_6 & 0x00000ff0);
  int VAR_10;
  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   unsigned long VAR_11 = FUNC_0(VAR_9 | (VAR_10 << 12));
   if ((VAR_11 & VAR_1) == (VAR_6 & VAR_1)) {
    VAR_11 &= ~VAR_3;
    FUNC_1(VAR_11, VAR_9 | (VAR_10 << 12));
   }
  }
 }
}
