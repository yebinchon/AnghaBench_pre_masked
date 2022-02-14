
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
typedef int s32 ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_14, u32 *VAR_15)
{
 struct stv090x_state *VAR_16 = VAR_14->demodulator_priv;

 s32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24, VAR_25, VAR_26;
 enum fe_status VAR_27;

 FUNC_4(VAR_14, &VAR_27);
 if (!(VAR_27 & VAR_13)) {
  *VAR_15 = 1 << 23;
 } else {

  VAR_23 = FUNC_1(VAR_16, VAR_2);
  VAR_24 = FUNC_0(VAR_23, VAR_6);

  VAR_23 = FUNC_1(VAR_16, VAR_1);
  VAR_25 = FUNC_0(VAR_23, VAR_5);

  VAR_23 = FUNC_1(VAR_16, VAR_0);
  VAR_26 = FUNC_0(VAR_23, VAR_4);

  *VAR_15 = ((VAR_24 << 16) | (VAR_25 << 8) | VAR_26);

  VAR_17 = FUNC_1(VAR_16, VAR_11);
  VAR_18 = FUNC_1(VAR_16, VAR_10);
  VAR_19 = FUNC_1(VAR_16, VAR_9);
  VAR_20 = FUNC_1(VAR_16, VAR_8);
  VAR_21 = FUNC_1(VAR_16, VAR_7);

  if ((!VAR_17) && (!VAR_18)) {
   VAR_22 = (VAR_19 & 0xff) << 16;
   VAR_22 |= (VAR_20 & 0xff) << 8;
   VAR_22 |= VAR_21 & 0xff;
  } else {
   VAR_22 = 1 << 24;
  }
  if (VAR_22 == 0)
   *VAR_15 = 1;
 }
 if (FUNC_2(VAR_16, VAR_11, 0) < 0)
  goto err;
 if (FUNC_2(VAR_16, VAR_3, 0xc1) < 0)
  goto err;

 return 0;
err:
 FUNC_3(VAR_12, 1, "I/O error");
 return -1;
}
