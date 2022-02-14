
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct nes_qp {int dummy; } ;
struct TYPE_4__ {size_t cq_head; size_t cq_size; TYPE_1__* cq_vbase; } ;
struct nes_cq {int lock; TYPE_2__ hw_cq; } ;
struct TYPE_3__ {scalar_t__* cqe_words; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct nes_qp *VAR_5, struct nes_cq *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 unsigned long VAR_11 = 0;

 FUNC_2(&VAR_6->lock, VAR_11);

 VAR_7 = VAR_6->hw_cq.cq_head;
 while (FUNC_0(VAR_6->hw_cq.cq_vbase[VAR_7].cqe_words[VAR_2]) & VAR_3) {
  FUNC_1();
  VAR_8 = FUNC_0(VAR_6->hw_cq.cq_vbase[VAR_7].cqe_words[VAR_1]);
  VAR_9 = FUNC_0(VAR_6->hw_cq.cq_vbase[VAR_7].cqe_words[VAR_0]);
  VAR_10 = (((u64)VAR_9) << 32) | ((u64)VAR_8);
  VAR_10 &= ~(VAR_4-1);
  if (VAR_10 == (u64)(unsigned long)VAR_5) {

   VAR_6->hw_cq.cq_vbase[VAR_7].cqe_words[VAR_1] = 0;
   VAR_6->hw_cq.cq_vbase[VAR_7].cqe_words[VAR_0] = 0;
  }

  if (++VAR_7 >= VAR_6->hw_cq.cq_size)
   VAR_7 = 0;
 }

 FUNC_3(&VAR_6->lock, VAR_11);
}
