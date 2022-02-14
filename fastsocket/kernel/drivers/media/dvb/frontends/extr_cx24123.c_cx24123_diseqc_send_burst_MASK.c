
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {int dummy; } ;
typedef scalar_t__ fe_sec_mini_cmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*) ;
 int FUNC_2 (struct cx24123_state*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3,
 fe_sec_mini_cmd_t VAR_4)
{
 struct cx24123_state *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6, VAR_7;

 FUNC_3("\n");


 VAR_7 = FUNC_0(VAR_5, 0x29);
 if (VAR_7 & 0x10)
  FUNC_2(VAR_5, 0x29, VAR_7 & ~0x50);


 FUNC_1(VAR_5);


 FUNC_2(VAR_5, 0x2a, FUNC_0(VAR_5, 0x2a) | 0x4);
 FUNC_4(30);
 VAR_6 = FUNC_0(VAR_5, 0x29);
 if (VAR_4 == VAR_1)
  FUNC_2(VAR_5, 0x29, ((VAR_6 & 0x90) | 0x40 | 0x00));
 else if (VAR_4 == VAR_2)
  FUNC_2(VAR_5, 0x29, ((VAR_6 & 0x90) | 0x40 | 0x08));
 else
  return -VAR_0;

 FUNC_1(VAR_5);
 FUNC_2(VAR_5, 0x2a, FUNC_0(VAR_5, 0x2a) & 0xfb);


 if (VAR_7 & 0x10)
  FUNC_2(VAR_5, 0x29, VAR_7 & ~0x40);

 return 0;
}
