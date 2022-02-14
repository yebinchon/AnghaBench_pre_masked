
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv6110x_state {int * regs; } ;
struct dvb_frontend {struct stv6110x_state* tuner_priv; } ;
typedef enum tuner_mode { ____Placeholder_tuner_mode } tuner_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,int) ;


 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct stv6110x_state*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_6, enum tuner_mode VAR_7)
{
 struct stv6110x_state *VAR_8 = VAR_6->tuner_priv;
 int VAR_9;

 switch (VAR_7) {
 case 129:
  FUNC_0(VAR_8->regs[VAR_5], VAR_2, 0);
  FUNC_0(VAR_8->regs[VAR_5], VAR_1, 0);
  FUNC_0(VAR_8->regs[VAR_5], VAR_0, 0);
  break;

 case 128:
  FUNC_0(VAR_8->regs[VAR_5], VAR_2, 1);
  FUNC_0(VAR_8->regs[VAR_5], VAR_1, 1);
  FUNC_0(VAR_8->regs[VAR_5], VAR_0, 1);
  break;
 }

 VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_8->regs[VAR_5]);
 if (VAR_9 < 0) {
  FUNC_1(VAR_4, 1, "I/O Error");
  return -VAR_3;
 }

 return 0;
}
