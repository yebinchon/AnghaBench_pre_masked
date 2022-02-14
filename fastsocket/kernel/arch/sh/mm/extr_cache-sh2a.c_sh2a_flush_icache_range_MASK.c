
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flusher_data {int addr1; int addr2; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_5)
{
 struct flusher_data *VAR_6 = VAR_5;
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_7 = VAR_6->addr1 & ~(VAR_3-1);
 VAR_8 = (VAR_6->addr2 + VAR_3-1) & ~(VAR_3-1);

 FUNC_5(VAR_10);
 FUNC_3();

 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9+=VAR_3) {
  unsigned long VAR_11 = (VAR_9 & 0x000007f0);
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   unsigned long VAR_13 = FUNC_1(VAR_1 | VAR_11 | (VAR_12 << 11));
   if ((VAR_13 & VAR_2) == (VAR_9 & VAR_2)) {
    VAR_13 &= ~VAR_4;
    FUNC_2(VAR_13, VAR_1 | VAR_11 | (VAR_12 << 11));
   }
  }

  FUNC_2(VAR_11,
     VAR_0 | VAR_11 | 0x00000008);
 }

 FUNC_0();
 FUNC_4(VAR_10);
}
