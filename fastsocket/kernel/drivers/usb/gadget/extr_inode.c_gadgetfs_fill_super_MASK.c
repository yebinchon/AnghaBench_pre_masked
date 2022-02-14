
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_time_gran; struct dentry* s_root; int * s_op; int s_magic; int s_blocksize_bits; int s_blocksize; } ;
struct inode {int * i_op; } ;
struct dev_data {int dentry; struct super_block* sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dentry* FUNC_0 (struct inode*) ;
 int VAR_10 ;
 struct dev_data* FUNC_1 () ;
 int FUNC_2 (struct dentry*) ;
 int VAR_11 ;
 int FUNC_3 (struct super_block*,int ,struct dev_data*,int *,int *) ;
 struct inode* FUNC_4 (struct super_block*,int *,int *,int) ;
 int FUNC_5 (struct inode*) ;
 int VAR_12 ;
 int FUNC_6 (struct dev_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct dev_data* VAR_15 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8 (struct super_block *VAR_16, void *VAR_17, int VAR_18)
{
 struct inode *VAR_19;
 struct dentry *VAR_20;
 struct dev_data *VAR_21;

 if (VAR_15)
  return -VAR_3;


 (void) FUNC_7 (&VAR_12);
 if (!VAR_0)
  return -VAR_1;


 VAR_16->s_blocksize = VAR_6;
 VAR_16->s_blocksize_bits = VAR_5;
 VAR_16->s_magic = VAR_4;
 VAR_16->s_op = &VAR_11;
 VAR_16->s_time_gran = 1;


 VAR_19 = FUNC_4 (VAR_16,
   ((void*)0), &VAR_14,
   VAR_7 | VAR_8 | VAR_9);
 if (!VAR_19)
  goto enomem0;
 VAR_19->i_op = &VAR_13;
 if (!(VAR_20 = FUNC_0 (VAR_19)))
  goto enomem1;
 VAR_16->s_root = VAR_20;




 VAR_21 = FUNC_1 ();
 if (!VAR_21)
  goto enomem2;

 VAR_21->sb = VAR_16;
 if (!FUNC_3 (VAR_16, VAR_0,
    VAR_21, &VAR_10,
    &VAR_21->dentry))
  goto enomem3;




 VAR_15 = VAR_21;
 return 0;

enomem3:
 FUNC_6 (VAR_21);
enomem2:
 FUNC_2 (VAR_20);
enomem1:
 FUNC_5 (VAR_19);
enomem0:
 return -VAR_2;
}
