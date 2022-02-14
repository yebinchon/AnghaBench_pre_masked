
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_pportdata {TYPE_1__* dd; } ;
struct qib_chip_specific {scalar_t__ xmit_wait; scalar_t__ rpkts; scalar_t__ spkts; scalar_t__ rword; scalar_t__ sword; int pma_sample_status; int pma_timer; } ;
struct TYPE_2__ {struct qib_chip_specific* cspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct qib_pportdata*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_4, u32 VAR_5,
         u32 VAR_6)
{
 struct qib_chip_specific *VAR_7 = VAR_4->dd->cspec;

 if (VAR_6 && VAR_5) {
  VAR_7->pma_sample_status = VAR_2;
  FUNC_0(&VAR_7->pma_timer, VAR_3 + FUNC_2(VAR_6));
 } else if (VAR_5) {
  VAR_7->pma_sample_status = VAR_1;
  FUNC_1(VAR_4, &VAR_7->sword, &VAR_7->rword,
          &VAR_7->spkts, &VAR_7->rpkts, &VAR_7->xmit_wait);
  FUNC_0(&VAR_7->pma_timer, VAR_3 + FUNC_2(VAR_5));
 } else {
  VAR_7->pma_sample_status = VAR_0;
  VAR_7->sword = 0;
  VAR_7->rword = 0;
  VAR_7->spkts = 0;
  VAR_7->rpkts = 0;
  VAR_7->xmit_wait = 0;
 }
}
