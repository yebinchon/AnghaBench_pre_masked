
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_6 = (unsigned long)VAR_3 & ~(VAR_2-1);
 VAR_7 = ((unsigned long)VAR_3 + VAR_4 + VAR_2-1)
  & ~(VAR_2-1);

 FUNC_4(VAR_8);
 FUNC_2();

 for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5+=VAR_2) {
  FUNC_1((VAR_5 & VAR_1),
     VAR_0 | (VAR_5 & 0x000007f0) | 0x00000008);
 }
 FUNC_0();
 FUNC_3(VAR_8);
}
