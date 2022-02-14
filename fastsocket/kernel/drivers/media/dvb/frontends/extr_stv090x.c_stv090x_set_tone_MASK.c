
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct stv090x_state*,int ,int ) ;
 int FUNC_3 (int ,int,char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5, fe_sec_tone_mode_t VAR_6)
{
 struct stv090x_state *VAR_7 = VAR_5->demodulator_priv;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_1);
 switch (VAR_6) {
 case 128:
  FUNC_1(VAR_8, VAR_2, 0);
  FUNC_1(VAR_8, VAR_0, 1);
  if (FUNC_2(VAR_7, VAR_1, VAR_8) < 0)
   goto err;
  FUNC_1(VAR_8, VAR_0, 0);
  if (FUNC_2(VAR_7, VAR_1, VAR_8) < 0)
   goto err;
  break;

 case 129:
  FUNC_1(VAR_8, VAR_2, 0);
  FUNC_1(VAR_8, VAR_0, 1);
  if (FUNC_2(VAR_7, VAR_1, VAR_8) < 0)
   goto err;
  break;
 default:
  return -VAR_3;
 }

 return 0;
err:
 FUNC_3(VAR_4, 1, "I/O error");
 return -1;
}
