
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_left; int ki_retry; TYPE_1__* ki_filp; } ;
struct iovec {int dummy; } ;
struct ep_data {int desc; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct ep_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kiocb*,char*,int ,struct ep_data*,struct iovec const*,unsigned long) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct kiocb *VAR_4, const struct iovec *VAR_5,
  unsigned long VAR_6, loff_t VAR_7)
{
 struct ep_data *VAR_8 = VAR_4->ki_filp->private_data;
 char *VAR_9;

 if (FUNC_2(FUNC_3(&VAR_8->desc)))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4->ki_left, VAR_2);
 if (FUNC_2(!VAR_9))
  return -VAR_1;

 VAR_4->ki_retry = VAR_3;
 return FUNC_0(VAR_4, VAR_9, VAR_4->ki_left, VAR_8, VAR_5, VAR_6);
}
