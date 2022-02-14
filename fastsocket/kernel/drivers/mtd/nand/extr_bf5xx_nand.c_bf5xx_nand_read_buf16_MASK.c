
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u16 ;
struct mtd_info {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;
 u16 *VAR_4 = (u16 *) VAR_1;
 VAR_2 >>= 1;





 FUNC_2(0x5555);

 FUNC_0();

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_4[VAR_3] = FUNC_1();
}
