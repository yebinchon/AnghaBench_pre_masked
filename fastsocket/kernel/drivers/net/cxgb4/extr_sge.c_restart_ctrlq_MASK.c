
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {unsigned int priority; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {size_t pidx; unsigned long stops; int * desc; } ;
struct sge_ctrl_txq {TYPE_6__ sendq; TYPE_1__ q; int adap; scalar_t__ full; } ;
struct fw_wr_hdr {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct sge_ctrl_txq*,struct fw_wr_hdr*) ;
 int FUNC_3 (struct sk_buff*,TYPE_1__*,struct fw_wr_hdr*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_1)
{
 struct sk_buff *VAR_2;
 unsigned int VAR_3 = 0;
 struct sge_ctrl_txq *VAR_4 = (struct sge_ctrl_txq *)VAR_1;

 FUNC_7(&VAR_4->sendq.lock);
 FUNC_5(&VAR_4->q);
 FUNC_0(FUNC_10(&VAR_4->q) < VAR_0);

 while ((VAR_2 = FUNC_1(&VAR_4->sendq)) != ((void*)0)) {
  struct fw_wr_hdr *VAR_5;
  unsigned int VAR_6 = VAR_2->priority;





  FUNC_8(&VAR_4->sendq.lock);

  VAR_5 = (struct fw_wr_hdr *)&VAR_4->q.desc[VAR_4->q.pidx];
  FUNC_3(VAR_2, &VAR_4->q, VAR_5);
  FUNC_4(VAR_2);

  VAR_3 += VAR_6;
  FUNC_9(&VAR_4->q, VAR_6);
  if (FUNC_11(FUNC_10(&VAR_4->q) < VAR_0)) {
   unsigned long VAR_7 = VAR_4->q.stops;

   FUNC_2(VAR_4, VAR_5);
   if (VAR_4->q.stops != VAR_7) {
    FUNC_7(&VAR_4->sendq.lock);
    goto ringdb;
   }
  }
  if (VAR_3 > 16) {
   FUNC_6(VAR_4->adap, &VAR_4->q, VAR_3);
   VAR_3 = 0;
  }
  FUNC_7(&VAR_4->sendq.lock);
 }
 VAR_4->full = 0;
ringdb: if (VAR_3)
  FUNC_6(VAR_4->adap, &VAR_4->q, VAR_3);
 FUNC_8(&VAR_4->sendq.lock);
}
