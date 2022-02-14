
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_op; } ;
struct qib_pportdata {TYPE_1__ sdma_state; scalar_t__* sdma_head_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_pportdata*,int) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (struct qib_pportdata*,int ) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_2)
{






 FUNC_3(VAR_2, VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, 0);
 VAR_2->sdma_head_dma[0] = 0;
 FUNC_0(VAR_2,
  VAR_2->sdma_state.current_op | VAR_0);
}
