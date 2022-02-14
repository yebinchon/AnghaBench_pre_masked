
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int h_sync; int i_sb; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
typedef struct inode handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct dentry*,struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct inode*,struct inode*,int) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (int ,int*) ;

__attribute__((used)) static int FUNC_11 (struct inode * VAR_4, struct dentry * VAR_5, int VAR_6,
  struct nameidata *VAR_7)
{
 handle_t *VAR_8;
 struct inode * VAR_9;
 int VAR_10, VAR_11 = 0;

retry:
 VAR_8 = FUNC_6(VAR_4, FUNC_0(VAR_4->i_sb) +
     VAR_1 + 3 +
     2*FUNC_1(VAR_4->i_sb));
 if (FUNC_3(VAR_8))
  return FUNC_4(VAR_8);

 if (FUNC_2(VAR_4))
  VAR_8->h_sync = 1;

 VAR_9 = FUNC_8 (VAR_8, VAR_4, VAR_6);
 VAR_10 = FUNC_4(VAR_9);
 if (!FUNC_3(VAR_9)) {
  VAR_9->i_op = &VAR_2;
  VAR_9->i_fop = &VAR_3;
  FUNC_9(VAR_9);
  VAR_10 = FUNC_5(VAR_8, VAR_5, VAR_9);
 }
 FUNC_7(VAR_8);
 if (VAR_10 == -VAR_0 && FUNC_10(VAR_4->i_sb, &VAR_11))
  goto retry;
 return VAR_10;
}
