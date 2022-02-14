
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_internal {int master_clk; } ;
struct stb0899_state {struct stb0899_internal internal; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct stb0899_state*,int ) ;
 scalar_t__ FUNC_2 (struct stb0899_state*,int) ;
 int FUNC_3 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_6, fe_sec_tone_mode_t VAR_7)
{
 struct stb0899_state *VAR_8 = VAR_6->demodulator_priv;
 struct stb0899_internal *VAR_9 = &VAR_8->internal;

 u8 VAR_10, VAR_11;


 if (FUNC_2(VAR_8, 100) < 0)
  return -VAR_2;

 switch (VAR_7) {
 case 128:
  VAR_10 = (VAR_9->master_clk / 100) / 5632;
  VAR_10 = (VAR_10 + 5) / 10;
  FUNC_3(VAR_8, VAR_5, 0x66);
  VAR_11 = FUNC_1(VAR_8, VAR_4);
  FUNC_0(VAR_0, VAR_11, 0x03);
  FUNC_3(VAR_8, VAR_4, VAR_11);
  FUNC_3(VAR_8, VAR_3, VAR_10);
  break;
 case 129:
  FUNC_3(VAR_8, VAR_5, 0x20);
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
