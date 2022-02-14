
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int * fl_lmops; int * fl_ops; scalar_t__ fl_end; scalar_t__ fl_start; scalar_t__ fl_type; scalar_t__ fl_flags; int * fl_file; int * fl_nspid; scalar_t__ fl_pid; int * fl_owner; int * fl_fasync; int * fl_next; int fl_wait; int fl_block; int fl_link; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct file_lock *VAR_0)
{
 FUNC_0(&VAR_0->fl_link);
 FUNC_0(&VAR_0->fl_block);
 FUNC_1(&VAR_0->fl_wait);
 VAR_0->fl_next = ((void*)0);
 VAR_0->fl_fasync = ((void*)0);
 VAR_0->fl_owner = ((void*)0);
 VAR_0->fl_pid = 0;
 VAR_0->fl_nspid = ((void*)0);
 VAR_0->fl_file = ((void*)0);
 VAR_0->fl_flags = 0;
 VAR_0->fl_type = 0;
 VAR_0->fl_start = VAR_0->fl_end = 0;
 VAR_0->fl_ops = ((void*)0);
 VAR_0->fl_lmops = ((void*)0);
}
