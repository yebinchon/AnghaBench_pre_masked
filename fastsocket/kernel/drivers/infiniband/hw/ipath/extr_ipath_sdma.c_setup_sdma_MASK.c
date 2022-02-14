
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_sdma_descq_tail; int ipath_sdma_descq_phys; int ipath_sdma_descq_cnt; int ipath_sdma_head_phys; unsigned int ipath_piobcnt2k; unsigned int ipath_piobcnt4k; unsigned int ipath_lastport_piobuf; unsigned int ipath_pioreserved; int ipath_sendctrl; int ipath_sendctrl_lock; int ipath_sdma_status; TYPE_1__* ipath_kregs; int ipath_sdma_abort_task; int ipath_sdma_notify_task; int ipath_sdma_notifylist; int ipath_sdma_activelist; scalar_t__ ipath_sdma_descq_added; scalar_t__ ipath_sdma_descq_removed; scalar_t__ ipath_sdma_descq_head; scalar_t__ ipath_sdma_generation; scalar_t__ ipath_sdma_abort_jiffies; int ipath_sdma_descq; } ;
struct TYPE_2__ {int kr_scratch; int kr_sendctrl; int kr_senddmabufmask2; int kr_senddmabufmask1; int kr_senddmabufmask0; int kr_senddmaheadaddr; int kr_senddmatail; int kr_senddmalengen; int kr_senddmabase; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ipath_devdata*) ;
 int FUNC_4 (struct ipath_devdata*,unsigned int,unsigned int,int ) ;
 int FUNC_5 (struct ipath_devdata*,char*) ;
 int FUNC_6 (struct ipath_devdata*,int ) ;
 int FUNC_7 (struct ipath_devdata*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,int ,unsigned long) ;

int FUNC_11(struct ipath_devdata *VAR_5)
{
 int VAR_6 = 0;
 unsigned VAR_7, VAR_8;
 u64 VAR_9;
 u64 VAR_10[3] = { 0 };
 unsigned long VAR_11;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  goto done;

 if (!VAR_5->ipath_sdma_descq) {
  FUNC_5(VAR_5, "SendDMA memory not allocated\n");
  goto done;
 }






 VAR_5->ipath_sdma_status = VAR_1;
 VAR_5->ipath_sdma_abort_jiffies = 0;
 VAR_5->ipath_sdma_generation = 0;
 VAR_5->ipath_sdma_descq_tail = 0;
 VAR_5->ipath_sdma_descq_head = 0;
 VAR_5->ipath_sdma_descq_removed = 0;
 VAR_5->ipath_sdma_descq_added = 0;


 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmabase,
    VAR_5->ipath_sdma_descq_phys);

 VAR_9 = VAR_5->ipath_sdma_descq_cnt;
 VAR_9 |= 1<<18;
 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmalengen, VAR_9);

 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmatail,
    VAR_5->ipath_sdma_descq_tail);

 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmaheadaddr,
    VAR_5->ipath_sdma_head_phys);





 VAR_8 = VAR_5->ipath_piobcnt2k + VAR_5->ipath_piobcnt4k;
 VAR_7 = VAR_5->ipath_lastport_piobuf + VAR_5->ipath_pioreserved;
 FUNC_4(VAR_5, VAR_7, VAR_8 - VAR_7 , 0);
 for (; VAR_7 < VAR_8; ++VAR_7) {
  unsigned VAR_12 = VAR_7 / 64;
  unsigned VAR_13 = VAR_7 & 63;
  FUNC_0(VAR_12 >= 3);
  VAR_10[VAR_12] |= 1ULL << VAR_13;
 }
 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmabufmask0,
    VAR_10[0]);
 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmabufmask1,
    VAR_10[1]);
 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_senddmabufmask2,
    VAR_10[2]);

 FUNC_1(&VAR_5->ipath_sdma_activelist);
 FUNC_1(&VAR_5->ipath_sdma_notifylist);

 FUNC_10(&VAR_5->ipath_sdma_notify_task, VAR_4,
       (unsigned long) VAR_5);
 FUNC_10(&VAR_5->ipath_sdma_abort_task, VAR_3,
       (unsigned long) VAR_5);







 FUNC_8(&VAR_5->ipath_sendctrl_lock, VAR_11);
 VAR_5->ipath_sendctrl |= VAR_0;
 FUNC_7(VAR_5, VAR_5->ipath_kregs->kr_sendctrl, VAR_5->ipath_sendctrl);
 FUNC_6(VAR_5, VAR_5->ipath_kregs->kr_scratch);
 FUNC_2(VAR_2, &VAR_5->ipath_sdma_status);
 FUNC_9(&VAR_5->ipath_sendctrl_lock, VAR_11);

done:
 return VAR_6;
}
