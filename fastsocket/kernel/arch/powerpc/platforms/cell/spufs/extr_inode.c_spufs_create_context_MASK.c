
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct spu_gang {int aff_mutex; } ;
struct spu_context {int dummy; } ;
struct inode {int i_mutex; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int i_ctx; struct spu_gang* i_gang; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int VAR_9 ;
 int FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct spu_context*) ;
 int FUNC_11 (int ) ;
 struct spu_context* FUNC_12 (int,struct spu_gang*,struct file*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct inode*,struct dentry*,int,int) ;
 int FUNC_15 (struct inode*,struct dentry*) ;
 int FUNC_16 (int,int ,struct spu_context*) ;

__attribute__((used)) static int
FUNC_17(struct inode *VAR_10, struct dentry *VAR_11,
   struct vfsmount *VAR_12, int VAR_13, int VAR_14,
   struct file *VAR_15)
{
 int VAR_16;
 int VAR_17;
 struct spu_gang *VAR_18;
 struct spu_context *VAR_19;

 VAR_16 = -VAR_3;
 if ((VAR_13 & VAR_7) &&
     !FUNC_4(VAR_0))
  goto out_unlock;

 VAR_16 = -VAR_1;
 if ((VAR_13 & (VAR_7 | VAR_6))
     == VAR_6)
  goto out_unlock;

 VAR_16 = -VAR_2;
 if ((VAR_13 & VAR_6) && !VAR_9)
  goto out_unlock;

 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_17 = VAR_13 & (VAR_4 | VAR_5);
 if (VAR_17) {
  VAR_18 = FUNC_2(VAR_10)->i_gang;
  VAR_16 = -VAR_1;
  if (!VAR_18)
   goto out_unlock;
  FUNC_8(&VAR_18->aff_mutex);
  VAR_19 = FUNC_12(VAR_13, VAR_18, VAR_15);
  if (FUNC_0(VAR_19)) {
   VAR_16 = FUNC_1(VAR_19);
   goto out_aff_unlock;
  }
 }

 VAR_16 = FUNC_14(VAR_10, VAR_11, VAR_13, VAR_14 & VAR_8);
 if (VAR_16)
  goto out_aff_unlock;

 if (VAR_17) {
  FUNC_16(VAR_13, FUNC_2(VAR_11->d_inode)->i_ctx,
        VAR_19);
  if (VAR_19)
   FUNC_10(VAR_19);
 }





 VAR_16 = FUNC_13(FUNC_5(VAR_11), FUNC_7(VAR_12));
 if (VAR_16 < 0) {
  FUNC_3(FUNC_15(VAR_10, VAR_11));
  if (VAR_17)
   FUNC_9(&VAR_18->aff_mutex);
  FUNC_9(&VAR_10->i_mutex);
  FUNC_11(FUNC_2(VAR_11->d_inode)->i_ctx);
  goto out;
 }

out_aff_unlock:
 if (VAR_17)
  FUNC_9(&VAR_18->aff_mutex);
out_unlock:
 FUNC_9(&VAR_10->i_mutex);
out:
 FUNC_6(VAR_11);
 return VAR_16;
}
