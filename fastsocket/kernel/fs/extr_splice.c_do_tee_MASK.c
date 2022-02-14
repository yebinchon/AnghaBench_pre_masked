
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_1 (struct pipe_inode_info*,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_2 (struct pipe_inode_info*,unsigned int) ;
 struct pipe_inode_info* FUNC_3 (int ) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_1, struct file *VAR_2, size_t VAR_3,
     unsigned int VAR_4)
{
 struct pipe_inode_info *VAR_5 = FUNC_3(VAR_1->f_path.dentry->d_inode);
 struct pipe_inode_info *VAR_6 = FUNC_3(VAR_2->f_path.dentry->d_inode);
 int VAR_7 = -VAR_0;





 if (VAR_5 && VAR_6 && VAR_5 != VAR_6) {




  VAR_7 = FUNC_0(VAR_5, VAR_4);
  if (!VAR_7) {
   VAR_7 = FUNC_2(VAR_6, VAR_4);
   if (!VAR_7)
    VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3, VAR_4);
  }
 }

 return VAR_7;
}
