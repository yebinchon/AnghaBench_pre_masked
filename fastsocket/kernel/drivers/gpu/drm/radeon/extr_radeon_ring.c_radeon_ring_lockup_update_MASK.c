
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int last_activity; int rptr; int last_rptr; } ;


 int VAR_0 ;

void FUNC_0(struct radeon_ring *VAR_1)
{
 VAR_1->last_rptr = VAR_1->rptr;
 VAR_1->last_activity = VAR_0;
}
