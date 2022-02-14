
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 unsigned long FUNC_2 (struct iovec*,unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_1, const struct iovec *VAR_2,
    unsigned long VAR_3, loff_t VAR_4)
{
 struct file *VAR_5 = VAR_1->ki_filp;
 struct inode *VAR_6 = VAR_5->f_mapping->host;
 loff_t VAR_7 = FUNC_1(VAR_6);

 if (VAR_4 >= VAR_7)
  return 0;

 VAR_7 -= VAR_4;
 if (VAR_7 < VAR_0)
  VAR_3 = FUNC_2((struct iovec *)VAR_2, VAR_3, VAR_7);
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
