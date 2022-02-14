
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int * frame_end_branch; int * frame_end_timestamp; int * mid_frame_timestamp; int * cip_syt2; int * cip_syt1; scalar_t__ assigned_timestamp; int * frame_begin_timestamp; scalar_t__ n_packets; scalar_t__ done; int state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct frame *VAR_1)
{
 VAR_1->state = VAR_0;
 VAR_1->done = 0;
 VAR_1->n_packets = 0;
 VAR_1->frame_begin_timestamp = ((void*)0);
 VAR_1->assigned_timestamp = 0;
 VAR_1->cip_syt1 = ((void*)0);
 VAR_1->cip_syt2 = ((void*)0);
 VAR_1->mid_frame_timestamp = ((void*)0);
 VAR_1->frame_end_timestamp = ((void*)0);
 VAR_1->frame_end_branch = ((void*)0);
}
