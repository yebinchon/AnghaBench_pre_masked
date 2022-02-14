
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;
struct gfs2_inode {TYPE_1__ i_inode; scalar_t__ i_diskflags; int i_flags; scalar_t__ i_no_addr; scalar_t__ i_no_formal_ino; } ;
struct gfs2_glock {struct gfs2_inode* gl_object; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,unsigned long long,unsigned long long,int ,int ,unsigned int,unsigned long long) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, const struct gfs2_glock *VAR_1)
{
 const struct gfs2_inode *VAR_2 = VAR_1->gl_object;
 if (VAR_2 == ((void*)0))
  return 0;
 FUNC_1(VAR_0, " I: n:%llu/%llu t:%u f:0x%02lx d:0x%08x s:%llu\n",
    (unsigned long long)VAR_2->i_no_formal_ino,
    (unsigned long long)VAR_2->i_no_addr,
    FUNC_0(VAR_2->i_inode.i_mode), VAR_2->i_flags,
    (unsigned int)VAR_2->i_diskflags,
    (unsigned long long)FUNC_2(&VAR_2->i_inode));
 return 0;
}
