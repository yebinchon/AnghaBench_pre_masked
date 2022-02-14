
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_left; TYPE_1__* ki_filp; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
struct ep_data {int desc; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct ep_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (struct kiocb*,char*,size_t,struct ep_data*,int *,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t
FUNC_6(struct kiocb *VAR_4, const struct iovec *VAR_5,
  unsigned long VAR_6, loff_t VAR_7)
{
 struct ep_data *VAR_8 = VAR_4->ki_filp->private_data;
 char *VAR_9;
 size_t VAR_10 = 0;
 int VAR_11 = 0;

 if (FUNC_4(!FUNC_5(&VAR_8->desc)))
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_4->ki_left, VAR_3);
 if (FUNC_4(!VAR_9))
  return -VAR_2;

 for (VAR_11=0; VAR_11 < VAR_6; VAR_11++) {
  if (FUNC_4(FUNC_0(&VAR_9[VAR_10], VAR_5[VAR_11].iov_base,
    VAR_5[VAR_11].iov_len) != 0)) {
   FUNC_2(VAR_9);
   return -VAR_0;
  }
  VAR_10 += VAR_5[VAR_11].iov_len;
 }
 return FUNC_1(VAR_4, VAR_9, VAR_10, VAR_8, ((void*)0), 0);
}
