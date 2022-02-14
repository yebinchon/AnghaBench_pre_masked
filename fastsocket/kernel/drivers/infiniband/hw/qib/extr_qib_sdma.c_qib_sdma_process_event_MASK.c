
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_state; } ;
struct qib_pportdata {int sdma_lock; TYPE_1__ sdma_state; } ;
typedef enum qib_sdma_events { ____Placeholder_qib_sdma_events } qib_sdma_events ;


 int FUNC_0 (struct qib_pportdata*,int) ;
 int FUNC_1 (struct qib_pportdata*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct qib_pportdata *VAR_1,
 enum qib_sdma_events VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1->sdma_lock, VAR_3);

 FUNC_0(VAR_1, VAR_2);

 if (VAR_1->sdma_state.current_state == VAR_0)
  FUNC_2(VAR_1, FUNC_1(VAR_1));

 FUNC_4(&VAR_1->sdma_lock, VAR_3);
}
