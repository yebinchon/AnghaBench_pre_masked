
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_glock {struct gfs2_sbd* gl_sbd; } ;
struct address_space {int * a_ops; struct inode* host; } ;
struct TYPE_2__ {struct gfs2_sbd* s_fs_info; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct gfs2_sbd *FUNC_0(struct address_space *VAR_1)
{
 struct inode *VAR_2 = VAR_1->host;
 if (VAR_1->a_ops == &VAR_0)
  return (((struct gfs2_glock *)VAR_1) - 1)->gl_sbd;
 else
  return VAR_2->i_sb->s_fs_info;
}
