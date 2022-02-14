
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int h_sync; int i_size; TYPE_1__* i_sb; int * i_op; } ;
struct dentry {int dummy; } ;
typedef struct inode handle_t ;
struct TYPE_6__ {int i_disksize; int i_data; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct inode*,char const*,int,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct dentry*,struct inode*) ;
 int VAR_5 ;
 struct inode* FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,struct inode*) ;
 struct inode* FUNC_12 (struct inode*,struct inode*,int) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int*) ;
 int VAR_6 ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (struct inode*) ;

__attribute__((used)) static int FUNC_19 (struct inode * VAR_7,
  struct dentry *VAR_8, const char * VAR_9)
{
 handle_t *VAR_10;
 struct inode * VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 VAR_12 = FUNC_17(VAR_9)+1;
 if (VAR_12 > VAR_7->i_sb->s_blocksize)
  return -VAR_0;

retry:
 VAR_10 = FUNC_9(VAR_7, FUNC_0(VAR_7->i_sb) +
     VAR_2 + 5 +
     2*FUNC_2(VAR_7->i_sb));
 if (FUNC_4(VAR_10))
  return FUNC_5(VAR_10);

 if (FUNC_3(VAR_7))
  VAR_10->h_sync = 1;

 VAR_11 = FUNC_12 (VAR_10, VAR_7, VAR_3|VAR_4);
 VAR_13 = FUNC_5(VAR_11);
 if (FUNC_4(VAR_11))
  goto out_stop;

 if (VAR_12 > sizeof (FUNC_1(VAR_11)->i_data)) {
  VAR_11->i_op = &VAR_6;
  FUNC_13(VAR_11);





  VAR_13 = FUNC_6(VAR_11, VAR_9, VAR_12, 1);
  if (VAR_13) {
   FUNC_7(VAR_11);
   FUNC_18(VAR_11);
   FUNC_11(VAR_10, VAR_11);
   FUNC_15 (VAR_11);
   goto out_stop;
  }
 } else {
  VAR_11->i_op = &VAR_5;
  FUNC_16((char*)&FUNC_1(VAR_11)->i_data,VAR_9,VAR_12);
  VAR_11->i_size = VAR_12-1;
 }
 FUNC_1(VAR_11)->i_disksize = VAR_11->i_size;
 VAR_13 = FUNC_8(VAR_10, VAR_8, VAR_11);
out_stop:
 FUNC_10(VAR_10);
 if (VAR_13 == -VAR_1 && FUNC_14(VAR_7->i_sb, &VAR_14))
  goto retry;
 return VAR_13;
}
