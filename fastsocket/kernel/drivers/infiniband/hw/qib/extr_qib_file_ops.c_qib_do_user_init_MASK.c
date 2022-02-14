
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_info {int dummy; } ;
struct qib_devdata {unsigned int first_user_ctxt; unsigned int ctxts_extrabuf; int pbufsctxt; unsigned int piobcnt2k; unsigned int unit; int palign; int (* f_rcvctrl ) (int ,int,unsigned int) ;int pport; int (* f_sendctrl ) (int ,int ) ;scalar_t__ pio2k_bufbase; } ;
struct qib_ctxtdata {unsigned int ctxt; int piocnt; unsigned int pio_base; int wait; int flag; scalar_t__ subctxt_cnt; int ppd; scalar_t__ rcvhdrtail_kvaddr; scalar_t__ urgent_poll; scalar_t__ urgent; scalar_t__ tidcursor; scalar_t__ piobufs; struct qib_devdata* dd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 struct qib_ctxtdata* FUNC_1 (struct file*) ;
 int FUNC_2 (struct qib_devdata*,int,unsigned int,int ,struct qib_ctxtdata*) ;
 int FUNC_3 (struct qib_ctxtdata*) ;
 int FUNC_4 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int FUNC_5 (struct qib_devdata*,char*,unsigned int,unsigned int) ;
 int FUNC_6 (struct qib_ctxtdata*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,unsigned int) ;
 scalar_t__ FUNC_9 (struct file*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_7,
       const struct qib_user_info *VAR_8)
{
 int VAR_9;
 struct qib_ctxtdata *VAR_10 = FUNC_1(VAR_7);
 struct qib_devdata *VAR_11;
 unsigned VAR_12;


 if (FUNC_9(VAR_7)) {
  VAR_9 = FUNC_11(VAR_10->wait,
   !FUNC_10(VAR_1, &VAR_10->flag));
  goto bail;
 }

 VAR_11 = VAR_10->dd;


 VAR_12 = VAR_10->ctxt - VAR_11->first_user_ctxt;
 if (VAR_12 < VAR_11->ctxts_extrabuf) {
  VAR_10->piocnt = VAR_11->pbufsctxt + 1;
  VAR_10->pio_base = VAR_10->piocnt * VAR_12;
 } else {
  VAR_10->piocnt = VAR_11->pbufsctxt;
  VAR_10->pio_base = VAR_10->piocnt * VAR_12 +
   VAR_11->ctxts_extrabuf;
 }







 if ((VAR_10->pio_base + VAR_10->piocnt) > VAR_11->piobcnt2k) {
  if (VAR_10->pio_base >= VAR_11->piobcnt2k) {
   FUNC_5(VAR_11,
        "%u:ctxt%u: no 2KB buffers available\n",
        VAR_11->unit, VAR_10->ctxt);
   VAR_9 = -VAR_0;
   goto bail;
  }
  VAR_10->piocnt = VAR_11->piobcnt2k - VAR_10->pio_base;
  FUNC_5(VAR_11, "Ctxt%u: would use 4KB bufs, using %u\n",
       VAR_10->ctxt, VAR_10->piocnt);
 }

 VAR_10->piobufs = VAR_11->pio2k_bufbase + VAR_10->pio_base * VAR_11->palign;
 FUNC_2(VAR_11, VAR_10->pio_base, VAR_10->piocnt,
          VAR_6, VAR_10);
 VAR_11->f_sendctrl(VAR_11->pport, VAR_4);







 VAR_9 = FUNC_4(VAR_11, VAR_10);
 if (!VAR_9)
  VAR_9 = FUNC_6(VAR_10);
 if (VAR_9)
  goto bail_pio;

 VAR_10->tidcursor = 0;


 VAR_10->urgent = 0;
 VAR_10->urgent_poll = 0;
 if (VAR_10->rcvhdrtail_kvaddr)
  FUNC_3(VAR_10);

 VAR_11->f_rcvctrl(VAR_10->ppd, VAR_2 | VAR_3,
        VAR_10->ctxt);


 if (VAR_10->subctxt_cnt) {
  FUNC_0(VAR_1, &VAR_10->flag);
  FUNC_12(&VAR_10->wait);
 }
 return 0;

bail_pio:
 FUNC_2(VAR_11, VAR_10->pio_base, VAR_10->piocnt,
          VAR_5, VAR_10);
bail:
 return VAR_9;
}
