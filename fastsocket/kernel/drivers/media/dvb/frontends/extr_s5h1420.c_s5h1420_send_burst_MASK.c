
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5h1420_state {int dummy; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;
typedef scalar_t__ fe_sec_mini_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct s5h1420_state*,int) ;
 int FUNC_2 (struct s5h1420_state*,int,int) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5 (struct dvb_frontend* VAR_4, fe_sec_mini_cmd_t VAR_5)
{
 struct s5h1420_state* VAR_6 = VAR_4->demodulator_priv;
 u8 VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9;


 VAR_7 = FUNC_1(VAR_6, 0x3b);
 FUNC_2(VAR_6, 0x3b, (FUNC_1(VAR_6, 0x3b) & 0x70) | 0x01);


 if (VAR_5 == VAR_2) {
  FUNC_2(VAR_6, 0x3b, FUNC_1(VAR_6, 0x3b) | 0x04);
 }
 FUNC_0(15);


 FUNC_2(VAR_6, 0x3b, FUNC_1(VAR_6, 0x3b) | 0x08);


 VAR_9 = VAR_3 + ((100*VAR_1) / 1000);
 while(FUNC_4(VAR_3, VAR_9)) {
  if (!(FUNC_1(VAR_6, 0x3b) & 0x08))
   break;

  FUNC_0(5);
 }
 if (FUNC_3(VAR_3, VAR_9))
  VAR_8 = -VAR_0;


 FUNC_2(VAR_6, 0x3b, VAR_7);
 FUNC_0(15);
 return VAR_8;
}
