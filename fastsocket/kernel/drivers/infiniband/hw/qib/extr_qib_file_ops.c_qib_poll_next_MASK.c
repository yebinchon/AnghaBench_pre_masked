
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int uctxt_lock; int (* f_rcvctrl ) (int ,int ,int ) ;scalar_t__ (* f_hdrqempty ) (struct qib_ctxtdata*) ;} ;
struct qib_ctxtdata {int ctxt; int ppd; int flag; int wait; struct qib_devdata* dd; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct qib_ctxtdata*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct qib_ctxtdata *VAR_4,
      struct file *VAR_5,
      struct poll_table_struct *VAR_6)
{
 struct qib_devdata *VAR_7 = VAR_4->dd;
 unsigned VAR_8;

 FUNC_0(VAR_5, &VAR_4->wait, VAR_6);

 FUNC_2(&VAR_7->uctxt_lock);
 if (VAR_7->f_hdrqempty(VAR_4)) {
  FUNC_1(VAR_2, &VAR_4->flag);
  VAR_7->f_rcvctrl(VAR_4->ppd, VAR_3, VAR_4->ctxt);
  VAR_8 = 0;
 } else
  VAR_8 = VAR_0 | VAR_1;
 FUNC_3(&VAR_7->uctxt_lock);

 return VAR_8;
}
