
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;
struct dvb_frontend {struct mb86a16_state* demodulator_priv; } ;
typedef int fe_sec_mini_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_9, fe_sec_mini_cmd_t VAR_10)
{
 struct mb86a16_state *VAR_11 = VAR_9->demodulator_priv;

 switch (VAR_10) {
 case 129:
  if (FUNC_1(VAR_11, VAR_1, VAR_2 |
             VAR_3 |
             VAR_4) < 0)
   goto err;
  if (FUNC_1(VAR_11, VAR_5, VAR_6) < 0)
   goto err;
  break;
 case 128:
  if (FUNC_1(VAR_11, VAR_1, VAR_2 |
             VAR_3) < 0)
   goto err;
  if (FUNC_1(VAR_11, VAR_5, VAR_6) < 0)
   goto err;
  break;
 }

 return 0;
err:
 FUNC_0(VAR_8, VAR_7, 1, "I2C transfer error");
 return -VAR_0;
}
