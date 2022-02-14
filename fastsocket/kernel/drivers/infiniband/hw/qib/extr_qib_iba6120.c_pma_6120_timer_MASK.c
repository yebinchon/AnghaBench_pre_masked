
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct qib_ibport {int lock; int pma_sample_interval; } ;
struct qib_pportdata {struct qib_ibport ibport_data; TYPE_1__* dd; } ;
struct qib_chip_specific {scalar_t__ pma_sample_status; void* sword; void* rword; void* spkts; void* rpkts; void* xmit_wait; int pma_timer; } ;
struct TYPE_2__ {struct qib_chip_specific* cspec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct qib_pportdata*,void**,void**,void**,void**,void**) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{
 struct qib_pportdata *VAR_5 = (struct qib_pportdata *)VAR_4;
 struct qib_chip_specific *VAR_6 = VAR_5->dd->cspec;
 struct qib_ibport *VAR_7 = &VAR_5->ibport_data;
 unsigned long VAR_8;

 FUNC_2(&VAR_7->lock, VAR_8);
 if (VAR_6->pma_sample_status == VAR_2) {
  VAR_6->pma_sample_status = VAR_1;
  FUNC_1(VAR_5, &VAR_6->sword, &VAR_6->rword,
          &VAR_6->spkts, &VAR_6->rpkts, &VAR_6->xmit_wait);
  FUNC_0(&VAR_6->pma_timer,
     VAR_3 + FUNC_4(VAR_7->pma_sample_interval));
 } else if (VAR_6->pma_sample_status == VAR_1) {
  u64 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

  VAR_6->pma_sample_status = VAR_0;
  FUNC_1(VAR_5, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13);

  VAR_6->sword = VAR_9 - VAR_6->sword;
  VAR_6->rword = VAR_10 - VAR_6->rword;
  VAR_6->spkts = VAR_11 - VAR_6->spkts;
  VAR_6->rpkts = VAR_12 - VAR_6->rpkts;
  VAR_6->xmit_wait = VAR_13 - VAR_6->xmit_wait;
 }
 FUNC_3(&VAR_7->lock, VAR_8);
}
