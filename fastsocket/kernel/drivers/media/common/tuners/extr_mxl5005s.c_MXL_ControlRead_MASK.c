
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct mxl5005s_state {size_t Init_Ctrl_Num; size_t CH_Ctrl_Num; size_t MXL_Ctrl_Num; TYPE_3__* MXL_Ctrl; TYPE_2__* CH_Ctrl; TYPE_1__* Init_Ctrl; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;
struct TYPE_6__ {size_t Ctrl_Num; size_t size; int* val; } ;
struct TYPE_5__ {size_t Ctrl_Num; size_t size; int* val; } ;
struct TYPE_4__ {size_t Ctrl_Num; size_t size; int* val; } ;



__attribute__((used)) static u16 FUNC_0(struct dvb_frontend *VAR_0, u16 VAR_1, u32 *VAR_2)
{
 struct mxl5005s_state *VAR_3 = VAR_0->tuner_priv;
 u32 VAR_4 ;
 u16 VAR_5, VAR_6 ;

 for (VAR_5 = 0; VAR_5 < VAR_3->Init_Ctrl_Num ; VAR_5++) {

  if (VAR_1 == VAR_3->Init_Ctrl[VAR_5].Ctrl_Num) {

   VAR_4 = 0;
   for (VAR_6 = 0; VAR_6 < VAR_3->Init_Ctrl[VAR_5].size; VAR_6++)
    VAR_4 += VAR_3->Init_Ctrl[VAR_5].val[VAR_6] * (1<<VAR_6);
   *VAR_2 = VAR_4;
   return 0;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->CH_Ctrl_Num ; VAR_5++) {

  if (VAR_1 == VAR_3->CH_Ctrl[VAR_5].Ctrl_Num) {

   VAR_4 = 0;
   for (VAR_6 = 0; VAR_6 < VAR_3->CH_Ctrl[VAR_5].size; VAR_6++)
    VAR_4 += VAR_3->CH_Ctrl[VAR_5].val[VAR_6] * (1 << VAR_6);
   *VAR_2 = VAR_4;
   return 0;

  }
 }
 return 1;
}
