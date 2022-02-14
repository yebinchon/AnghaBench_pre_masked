
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_sdma_state {unsigned int first_sendbuf; unsigned int last_sendbuf; } ;
struct qib_pportdata {TYPE_1__* dd; struct qib_sdma_state sdma_state; } ;
struct TYPE_2__ {int (* f_sdma_hw_start_up ) (struct qib_pportdata*) ;int (* f_sendctrl ) (struct qib_pportdata*,int ) ;} ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int FUNC_2 (struct qib_pportdata*) ;

__attribute__((used)) static void FUNC_3(struct qib_pportdata *VAR_0)
{
 struct qib_sdma_state *VAR_1 = &VAR_0->sdma_state;
 unsigned VAR_2;

 for (VAR_2 = VAR_1->first_sendbuf; VAR_2 < VAR_1->last_sendbuf; ++VAR_2)
  VAR_0->dd->f_sendctrl(VAR_0, FUNC_0(VAR_2));

 VAR_0->dd->f_sdma_hw_start_up(VAR_0);
}
