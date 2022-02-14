
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kioctx {int ctx_lock; } ;
struct TYPE_4__ {int * prev; int next; } ;
struct TYPE_3__ {int task_list; } ;
struct kiocb {TYPE_2__ ki_run_list; TYPE_1__ ki_wait; int (* ki_retry ) (struct kiocb*) ;struct kioctx* ki_ctx; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct kiocb*) ;
 int FUNC_3 (struct kiocb*,int ,int ) ;
 int FUNC_4 (struct kioctx*) ;
 int FUNC_5 (struct kiocb*) ;
 scalar_t__ FUNC_6 (struct kiocb*) ;
 scalar_t__ FUNC_7 (struct kiocb*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static ssize_t FUNC_12(struct kiocb *VAR_3)
{
 struct kioctx *VAR_4 = VAR_3->ki_ctx;
 ssize_t (*VAR_5)(struct kiocb *);
 ssize_t VAR_6;

 if (!(VAR_5 = VAR_3->ki_retry)) {
  FUNC_9("aio_run_iocb: iocb->ki_retry = NULL\n");
  return 0;
 }
 FUNC_5(VAR_3);







 VAR_3->ki_run_list.next = *(VAR_3->ki_run_list.prev = ((void*)0));
 FUNC_11(&VAR_4->ctx_lock);


 if (FUNC_6(VAR_3)) {
  VAR_6 = -VAR_0;
  FUNC_3(VAR_3, VAR_6, 0);

  goto out;
 }





 VAR_6 = VAR_5(VAR_3);

 if (VAR_6 != -VAR_2 && VAR_6 != -VAR_1) {
  FUNC_0(!FUNC_8(&VAR_3->ki_wait.task_list));
  FUNC_3(VAR_3, VAR_6, 0);
 }
out:
 FUNC_10(&VAR_4->ctx_lock);

 if (-VAR_2 == VAR_6) {
  FUNC_1(&VAR_3->ki_run_list);


  if (FUNC_7(VAR_3)) {
   FUNC_2(VAR_3);







   FUNC_4(VAR_4);
  }
 }
 return VAR_6;
}
