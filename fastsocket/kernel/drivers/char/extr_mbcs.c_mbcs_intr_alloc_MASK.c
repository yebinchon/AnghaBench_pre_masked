
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn_irq_info {int irq_irq; int irq_xtalkaddr; } ;
struct putdma {int intrVector; int intrHostDest; } ;
struct algoblock {int intrVector; int intrHostDest; } ;
struct getdma {int intrVector; int intrHostDest; } ;
struct mbcs_soft {struct sn_irq_info* get_sn_irq; struct sn_irq_info* put_sn_irq; struct sn_irq_info* algo_sn_irq; struct algoblock algo; struct putdma putdma; struct getdma getdma; } ;
struct TYPE_2__ {int nasid; } ;
struct cx_dev {TYPE_1__ cx_id; struct mbcs_soft* soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mbcs_soft*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,void*,int ,char*,void*) ;
 struct sn_irq_info* FUNC_2 (int ,int ,int,int,int) ;
 int FUNC_3 (struct sn_irq_info*) ;

__attribute__((used)) static int FUNC_4(struct cx_dev *VAR_4)
{
 struct sn_irq_info *VAR_5;
 struct mbcs_soft *VAR_6;
 struct getdma *VAR_7;
 struct putdma *VAR_8;
 struct algoblock *VAR_9;

 VAR_6 = VAR_4->soft;
 VAR_7 = &VAR_6->getdma;
 VAR_8 = &VAR_6->putdma;
 VAR_9 = &VAR_6->algo;

 VAR_6->get_sn_irq = ((void*)0);
 VAR_6->put_sn_irq = ((void*)0);
 VAR_6->algo_sn_irq = ((void*)0);

 VAR_5 = FUNC_2(VAR_4->cx_id.nasid, VAR_2, -1, -1, -1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_6->get_sn_irq = VAR_5;
 VAR_7->intrHostDest = VAR_5->irq_xtalkaddr;
 VAR_7->intrVector = VAR_5->irq_irq;
 if (FUNC_1(VAR_5->irq_irq,
   (void *)VAR_3, VAR_1,
   "MBCS get intr", (void *)VAR_6)) {
  FUNC_3(VAR_6->get_sn_irq);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4->cx_id.nasid, VAR_2, -1, -1, -1);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_6->get_sn_irq->irq_irq, VAR_6);
  FUNC_3(VAR_6->get_sn_irq);
  return -VAR_0;
 }
 VAR_6->put_sn_irq = VAR_5;
 VAR_8->intrHostDest = VAR_5->irq_xtalkaddr;
 VAR_8->intrVector = VAR_5->irq_irq;
 if (FUNC_1(VAR_5->irq_irq,
   (void *)VAR_3, VAR_1,
   "MBCS put intr", (void *)VAR_6)) {
  FUNC_3(VAR_6->put_sn_irq);
  FUNC_0(VAR_6->get_sn_irq->irq_irq, VAR_6);
  FUNC_3(VAR_6->get_sn_irq);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4->cx_id.nasid, VAR_2, -1, -1, -1);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_6->put_sn_irq->irq_irq, VAR_6);
  FUNC_3(VAR_6->put_sn_irq);
  FUNC_0(VAR_6->get_sn_irq->irq_irq, VAR_6);
  FUNC_3(VAR_6->get_sn_irq);
  return -VAR_0;
 }
 VAR_6->algo_sn_irq = VAR_5;
 VAR_9->intrHostDest = VAR_5->irq_xtalkaddr;
 VAR_9->intrVector = VAR_5->irq_irq;
 if (FUNC_1(VAR_5->irq_irq,
   (void *)VAR_3, VAR_1,
   "MBCS algo intr", (void *)VAR_6)) {
  FUNC_3(VAR_6->algo_sn_irq);
  FUNC_0(VAR_6->put_sn_irq->irq_irq, VAR_6);
  FUNC_3(VAR_6->put_sn_irq);
  FUNC_0(VAR_6->get_sn_irq->irq_irq, VAR_6);
  FUNC_3(VAR_6->get_sn_irq);
  return -VAR_0;
 }

 return 0;
}
