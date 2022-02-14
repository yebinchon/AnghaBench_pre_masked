
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; } ;
struct inode {int * i_fop; int * i_op; } ;
struct TYPE_2__ {int * i_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*,void*,struct inode*) ;

__attribute__((used)) static int
FUNC_6(struct super_block *VAR_7, void *VAR_8)
{
 struct inode *VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 if (!VAR_6)
  goto out;

 VAR_10 = -VAR_2;
 VAR_9 = FUNC_4(VAR_7, VAR_3 | 0775);
 if (!VAR_9)
  goto out;

 VAR_9->i_op = &VAR_4;
 VAR_9->i_fop = &VAR_5;
 FUNC_0(VAR_9)->i_ctx = ((void*)0);
 FUNC_2(VAR_9);

 VAR_10 = -VAR_0;
 if (!FUNC_5(VAR_7, VAR_8, VAR_9))
  goto out_iput;

 VAR_10 = -VAR_2;
 VAR_7->s_root = FUNC_1(VAR_9);
 if (!VAR_7->s_root)
  goto out_iput;

 return 0;
out_iput:
 FUNC_3(VAR_9);
out:
 return VAR_10;
}
