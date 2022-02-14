
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_filedata {int rec_cpu_num; int subctxt; scalar_t__ pq; struct qib_ctxtdata* rcd; } ;
struct qib_devdata {int freectxts; scalar_t__ pageshadow; int (* f_clear_tids ) (struct qib_devdata*,struct qib_ctxtdata*) ;int (* f_rcvctrl ) (int ,int,unsigned int) ;scalar_t__ kregbase; int uctxt_lock; int ** rcd; } ;
struct qib_ctxtdata {int active_slaves; unsigned int ctxt; int piocnt; int pio_base; int ppd; scalar_t__ flag; scalar_t__ pionowait; scalar_t__ rcvnowait; scalar_t__ piowait_to; scalar_t__ rcvwait_to; scalar_t__ pid; scalar_t__* subpid; scalar_t__ cnt; struct qib_devdata* dd; } ;
struct inode {int dummy; } ;
struct file {struct qib_filedata* private_data; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {int sps_ctxts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct qib_filedata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qib_devdata*,int ,int ,int ,int *) ;
 int FUNC_5 (struct qib_ctxtdata*,struct qib_devdata*) ;
 int VAR_3 ;
 int FUNC_6 (struct qib_devdata*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int,unsigned int) ;
 int FUNC_14 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int FUNC_15 (struct qib_ctxtdata*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_6, struct file *VAR_7)
{
 int VAR_8 = 0;
 struct qib_filedata *VAR_9;
 struct qib_ctxtdata *VAR_10;
 struct qib_devdata *VAR_11;
 unsigned long VAR_12;
 unsigned VAR_13;
 pid_t VAR_14;

 FUNC_2(&VAR_4);

 VAR_9 = VAR_7->private_data;
 VAR_7->private_data = ((void*)0);
 VAR_10 = VAR_9->rcd;
 if (!VAR_10) {
  FUNC_3(&VAR_4);
  goto bail;
 }

 VAR_11 = VAR_10->dd;


 FUNC_7();


 if (VAR_9->pq) {
  FUNC_10(VAR_10->ppd, VAR_9->pq);
  FUNC_9(VAR_9->pq);
 }

 if (VAR_9->rec_cpu_num != -1)
  FUNC_0(VAR_9->rec_cpu_num, VAR_3);

 if (--VAR_10->cnt) {





  VAR_10->active_slaves &= ~(1 << VAR_9->subctxt);
  VAR_10->subpid[VAR_9->subctxt] = 0;
  FUNC_3(&VAR_4);
  goto bail;
 }


 FUNC_11(&VAR_11->uctxt_lock, VAR_12);
 VAR_13 = VAR_10->ctxt;
 VAR_11->rcd[VAR_13] = ((void*)0);
 VAR_14 = VAR_10->pid;
 VAR_10->pid = 0;
 FUNC_12(&VAR_11->uctxt_lock, VAR_12);

 if (VAR_10->rcvwait_to || VAR_10->piowait_to ||
     VAR_10->rcvnowait || VAR_10->pionowait) {
  VAR_10->rcvwait_to = 0;
  VAR_10->piowait_to = 0;
  VAR_10->rcvnowait = 0;
  VAR_10->pionowait = 0;
 }
 if (VAR_10->flag)
  VAR_10->flag = 0;

 if (VAR_11->kregbase) {

  VAR_11->f_rcvctrl(VAR_10->ppd, VAR_0 |
      VAR_1, VAR_13);


  FUNC_5(VAR_10, VAR_11);
  FUNC_6(VAR_11, VAR_10->pio_base, VAR_10->piocnt);
  FUNC_4(VAR_11, VAR_10->pio_base,
           VAR_10->piocnt, VAR_2, ((void*)0));

  VAR_11->f_clear_tids(VAR_11, VAR_10);

  if (VAR_11->pageshadow)
   FUNC_15(VAR_10);
  VAR_5.sps_ctxts--;
  VAR_11->freectxts++;
 }

 FUNC_3(&VAR_4);
 FUNC_8(VAR_11, VAR_10);

bail:
 FUNC_1(VAR_9);
 return VAR_8;
}
