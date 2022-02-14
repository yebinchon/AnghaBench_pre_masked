
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_context {unsigned int flags; } ;
struct inode {int i_mode; int i_sb; int * i_fop; int * i_op; int i_gid; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {struct spu_context* i_ctx; int i_gang; } ;
struct TYPE_3__ {scalar_t__ debug; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct spu_context* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct spu_context*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct spu_context*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct dentry*,int ,int,struct spu_context*) ;
 TYPE_1__* FUNC_9 (int ) ;
 struct inode* FUNC_10 (int ,int) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_9, struct dentry *VAR_10, unsigned int VAR_11,
  int VAR_12)
{
 int VAR_13;
 struct inode *VAR_14;
 struct spu_context *VAR_15;

 VAR_13 = -VAR_0;
 VAR_14 = FUNC_10(VAR_9->i_sb, VAR_12 | VAR_2);
 if (!VAR_14)
  goto out;

 if (VAR_9->i_mode & VAR_3) {
  VAR_14->i_gid = VAR_9->i_gid;
  VAR_14->i_mode &= VAR_3;
 }
 VAR_15 = FUNC_1(FUNC_0(VAR_9)->i_gang);
 FUNC_0(VAR_14)->i_ctx = VAR_15;
 if (!VAR_15)
  goto out_iput;

 VAR_15->flags = VAR_11;
 VAR_14->i_op = &VAR_4;
 VAR_14->i_fop = &VAR_5;
 if (VAR_11 & VAR_1)
  VAR_13 = FUNC_8(VAR_10, VAR_8,
      VAR_12, VAR_15);
 else
  VAR_13 = FUNC_8(VAR_10, VAR_6, VAR_12, VAR_15);

 if (VAR_13)
  goto out_free_ctx;

 if (FUNC_9(VAR_9->i_sb)->debug)
  VAR_13 = FUNC_8(VAR_10, VAR_7,
    VAR_12, VAR_15);

 if (VAR_13)
  goto out_free_ctx;

 FUNC_2(VAR_10, VAR_14);
 FUNC_3(VAR_10);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10->d_inode);
 goto out;

out_free_ctx:
 FUNC_7(VAR_15);
 FUNC_6(VAR_15);
out_iput:
 FUNC_5(VAR_14);
out:
 return VAR_13;
}
