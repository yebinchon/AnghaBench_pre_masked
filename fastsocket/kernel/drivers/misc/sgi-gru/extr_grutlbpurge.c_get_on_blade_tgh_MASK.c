
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int gs_tgh_local_shift; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct gru_state *VAR_0)
{
 return FUNC_0() >> VAR_0->gs_tgh_local_shift;
}
