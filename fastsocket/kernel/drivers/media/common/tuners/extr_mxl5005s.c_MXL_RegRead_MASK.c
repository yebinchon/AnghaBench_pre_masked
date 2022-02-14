
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct mxl5005s_state {TYPE_1__* TunerRegs; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;
struct TYPE_2__ {scalar_t__ Reg_Num; scalar_t__ Reg_Val; } ;



__attribute__((used)) static u16 FUNC_0(struct dvb_frontend *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 struct mxl5005s_state *VAR_3 = VAR_0->tuner_priv;
 int VAR_4 ;

 for (VAR_4 = 0; VAR_4 < 104; VAR_4++) {
  if (VAR_1 == VAR_3->TunerRegs[VAR_4].Reg_Num) {
   *VAR_2 = (u8)(VAR_3->TunerRegs[VAR_4].Reg_Val);
   return 0;
  }
 }

 return 1;
}
