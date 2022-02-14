
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* history; } ;
struct oslec_state {int curr_pos; int taps; int ** fir_taps16; TYPE_1__ fir_state_bg; } ;
typedef scalar_t__ int16_t ;



__attribute__((used)) static inline void FUNC_0(struct oslec_state *VAR_0, int VAR_1,
        int VAR_2)
{
 int VAR_3;

 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2 > 0)
  VAR_6 = VAR_1 << VAR_2;
 else
  VAR_6 = VAR_1 >> -VAR_2;



 VAR_5 = VAR_0->curr_pos;
 VAR_4 = VAR_0->taps - VAR_5;

 for (VAR_3 = VAR_0->taps - 1; VAR_3 >= VAR_4; VAR_3--) {
  VAR_7 = (VAR_0->fir_state_bg.history[VAR_3 - VAR_4] * VAR_6);
  VAR_0->fir_taps16[1][VAR_3] += (int16_t) ((VAR_7 + (1 << 14)) >> 15);
 }
 for (; VAR_3 >= 0; VAR_3--) {
  VAR_7 = (VAR_0->fir_state_bg.history[VAR_3 + VAR_5] * VAR_6);
  VAR_0->fir_taps16[1][VAR_3] += (int16_t) ((VAR_7 + (1 << 14)) >> 15);
 }
}
