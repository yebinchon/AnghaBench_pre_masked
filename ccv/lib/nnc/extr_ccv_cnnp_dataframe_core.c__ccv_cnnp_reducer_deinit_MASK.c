
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; int (* context_deinit ) (int ) ;scalar_t__ iter; } ;
typedef TYPE_1__ ccv_cnnp_dataframe_reducer_t ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void* const VAR_0)
{
 ccv_cnnp_dataframe_reducer_t* const VAR_1 = (ccv_cnnp_dataframe_reducer_t*)VAR_0;
 if (VAR_1->iter)
  FUNC_1(VAR_1->iter);
 if (VAR_1->context_deinit)
  VAR_1->context_deinit(VAR_1->context);
 FUNC_0(VAR_1);
}
