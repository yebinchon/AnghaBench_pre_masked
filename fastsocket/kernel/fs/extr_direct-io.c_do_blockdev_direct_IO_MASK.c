
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
typedef int get_block_t ;
typedef int dio_submit_t ;
typedef int dio_iodone_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct kiocb*,struct inode*,struct block_device*,struct iovec const*,scalar_t__,unsigned long,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct iovec const*,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inode*,scalar_t__) ;

__attribute__((used)) static inline ssize_t
FUNC_5(int VAR_2, struct kiocb *VAR_3, struct inode *VAR_4,
 struct block_device *VAR_5, const struct iovec *VAR_6, loff_t VAR_7,
 unsigned long VAR_8, get_block_t VAR_9, dio_iodone_t VAR_10,
 dio_submit_t VAR_11, int VAR_12)
{
 ssize_t VAR_13;

 VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_12 & VAR_0) {
  if (FUNC_3((VAR_2 & VAR_1) && VAR_13 < 0)) {
   loff_t VAR_14 = FUNC_1(VAR_4);
   loff_t VAR_15 = VAR_7 + FUNC_2(VAR_6, VAR_8);

   if (VAR_15 > VAR_14)
    FUNC_4(VAR_4, VAR_14);
  }
 }

 return VAR_13;
}
