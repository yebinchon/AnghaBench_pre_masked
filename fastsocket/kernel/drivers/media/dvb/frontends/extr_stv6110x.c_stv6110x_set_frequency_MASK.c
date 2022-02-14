
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct stv6110x_state {int * regs; } ;
struct dvb_frontend {struct stv6110x_state* tuner_priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct stv6110x_state*,size_t,int *) ;
 int FUNC_8 (struct stv6110x_state*,size_t,int ) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_14, u32 VAR_15)
{
 struct stv6110x_state *VAR_16 = VAR_14->tuner_priv;
 u32 VAR_17, VAR_18;
 s32 VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 1000;
 u8 VAR_23;

 FUNC_4(VAR_16->regs[VAR_4], VAR_0, (VAR_1 - 16));

 if (VAR_15 <= 1023000) {
  FUNC_4(VAR_16->regs[VAR_7], VAR_9, 1);
  FUNC_4(VAR_16->regs[VAR_7], VAR_11, 0);
  VAR_19 = 40;
 } else if (VAR_15 <= 1300000) {
  FUNC_4(VAR_16->regs[VAR_7], VAR_9, 1);
  FUNC_4(VAR_16->regs[VAR_7], VAR_11, 1);
  VAR_19 = 40;
 } else if (VAR_15 <= 2046000) {
  FUNC_4(VAR_16->regs[VAR_7], VAR_9, 0);
  FUNC_4(VAR_16->regs[VAR_7], VAR_11, 0);
  VAR_19 = 20;
 } else {
  FUNC_4(VAR_16->regs[VAR_7], VAR_9, 0);
  FUNC_4(VAR_16->regs[VAR_7], VAR_11, 1);
  VAR_19 = 20;
 }

 for (VAR_17 = 0; VAR_17 <= 3; VAR_17++) {
  VAR_20 = (VAR_2 / 100) / FUNC_2(VAR_17);

  if ((FUNC_5((s32)(VAR_20 - VAR_19))) < (FUNC_5((s32)(VAR_22 - VAR_19))))
   VAR_21 = VAR_17;

  VAR_22 = (VAR_2 / 100) / FUNC_2(VAR_21);
 }

 VAR_18 = (VAR_15 * FUNC_2(VAR_21) * VAR_19) / VAR_2;
 VAR_18 = (VAR_18 + 5) / 10;

 FUNC_4(VAR_16->regs[VAR_7], VAR_12, VAR_21);
 FUNC_4(VAR_16->regs[VAR_7], VAR_10, FUNC_1(VAR_18));
 FUNC_4(VAR_16->regs[VAR_6], VAR_8, FUNC_0(VAR_18));


 FUNC_4(VAR_16->regs[VAR_5], VAR_3, 1);

 FUNC_8(VAR_16, VAR_4, VAR_16->regs[VAR_4]);
 FUNC_8(VAR_16, VAR_7, VAR_16->regs[VAR_7]);
 FUNC_8(VAR_16, VAR_6, VAR_16->regs[VAR_6]);
 FUNC_8(VAR_16, VAR_5, VAR_16->regs[VAR_5]);

 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  FUNC_7(VAR_16, VAR_5, &VAR_16->regs[VAR_5]);
  if (!FUNC_3(VAR_3, VAR_16->regs[VAR_5]))
    break;
  FUNC_6(1);
 }

 return 0;
}
