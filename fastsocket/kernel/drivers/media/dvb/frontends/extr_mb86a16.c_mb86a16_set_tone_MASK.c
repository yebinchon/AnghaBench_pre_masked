
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_10, fe_sec_tone_mode_t VAR_11)
{
 struct mb86a16_state *VAR_12 = VAR_10->demodulator_priv;

 switch (VAR_11) {
 case 128:
  if (FUNC_1(VAR_12, VAR_8, 0x00) < 0)
   goto err;
  if (FUNC_1(VAR_12, VAR_2, VAR_4 |
             VAR_3) < 0)

   goto err;
  if (FUNC_1(VAR_12, VAR_5, VAR_6) < 0)
   goto err;
  break;
 case 129:
  if (FUNC_1(VAR_12, VAR_8, 0x04) < 0)
   goto err;
  if (FUNC_1(VAR_12, VAR_2, VAR_4) < 0)
   goto err;
  if (FUNC_1(VAR_12, VAR_5, 0x00) < 0)
   goto err;
  break;
 default:
  return -VAR_0;
 }
 return 0;

err:
 FUNC_0(VAR_9, VAR_7, 1, "I2C transfer error");
 return -VAR_1;
}
