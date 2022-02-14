
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_queue {int dummy; } ;
struct qib_filedata {struct qib_user_sdma_queue* pq; } ;
struct qib_ctxtdata {int dummy; } ;
struct kiocb {TYPE_1__* ki_filp; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct qib_filedata* private_data; } ;


 int VAR_0 ;
 struct qib_ctxtdata* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct qib_ctxtdata*,struct qib_user_sdma_queue*,struct iovec const*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct kiocb *VAR_1, const struct iovec *VAR_2,
        unsigned long VAR_3, loff_t VAR_4)
{
 struct qib_filedata *VAR_5 = VAR_1->ki_filp->private_data;
 struct qib_ctxtdata *VAR_6 = FUNC_0(VAR_1->ki_filp);
 struct qib_user_sdma_queue *VAR_7 = VAR_5->pq;

 if (!VAR_3 || !VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_7, VAR_2, VAR_3);
}
