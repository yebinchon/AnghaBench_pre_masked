
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; int ki_filp; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int ,struct iovec const*,unsigned long,int *) ;

ssize_t FUNC_1(struct kiocb *VAR_0, const struct iovec *VAR_1,
          unsigned long VAR_2, loff_t VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_0->ki_filp, VAR_1, VAR_2, &VAR_3);
 if (VAR_4 > 0)
  VAR_0->ki_pos = VAR_3;

 return VAR_4;
}
