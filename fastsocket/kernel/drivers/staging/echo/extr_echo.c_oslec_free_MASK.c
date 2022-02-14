
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oslec_state {struct oslec_state* snapshot; struct oslec_state** fir_taps16; int fir_state_bg; int fir_state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct oslec_state*) ;

void FUNC_2(struct oslec_state *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->fir_state);
 FUNC_0(&VAR_0->fir_state_bg);
 for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
  FUNC_1(VAR_0->fir_taps16[VAR_1]);
 FUNC_1(VAR_0->snapshot);
 FUNC_1(VAR_0);
}
