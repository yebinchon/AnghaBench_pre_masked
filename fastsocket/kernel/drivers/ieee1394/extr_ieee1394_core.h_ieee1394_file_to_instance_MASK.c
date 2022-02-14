
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct file *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->f_path.dentry->d_inode);
 if (VAR_1 < 0)
  VAR_1 = 0;
 return VAR_1;
}
