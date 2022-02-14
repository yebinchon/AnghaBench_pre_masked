
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int * i_op; int i_mode; } ;
struct dentry {int d_name; } ;
typedef struct inode handle_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct inode*,scalar_t__) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*,struct inode*,int,int *,int ) ;
 scalar_t__ FUNC_10 (int ,int*) ;
 int VAR_3 ;
 int FUNC_11 (struct inode*,int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, struct dentry *VAR_5,
        int VAR_6, dev_t VAR_7)
{
 handle_t *VAR_8;
 struct inode *VAR_9;
 int VAR_10, VAR_11 = 0;

 if (!FUNC_12(VAR_7))
  return -VAR_0;

retry:
 VAR_8 = FUNC_7(VAR_4, FUNC_0(VAR_4->i_sb) +
     VAR_2 + 3 +
     FUNC_1(VAR_4->i_sb));
 if (FUNC_3(VAR_8))
  return FUNC_4(VAR_8);

 if (FUNC_2(VAR_4))
  FUNC_6(VAR_8);

 VAR_9 = FUNC_9(VAR_8, VAR_4, VAR_6, &VAR_5->d_name, 0);
 VAR_10 = FUNC_4(VAR_9);
 if (!FUNC_3(VAR_9)) {
  FUNC_11(VAR_9, VAR_9->i_mode, VAR_7);



  VAR_10 = FUNC_5(VAR_8, VAR_5, VAR_9);
 }
 FUNC_8(VAR_8);
 if (VAR_10 == -VAR_1 && FUNC_10(VAR_4->i_sb, &VAR_11))
  goto retry;
 return VAR_10;
}
