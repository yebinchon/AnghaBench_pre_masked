
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_inode_info {int i_inline_ea; int ea; } ;
struct jfs_ea_list {scalar_t__ size; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct jfs_ea_list*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct jfs_ea_list *VAR_2)
{
 struct jfs_inode_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_3(&VAR_3->ea);

 if (VAR_4 == 0) {
  VAR_2->size = 0;
  return 0;
 }


 if ((FUNC_3(&VAR_3->ea) > sizeof (VAR_3->i_inline_ea)))
  return -VAR_0;
 if (FUNC_1(((struct jfs_ea_list *) &VAR_3->i_inline_ea)->size)
     != VAR_4)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3->i_inline_ea, VAR_4);
 return 0;
}
