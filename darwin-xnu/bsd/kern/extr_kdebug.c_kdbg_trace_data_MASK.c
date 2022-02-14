
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint64_t ;
struct proc {long p_pid; long p_uniqueid; } ;



void
FUNC_0(struct proc *VAR_0, long *VAR_1, long *VAR_2)
{
 if (!VAR_0) {
  *VAR_1 = 0;
  *VAR_2 = 0;
 } else {
  *VAR_1 = VAR_0->p_pid;
  *VAR_2 = VAR_0->p_uniqueid;
  if ((uint64_t) *VAR_2 != VAR_0->p_uniqueid) {
   *VAR_2 = 0;
  }
 }
}
