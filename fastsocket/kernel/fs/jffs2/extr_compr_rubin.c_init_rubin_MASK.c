
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {long p; long bit_number; int bit_divider; int* bits; scalar_t__ q; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rubin_state *VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_1->q = 0;
 VAR_1->p = (long) (2 * VAR_0);
 VAR_1->bit_number = (long) 0;
 VAR_1->bit_divider = VAR_2;

 for (VAR_4=0; VAR_4<8; VAR_4++)
  VAR_1->bits[VAR_4] = VAR_3[VAR_4];
}
