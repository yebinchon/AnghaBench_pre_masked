
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_3 (struct inode*,int) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5,
    struct nameidata *VAR_6)
{
 struct inode *VAR_7 = FUNC_3(VAR_3, VAR_5);
 int VAR_8 = FUNC_1(VAR_7);
 if (!FUNC_0(VAR_7)) {
  VAR_7->i_op = &VAR_1;
  VAR_7->i_fop = &VAR_2;
  VAR_7->i_mapping->a_ops = &VAR_0;
  FUNC_4(VAR_7);
  VAR_8 = FUNC_2(VAR_4, VAR_7);
 }
 return VAR_8;
}
