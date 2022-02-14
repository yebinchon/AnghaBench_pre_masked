
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int * fl_lmops; int * fl_ops; int fl_end; int fl_start; int fl_type; int fl_flags; int * fl_file; int fl_pid; int fl_owner; } ;



void FUNC_0(struct file_lock *VAR_0, const struct file_lock *VAR_1)
{
 VAR_0->fl_owner = VAR_1->fl_owner;
 VAR_0->fl_pid = VAR_1->fl_pid;
 VAR_0->fl_file = ((void*)0);
 VAR_0->fl_flags = VAR_1->fl_flags;
 VAR_0->fl_type = VAR_1->fl_type;
 VAR_0->fl_start = VAR_1->fl_start;
 VAR_0->fl_end = VAR_1->fl_end;
 VAR_0->fl_ops = ((void*)0);
 VAR_0->fl_lmops = ((void*)0);
}
