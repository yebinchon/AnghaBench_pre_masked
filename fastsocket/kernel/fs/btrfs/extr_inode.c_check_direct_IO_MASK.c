
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iovec {scalar_t__ iov_base; size_t iov_len; } ;
struct btrfs_root {int sectorsize; } ;
typedef scalar_t__ ssize_t ;
typedef unsigned int loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_0(struct btrfs_root *VAR_2, int VAR_3, struct kiocb *VAR_4,
   const struct iovec *VAR_5, loff_t VAR_6,
   unsigned long VAR_7)
{
 int VAR_8;
 int VAR_9;
 size_t VAR_10;
 unsigned long VAR_11;
 unsigned VAR_12 = VAR_2->sectorsize - 1;
 ssize_t VAR_13 = -VAR_0;
 loff_t VAR_14 = VAR_6;

 if (VAR_6 & VAR_12)
  goto out;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_11 = (unsigned long)VAR_5[VAR_8].iov_base;
  VAR_10 = VAR_5[VAR_8].iov_len;
  VAR_14 += VAR_10;
  if ((VAR_11 & VAR_12) || (VAR_10 & VAR_12))
   goto out;


  if (VAR_3 & VAR_1)
   continue;






  for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_7; VAR_9++) {
   if (VAR_5[VAR_8].iov_base == VAR_5[VAR_9].iov_base)
    goto out;
  }
 }
 VAR_13 = 0;
out:
 return VAR_13;
}
