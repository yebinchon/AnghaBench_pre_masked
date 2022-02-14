
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int verbose; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_2 (struct stb0899_state*,int ,int) ;

int FUNC_3(struct dvb_frontend *VAR_5, int VAR_6)
{
 int VAR_7;
 struct stb0899_state *VAR_8 = VAR_5->demodulator_priv;

 VAR_7 = FUNC_1(VAR_8, VAR_3);
 if (VAR_7 < 0)
  goto err;

 if (VAR_6) {
  FUNC_0(VAR_8->verbose, VAR_1, 1, "Enabling I2C Repeater ...");
  VAR_7 |= VAR_4;
  if (FUNC_2(VAR_8, VAR_3, VAR_7) < 0)
   goto err;
 } else {
  FUNC_0(VAR_8->verbose, VAR_1, 1, "Disabling I2C Repeater ...");
  VAR_7 &= ~VAR_4;
  if (FUNC_2(VAR_8, VAR_3, VAR_7) < 0)
   goto err;
 }
 return 0;
err:
 FUNC_0(VAR_8->verbose, VAR_2, 1, "I2C Repeater control failed");
 return -VAR_0;
}
