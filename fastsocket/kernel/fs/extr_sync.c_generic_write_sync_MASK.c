
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dentry; } ;
struct file {int f_flags; TYPE_2__ f_path; TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,int ,scalar_t__,scalar_t__,int) ;

int FUNC_2(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 if (!(VAR_1->f_flags & VAR_0) && !FUNC_0(VAR_1->f_mapping->host))
  return 0;
 return FUNC_1(VAR_1, VAR_1->f_path.dentry, VAR_2,
          VAR_2 + VAR_3 - 1, 1);
}
