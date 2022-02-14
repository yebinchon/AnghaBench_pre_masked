
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_info {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int const) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_1,
    const uint8_t *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  while (FUNC_1() & VAR_0)
   FUNC_3();

  FUNC_2(VAR_2[VAR_4]);
  FUNC_0();
 }
}
