
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {scalar_t__ down; } ;
struct dnode {scalar_t__ self; scalar_t__ up; scalar_t__ root_dnode; } ;
typedef scalar_t__ dnode_secno ;


 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct quad_buffer_head*) ;
 struct dnode* FUNC_5 (struct super_block*,int ,struct quad_buffer_head*) ;
 int FUNC_6 (struct quad_buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0, struct dnode *VAR_1)
{
 struct hpfs_dirent *VAR_2;
 struct hpfs_dirent *VAR_3 = FUNC_2(VAR_1);
 dnode_secno VAR_4 = VAR_1->self;
 for (VAR_2 = FUNC_3(VAR_1); VAR_2 < VAR_3; VAR_2 = FUNC_1(VAR_2))
  if (VAR_2->down) {
   struct quad_buffer_head VAR_5;
   struct dnode *VAR_6;
   if ((VAR_6 = FUNC_5(VAR_0, FUNC_0(VAR_2), &VAR_5))) {
    if (VAR_6->up != VAR_4 || VAR_6->root_dnode) {
     VAR_6->up = VAR_4;
     VAR_6->root_dnode = 0;
     FUNC_6(&VAR_5);
    }
    FUNC_4(&VAR_5);
   }
  }
}
