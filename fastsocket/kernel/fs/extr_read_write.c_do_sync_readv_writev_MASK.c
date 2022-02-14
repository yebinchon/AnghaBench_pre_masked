
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {size_t ki_left; size_t ki_nbytes; int ki_pos; } ;
struct iovec {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int (* iov_fn_t ) (struct kiocb*,struct iovec const*,unsigned long,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kiocb*,struct file*) ;
 int FUNC_1 (struct kiocb*) ;
 int FUNC_2 (struct kiocb*) ;

ssize_t FUNC_3(struct file *VAR_2, const struct iovec *VAR_3,
  unsigned long VAR_4, size_t VAR_5, loff_t *VAR_6, iov_fn_t VAR_7)
{
 struct kiocb VAR_8;
 ssize_t VAR_9;

 FUNC_0(&VAR_8, VAR_2);
 VAR_8.ki_pos = *VAR_6;
 VAR_8.ki_left = VAR_5;
 VAR_8.ki_nbytes = VAR_5;

 for (;;) {
  VAR_9 = VAR_7(&VAR_8, VAR_3, VAR_4, VAR_8.ki_pos);
  if (VAR_9 != -VAR_1)
   break;
  FUNC_1(&VAR_8);
 }

 if (VAR_9 == -VAR_0)
  VAR_9 = FUNC_2(&VAR_8);
 *VAR_6 = VAR_8.ki_pos;
 return VAR_9;
}
