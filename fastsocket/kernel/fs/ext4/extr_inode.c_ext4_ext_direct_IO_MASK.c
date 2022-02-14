
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {int * private; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {scalar_t__ i_size; TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int * cur_aio_dio; } ;
struct TYPE_5__ {int s_bdev; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,struct kiocb*,struct inode*,int ,struct iovec const*,scalar_t__,unsigned long,int ,int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int,struct kiocb*,struct iovec const*,scalar_t__,unsigned long) ;
 int * FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*,int ) ;
 size_t FUNC_8 (struct iovec const*,unsigned long) ;
 int FUNC_9 (struct kiocb*) ;

__attribute__((used)) static ssize_t FUNC_10(int VAR_6, struct kiocb *VAR_7,
         const struct iovec *VAR_8, loff_t VAR_9,
         unsigned long VAR_10)
{
 struct file *VAR_11 = VAR_7->ki_filp;
 struct inode *VAR_12 = VAR_11->f_mapping->host;
 ssize_t VAR_13;
 size_t VAR_14 = FUNC_8(VAR_8, VAR_10);

 loff_t VAR_15 = VAR_9 + VAR_14;
 if (VAR_6 == VAR_3 && VAR_15 <= VAR_12->i_size) {
  VAR_7->private = ((void*)0);
  FUNC_0(VAR_12)->cur_aio_dio = ((void*)0);
  if (!FUNC_9(VAR_7)) {
   VAR_7->private = FUNC_6(VAR_12);
   if (!VAR_7->private)
    return -VAR_1;







   FUNC_0(VAR_12)->cur_aio_dio = VAR_7->private;
  }

  VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_12,
      VAR_12->i_sb->s_bdev, VAR_8,
      VAR_9, VAR_10,
      VAR_5,
      VAR_4);
  if (VAR_7->private)
   FUNC_0(VAR_12)->cur_aio_dio = ((void*)0);
  if (VAR_13 != -VAR_0 && VAR_13 <= 0 && VAR_7->private) {
   FUNC_4(VAR_7->private);
   VAR_7->private = ((void*)0);
  } else if (VAR_13 > 0 && FUNC_7(VAR_12,
      VAR_2)) {
   int VAR_16;




   VAR_16 = FUNC_3(VAR_12,
            VAR_9, VAR_13);
   if (VAR_16 < 0)
    VAR_13 = VAR_16;
   FUNC_2(VAR_12, VAR_2);
  }
  return VAR_13;
 }


 return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
