
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_size; TYPE_1__* i_sb; int * i_op; } ;
struct dentry {int d_name; } ;
typedef struct inode handle_t ;
struct TYPE_6__ {int i_disksize; int i_data; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct inode*,char const*,int,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct dentry*,struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (struct inode*,scalar_t__) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,struct inode*) ;
 struct inode* FUNC_14 (struct inode*,struct inode*,int,int *,int ) ;
 int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,int*) ;
 int VAR_7 ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (char*,char const*,int) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (struct inode*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_8,
   struct dentry *VAR_9, const char *VAR_10)
{
 handle_t *VAR_11;
 struct inode *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 VAR_13 = FUNC_19(VAR_10)+1;
 if (VAR_13 > VAR_8->i_sb->s_blocksize)
  return -VAR_0;

retry:
 VAR_11 = FUNC_11(VAR_8, FUNC_0(VAR_8->i_sb) +
     VAR_2 + 5 +
     FUNC_2(VAR_8->i_sb));
 if (FUNC_4(VAR_11))
  return FUNC_5(VAR_11);

 if (FUNC_3(VAR_8))
  FUNC_10(VAR_11);

 VAR_12 = FUNC_14(VAR_11, VAR_8, VAR_4|VAR_5,
          &VAR_9->d_name, 0);
 VAR_14 = FUNC_5(VAR_12);
 if (FUNC_4(VAR_12))
  goto out_stop;

 if (VAR_13 > sizeof(FUNC_1(VAR_12)->i_data)) {
  VAR_12->i_op = &VAR_7;
  FUNC_15(VAR_12);





  VAR_14 = FUNC_6(VAR_12, VAR_10, VAR_13, 1);
  if (VAR_14) {
   FUNC_7(VAR_12);
   FUNC_20(VAR_12);
   FUNC_13(VAR_11, VAR_12);
   FUNC_17(VAR_12);
   goto out_stop;
  }
 } else {

  FUNC_9(VAR_12, VAR_3);
  VAR_12->i_op = &VAR_6;
  FUNC_18((char *)&FUNC_1(VAR_12)->i_data, VAR_10, VAR_13);
  VAR_12->i_size = VAR_13-1;
 }
 FUNC_1(VAR_12)->i_disksize = VAR_12->i_size;
 VAR_14 = FUNC_8(VAR_11, VAR_9, VAR_12);
out_stop:
 FUNC_12(VAR_11);
 if (VAR_14 == -VAR_1 && FUNC_16(VAR_8->i_sb, &VAR_15))
  goto retry;
 return VAR_14;
}
