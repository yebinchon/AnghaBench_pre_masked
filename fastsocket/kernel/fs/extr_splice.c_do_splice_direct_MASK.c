
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file* file; } ;
struct splice_desc {size_t len; size_t total_len; unsigned int flags; int pos; TYPE_1__ u; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 long FUNC_0 (struct file*,struct splice_desc*,int ) ;

long FUNC_1(struct file *VAR_1, loff_t *VAR_2, struct file *VAR_3,
        size_t VAR_4, unsigned int VAR_5)
{
 struct splice_desc VAR_6 = {
  .len = VAR_4,
  .total_len = VAR_4,
  .flags = VAR_5,
  .pos = *VAR_2,
  .u.file = VAR_3,
 };
 long VAR_7;

 VAR_7 = FUNC_0(VAR_1, &VAR_6, VAR_0);
 if (VAR_7 > 0)
  *VAR_2 = VAR_6.pos;

 return VAR_7;
}
