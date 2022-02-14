
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macvtap_queue {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct file {int f_flags; struct macvtap_queue* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iovec const*,unsigned long) ;
 int FUNC_1 (struct macvtap_queue*,int *,struct iovec const*,int ,unsigned long,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct kiocb *VAR_2, const struct iovec *VAR_3,
     unsigned long VAR_4, loff_t VAR_5)
{
 struct file *VAR_6 = VAR_2->ki_filp;
 ssize_t VAR_7 = -VAR_0;
 struct macvtap_queue *VAR_8 = VAR_6->private_data;

 VAR_7 = FUNC_1(VAR_8, ((void*)0), VAR_3, FUNC_0(VAR_3, VAR_4), VAR_4,
      VAR_6->f_flags & VAR_1);
 return VAR_7;
}
