
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,int *) ;
 scalar_t__ FUNC_2 (struct file*,int ,scalar_t__) ;

ssize_t FUNC_3(struct kiocb *VAR_1, const struct iovec *VAR_2,
    unsigned long VAR_3, loff_t VAR_4)
{
 struct file *VAR_5 = VAR_1->ki_filp;
 ssize_t VAR_6;

 FUNC_0(VAR_1->ki_pos != VAR_4);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_1->ki_pos);
 if (VAR_6 > 0 || VAR_6 == -VAR_0) {
  ssize_t VAR_7;

  VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_6);
  if (VAR_7 < 0 && VAR_6 > 0)
   VAR_6 = VAR_7;
 }
 return VAR_6;
}
