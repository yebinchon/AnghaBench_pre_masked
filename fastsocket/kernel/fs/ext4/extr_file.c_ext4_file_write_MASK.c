
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {TYPE_3__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_sb_info {scalar_t__ s_bitmap_maxbytes; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_8__ {int i_aio_mutex; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_7__ {int f_flags; TYPE_2__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,struct iovec const*,unsigned long,scalar_t__) ;
 int FUNC_5 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 size_t FUNC_6 (struct iovec const*,unsigned long) ;
 unsigned long FUNC_7 (struct iovec*,unsigned long,scalar_t__) ;
 int FUNC_8 (struct kiocb*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct kiocb *VAR_3, const struct iovec *VAR_4,
  unsigned long VAR_5, loff_t VAR_6)
{
 struct inode *VAR_7 = VAR_3->ki_filp->f_path.dentry->d_inode;
 int VAR_8 = 0;
 ssize_t VAR_9;






 if (!(FUNC_3(VAR_7, VAR_1))) {
  struct ext4_sb_info *VAR_10 = FUNC_1(VAR_7->i_sb);
  size_t VAR_11 = FUNC_6(VAR_4, VAR_5);

  if ((VAR_6 > VAR_10->s_bitmap_maxbytes ||
      (VAR_6 == VAR_10->s_bitmap_maxbytes && VAR_11 > 0)))
   return -VAR_0;

  if (VAR_6 + VAR_11 > VAR_10->s_bitmap_maxbytes) {
   VAR_5 = FUNC_7((struct iovec *)VAR_4, VAR_5,
           VAR_10->s_bitmap_maxbytes - VAR_6);
  }
 } else if (FUNC_11((VAR_3->ki_filp->f_flags & VAR_2) &&
              !FUNC_8(VAR_3)))
  VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5, VAR_6);


 if (VAR_8) {
  FUNC_9(&FUNC_0(VAR_7)->i_aio_mutex);
  FUNC_2(VAR_7);
  }

 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_8)
  FUNC_10(&FUNC_0(VAR_7)->i_aio_mutex);

 return VAR_9;
}
