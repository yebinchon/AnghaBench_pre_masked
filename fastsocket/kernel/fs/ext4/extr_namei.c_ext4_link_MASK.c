
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_sb; int i_count; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct dentry*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct inode*) ;
 int * FUNC_11 (struct inode*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*) ;
 scalar_t__ FUNC_14 (int ,int*) ;
 int FUNC_15 (struct inode*) ;

__attribute__((used)) static int FUNC_16(struct dentry *VAR_5,
       struct inode *VAR_6, struct dentry *VAR_7)
{
 handle_t *VAR_8;
 struct inode *VAR_9 = VAR_5->d_inode;
 int VAR_10, VAR_11 = 0;

 if (VAR_9->i_nlink >= VAR_4)
  return -VAR_0;





 if (VAR_9->i_nlink == 0)
  return -VAR_1;

retry:
 VAR_8 = FUNC_11(VAR_6, FUNC_0(VAR_6->i_sb) +
     VAR_3);
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 if (FUNC_1(VAR_6))
  FUNC_9(VAR_8);

 VAR_9->i_ctime = FUNC_8(VAR_9);
 FUNC_10(VAR_8, VAR_9);
 FUNC_4(&VAR_9->i_count);

 VAR_10 = FUNC_7(VAR_8, VAR_7, VAR_9);
 if (!VAR_10) {
  FUNC_13(VAR_8, VAR_9);
  FUNC_5(VAR_7, VAR_9);
 } else {
  FUNC_6(VAR_9);
  FUNC_15(VAR_9);
 }
 FUNC_12(VAR_8);
 if (VAR_10 == -VAR_2 && FUNC_14(VAR_6->i_sb, &VAR_11))
  goto retry;
 return VAR_10;
}
