
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 long FUNC_2 (int ,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_0,
  unsigned int VAR_1, unsigned long VAR_2)
{
 long VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0->f_path.dentry->d_inode, VAR_0, VAR_1, VAR_2);
 FUNC_1();
 return VAR_3;
}
