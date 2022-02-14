
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct s5h1432_state {int dummy; } ;
struct dvb_frontend {struct s5h1432_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5h1432_state*,int ,int) ;
 int FUNC_1 (struct s5h1432_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
      u32 VAR_2)
{
 struct s5h1432_state *VAR_3 = VAR_1->demodulator_priv;

 u8 VAR_4 = 0;


 VAR_4 = FUNC_0(VAR_3, VAR_0, 0x2E);
 VAR_4 &= ~(0x0C);
 switch (VAR_2) {
 case 6:
  VAR_4 |= 0x08;
  break;
 case 7:
  VAR_4 |= 0x04;
  break;
 case 8:
  VAR_4 |= 0x00;
  break;
 default:
  return 0;
 }
 FUNC_1(VAR_3, VAR_0, 0x2E, VAR_4);
 return 1;
}
