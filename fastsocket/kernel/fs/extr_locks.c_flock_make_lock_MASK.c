
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_type; int fl_end; int fl_flags; int fl_pid; struct file* fl_file; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (unsigned int) ;
 struct file_lock* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, struct file_lock **VAR_5,
  unsigned int VAR_6)
{
 struct file_lock *VAR_7;
 int VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1();
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->fl_file = VAR_4;
 VAR_7->fl_pid = VAR_3->tgid;
 VAR_7->fl_flags = VAR_1;
 VAR_7->fl_type = VAR_8;
 VAR_7->fl_end = VAR_2;

 *VAR_5 = VAR_7;
 return 0;
}
