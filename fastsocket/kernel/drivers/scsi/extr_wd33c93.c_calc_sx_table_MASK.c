
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx_period {int period_ns; int reg_value; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_0, struct sx_period VAR_1[9])
{
 unsigned int VAR_2, VAR_3;
 if (VAR_0 < 11)
  VAR_2 = 2;
 else if (VAR_0 < 16)
  VAR_2 = 3;
 else
  VAR_2 = 4;

 VAR_2 = (100000 * VAR_2) / 2 / VAR_0;

 VAR_1[0].period_ns = 1;
 VAR_1[0].reg_value = 0x20;
 for (VAR_3 = 1; VAR_3 < 8; VAR_3++) {
  VAR_1[VAR_3].period_ns = FUNC_0((VAR_3+1)*VAR_2 / 100);
  VAR_1[VAR_3].reg_value = (VAR_3+1)*0x10;
 }
 VAR_1[7].reg_value = 0;
 VAR_1[8].period_ns = 0;
 VAR_1[8].reg_value = 0;
}
