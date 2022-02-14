
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_trc_mod_s {int ntrc; scalar_t__ stopped; scalar_t__ tail; scalar_t__ head; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct bfa_trc_mod_s *VAR_1)
{
 VAR_1->head = VAR_1->tail = VAR_1->stopped = 0;
 VAR_1->ntrc = VAR_0;
}
