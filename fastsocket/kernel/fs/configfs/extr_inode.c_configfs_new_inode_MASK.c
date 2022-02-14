
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int * i_op; TYPE_1__* i_mapping; } ;
struct configfs_dirent {int s_iattr; } ;
typedef int mode_t ;
struct TYPE_2__ {int * backing_dev_info; int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int ) ;

struct inode * FUNC_3(mode_t VAR_4, struct configfs_dirent * VAR_5)
{
 struct inode * VAR_6 = FUNC_0(VAR_3);
 if (VAR_6) {
  VAR_6->i_mapping->a_ops = &VAR_0;
  VAR_6->i_mapping->backing_dev_info = &VAR_1;
  VAR_6->i_op = &VAR_2;

  if (VAR_5->s_iattr) {




   FUNC_2(VAR_6, VAR_5->s_iattr);
  } else
   FUNC_1(VAR_6, VAR_4);
 }
 return VAR_6;
}
