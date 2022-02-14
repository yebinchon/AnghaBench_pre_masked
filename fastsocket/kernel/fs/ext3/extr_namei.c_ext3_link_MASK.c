
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_sb; int i_count; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_8__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (TYPE_1__*,struct dentry*,struct inode*) ;
 TYPE_1__* FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,struct inode*) ;
 scalar_t__ FUNC_11 (int ,int*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14 (struct dentry * VAR_6,
  struct inode * VAR_7, struct dentry *VAR_8)
{
 handle_t *VAR_9;
 struct inode *VAR_10 = VAR_6->d_inode;
 int VAR_11, VAR_12 = 0;

 if (VAR_10->i_nlink >= VAR_5)
  return -VAR_1;




 if (VAR_10->i_nlink == 0)
  return -VAR_2;

retry:
 VAR_9 = FUNC_8(VAR_7, FUNC_0(VAR_7->i_sb) +
     VAR_4);
 if (FUNC_2(VAR_9))
  return FUNC_3(VAR_9);

 if (FUNC_1(VAR_7))
  VAR_9->h_sync = 1;

 VAR_10->i_ctime = VAR_0;
 FUNC_12(VAR_10);
 FUNC_4(&VAR_10->i_count);

 VAR_11 = FUNC_7(VAR_9, VAR_8, VAR_10);
 if (!VAR_11) {
  FUNC_10(VAR_9, VAR_10);
  FUNC_5(VAR_8, VAR_10);
 } else {
  FUNC_6(VAR_10);
  FUNC_13(VAR_10);
 }
 FUNC_9(VAR_9);
 if (VAR_11 == -VAR_3 && FUNC_11(VAR_7->i_sb, &VAR_12))
  goto retry;
 return VAR_11;
}
