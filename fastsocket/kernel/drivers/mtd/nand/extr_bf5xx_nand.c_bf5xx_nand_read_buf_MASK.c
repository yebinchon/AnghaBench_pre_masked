
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_info {int dummy; } ;


 unsigned short VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 unsigned short FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned short) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct mtd_info *VAR_2, uint8_t *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned short VAR_6;





 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  while (FUNC_3() & VAR_1)
   FUNC_6();


  FUNC_4(0x0000);
  FUNC_0();

  while ((FUNC_1() & VAR_0) != VAR_0)
   FUNC_6();

  VAR_3[VAR_5] = FUNC_2();

  VAR_6 = FUNC_1();
  VAR_6 |= VAR_0;
  FUNC_5(VAR_6);
  FUNC_0();
 }
}
