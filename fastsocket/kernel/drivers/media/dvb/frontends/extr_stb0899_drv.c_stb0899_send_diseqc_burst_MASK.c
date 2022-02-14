
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_state {int dummy; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
typedef int fe_sec_mini_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_2 (struct stb0899_state*,int) ;
 int FUNC_3 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5, fe_sec_mini_cmd_t VAR_6)
{
 struct stb0899_state *VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8, VAR_9;


 if (FUNC_2(VAR_7, 100) < 0)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_7, VAR_3);
 VAR_9 = VAR_8;

 FUNC_0(VAR_0, VAR_8, 0x03);
 FUNC_0(VAR_1, VAR_8, 0x01);
 FUNC_3(VAR_7, VAR_3, VAR_8);
 switch (VAR_6) {
 case 129:

  FUNC_3(VAR_7, VAR_4, 0x00);
  break;
 case 128:

  FUNC_3(VAR_7, VAR_4, 0xff);
  break;
 }
 VAR_8 = FUNC_1(VAR_7, VAR_3);
 FUNC_0(VAR_1, VAR_8, 0x00);
 FUNC_3(VAR_7, VAR_3, VAR_8);

 if (FUNC_2(VAR_7, 100) < 0)
  return -VAR_2;


 FUNC_3(VAR_7, VAR_3, VAR_9);

 return 0;
}
