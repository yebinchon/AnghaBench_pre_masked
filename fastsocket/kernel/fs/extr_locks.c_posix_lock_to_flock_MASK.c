
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_start; scalar_t__ l_len; int l_type; scalar_t__ l_whence; int l_pid; } ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; int fl_type; int fl_pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct flock *VAR_3, struct file_lock *VAR_4)
{
 VAR_3->l_pid = VAR_4->fl_pid;
 VAR_3->l_start = VAR_4->fl_start;
 VAR_3->l_len = VAR_4->fl_end == VAR_1 ? 0 :
  VAR_4->fl_end - VAR_4->fl_start + 1;
 VAR_3->l_whence = 0;
 VAR_3->l_type = VAR_4->fl_type;
 return 0;
}
