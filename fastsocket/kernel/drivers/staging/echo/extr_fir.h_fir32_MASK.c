
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fir32_state_t {int* history; size_t curr_pos; int taps; int* coeffs; } ;
typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static inline int16_t FUNC_0(struct fir32_state_t *VAR_0, int16_t VAR_1)
{
 int VAR_2;
 int32_t VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_0->history[VAR_0->curr_pos] = VAR_1;
 VAR_5 = VAR_0->curr_pos;
 VAR_4 = VAR_0->taps - VAR_5;
 VAR_3 = 0;
 for (VAR_2 = VAR_0->taps - 1; VAR_2 >= VAR_4; VAR_2--)
  VAR_3 += VAR_0->coeffs[VAR_2] * VAR_0->history[VAR_2 - VAR_4];
 for (; VAR_2 >= 0; VAR_2--)
  VAR_3 += VAR_0->coeffs[VAR_2] * VAR_0->history[VAR_2 + VAR_5];
 if (VAR_0->curr_pos <= 0)
  VAR_0->curr_pos = VAR_0->taps;
 VAR_0->curr_pos--;
 return (int16_t) (VAR_3 >> 15);
}
