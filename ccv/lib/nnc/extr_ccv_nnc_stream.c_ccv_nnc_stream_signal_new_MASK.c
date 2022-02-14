
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; scalar_t__ emit_context; } ;
typedef TYPE_1__ ccv_nnc_stream_signal_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__* const) ;

ccv_nnc_stream_signal_t* FUNC_3(const int VAR_1)
{
 ccv_nnc_stream_signal_t* const VAR_2 = (ccv_nnc_stream_signal_t*)FUNC_1(sizeof(ccv_nnc_stream_signal_t));
 VAR_2->type = VAR_1;
 VAR_2->emit_context = 0;




 return VAR_2;
}
