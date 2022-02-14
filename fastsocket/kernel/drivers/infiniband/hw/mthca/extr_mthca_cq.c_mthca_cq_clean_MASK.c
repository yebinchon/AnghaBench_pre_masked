
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mthca_srq {int dummy; } ;
struct mthca_dev {int dummy; } ;
struct mthca_cqe {scalar_t__ my_qpn; int wqe; } ;
struct TYPE_2__ {int cqe; } ;
struct mthca_cq {int cons_index; int lock; TYPE_1__ ibcq; int cqn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mthca_cqe*) ;
 struct mthca_cqe* FUNC_3 (struct mthca_cq*,int) ;
 scalar_t__ FUNC_4 (struct mthca_cqe*) ;
 int FUNC_5 (struct mthca_cqe*,struct mthca_cqe*,int ) ;
 int FUNC_6 (struct mthca_dev*,char*,int,int ,int,int) ;
 int FUNC_7 (struct mthca_srq*,int ) ;
 int FUNC_8 (struct mthca_cqe*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct mthca_dev*,struct mthca_cq*,int) ;
 int FUNC_12 () ;

void FUNC_13(struct mthca_dev *VAR_1, struct mthca_cq *VAR_2, u32 VAR_3,
      struct mthca_srq *VAR_4)
{
 struct mthca_cqe *VAR_5;
 u32 VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_9(&VAR_2->lock);
 for (VAR_6 = VAR_2->cons_index;
      FUNC_2(FUNC_3(VAR_2, VAR_6 & VAR_2->ibcq.cqe));
      ++VAR_6)
  if (VAR_6 == VAR_2->cons_index + VAR_2->ibcq.cqe)
   break;

 if (0)
  FUNC_6(VAR_1, "Cleaning QPN %06x from CQN %06x; ci %d, pi %d\n",
     VAR_3, VAR_2->cqn, VAR_2->cons_index, VAR_6);





 while ((int) --VAR_6 - (int) VAR_2->cons_index >= 0) {
  VAR_5 = FUNC_3(VAR_2, VAR_6 & VAR_2->ibcq.cqe);
  if (VAR_5->my_qpn == FUNC_1(VAR_3)) {
   if (VAR_4 && FUNC_4(VAR_5))
    FUNC_7(VAR_4, FUNC_0(VAR_5->wqe));
   ++VAR_8;
  } else if (VAR_8)
   FUNC_5(FUNC_3(VAR_2, (VAR_6 + VAR_8) & VAR_2->ibcq.cqe),
          VAR_5, VAR_0);
 }

 if (VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
   FUNC_8(FUNC_3(VAR_2, (VAR_2->cons_index + VAR_7) & VAR_2->ibcq.cqe));
  FUNC_12();
  VAR_2->cons_index += VAR_8;
  FUNC_11(VAR_1, VAR_2, VAR_8);
 }

 FUNC_10(&VAR_2->lock);
}
