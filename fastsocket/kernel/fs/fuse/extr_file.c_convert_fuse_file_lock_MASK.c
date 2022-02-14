
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_lock {int type; int pid; int end; int start; } ;
struct file_lock {int fl_type; int fl_pid; int fl_end; int fl_start; } ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct fuse_file_lock *VAR_2,
      struct file_lock *VAR_3)
{
 switch (VAR_2->type) {
 case 129:
  break;

 case 130:
 case 128:
  if (VAR_2->start > VAR_1 || VAR_2->end > VAR_1 ||
      VAR_2->end < VAR_2->start)
   return -VAR_0;

  VAR_3->fl_start = VAR_2->start;
  VAR_3->fl_end = VAR_2->end;
  VAR_3->fl_pid = VAR_2->pid;
  break;

 default:
  return -VAR_0;
 }
 VAR_3->fl_type = VAR_2->type;
 return 0;
}
