
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sge {struct cmdQ* cmdQ; struct adapter* adapter; } ;
struct cmdQ {unsigned int size; unsigned int in_use; unsigned int genbit; unsigned int pidx; int lock; int status; } ;
struct adapter {scalar_t__ regs; } ;
struct TYPE_2__ {int nr_frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (struct sge*,struct cmdQ*) ;
 struct sk_buff* FUNC_4 (struct sge*,int *,unsigned int) ;
 int FUNC_5 (int ,int *) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct adapter*,struct sk_buff*,unsigned int,unsigned int,struct cmdQ*) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_4)
{
 struct sge *VAR_5 = (struct sge *) VAR_4;
 struct adapter *VAR_6 = VAR_5->adapter;
 struct cmdQ *VAR_7 = &VAR_5->cmdQ[0];
 struct sk_buff *VAR_8;
 unsigned int VAR_9, VAR_10 = 0;

 FUNC_7(&VAR_7->lock);
 FUNC_3(VAR_5, VAR_7);

 VAR_9 = VAR_7->size - VAR_7->in_use;
 FUNC_2("restart_sched credits=%d\n", VAR_9);
 while ((VAR_8 = FUNC_4(VAR_5, ((void*)0), VAR_9)) != ((void*)0)) {
  unsigned int VAR_11, VAR_12, VAR_13;
         VAR_13 = 1 + FUNC_6(VAR_8)->nr_frags;
  VAR_13 += FUNC_1(VAR_8);
  VAR_7->in_use += VAR_13;
  VAR_11 = VAR_7->genbit;
  VAR_12 = VAR_7->pidx;
  VAR_7->pidx += VAR_13;
  if (VAR_7->pidx >= VAR_7->size) {
   VAR_7->pidx -= VAR_7->size;
   VAR_7->genbit ^= 1;
  }
  FUNC_10(VAR_6, VAR_8, VAR_12, VAR_11, VAR_7);
         VAR_9 = VAR_7->size - VAR_7->in_use;
  VAR_10 = 1;
 }

 if (VAR_10) {
  FUNC_0(VAR_1, &VAR_7->status);
  if (FUNC_9(VAR_2, &VAR_7->status) == 0) {
   FUNC_5(VAR_1, &VAR_7->status);
   FUNC_11(VAR_3, VAR_6->regs + VAR_0);
  }
 }
 FUNC_8(&VAR_7->lock);
}
