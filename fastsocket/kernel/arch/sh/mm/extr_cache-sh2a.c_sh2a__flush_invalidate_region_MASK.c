
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_9 = (unsigned long)VAR_6 & ~(VAR_5-1);
 VAR_10 = ((unsigned long)VAR_6 + VAR_7 + VAR_5-1)
  & ~(VAR_5-1);
 FUNC_5(VAR_11);
 FUNC_3();
 for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8+=VAR_5) {
  FUNC_2((VAR_8 & VAR_2),
     VAR_0 | (VAR_8 & 0x000007f0) | 0x00000008);
  FUNC_2((VAR_8 & VAR_2),
     VAR_1 | (VAR_8 & 0x000007f0) | 0x00000008);
 }

 FUNC_0();
 FUNC_4(VAR_11);
}
