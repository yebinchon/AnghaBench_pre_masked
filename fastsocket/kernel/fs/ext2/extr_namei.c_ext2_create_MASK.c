
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int * i_fop; TYPE_1__* i_mapping; int i_sb; int * i_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_3 (struct inode*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7 (struct inode * VAR_7, struct dentry * VAR_8, int VAR_9, struct nameidata *VAR_10)
{
 struct inode * VAR_11 = FUNC_3 (VAR_7, VAR_9);
 int VAR_12 = FUNC_1(VAR_11);
 if (!FUNC_0(VAR_11)) {
  VAR_11->i_op = &VAR_3;
  if (FUNC_4(VAR_11->i_sb)) {
   VAR_11->i_mapping->a_ops = &VAR_2;
   VAR_11->i_fop = &VAR_6;
  } else if (FUNC_6(VAR_11->i_sb, VAR_0)) {
   VAR_11->i_mapping->a_ops = &VAR_5;
   VAR_11->i_fop = &VAR_4;
  } else {
   VAR_11->i_mapping->a_ops = &VAR_1;
   VAR_11->i_fop = &VAR_4;
  }
  FUNC_5(VAR_11);
  VAR_12 = FUNC_2(VAR_8, VAR_11);
 }
 return VAR_12;
}
