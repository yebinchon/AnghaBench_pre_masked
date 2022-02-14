
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_context {struct pvr2_channel* mc_last; struct pvr2_channel* mc_first; int hdw; } ;
struct pvr2_channel {struct pvr2_channel* mc_next; struct pvr2_channel* mc_prev; struct pvr2_context* mc_head; int hdw; } ;


 int FUNC_0 (struct pvr2_context*) ;
 int FUNC_1 (struct pvr2_context*) ;

void FUNC_2(struct pvr2_channel *VAR_0,struct pvr2_context *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->hdw = VAR_1->hdw;
 VAR_0->mc_head = VAR_1;
 VAR_0->mc_next = ((void*)0);
 VAR_0->mc_prev = VAR_1->mc_last;
 if (VAR_1->mc_last) {
  VAR_1->mc_last->mc_next = VAR_0;
 } else {
  VAR_1->mc_first = VAR_0;
 }
 VAR_1->mc_last = VAR_0;
 FUNC_1(VAR_1);
}
