
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {TYPE_2__* fl_file; } ;
struct TYPE_3__ {scalar_t__ signum; } ;
struct TYPE_4__ {TYPE_1__ f_owner; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct file_lock *VAR_0)
{
 if (!VAR_0->fl_file)
  return;

 FUNC_0(VAR_0->fl_file);
 VAR_0->fl_file->f_owner.signum = 0;
}
