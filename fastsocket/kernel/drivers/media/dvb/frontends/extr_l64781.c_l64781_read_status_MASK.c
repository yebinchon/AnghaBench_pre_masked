
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l64781_state {int dummy; } ;
struct dvb_frontend {struct l64781_state* demodulator_priv; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct l64781_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_5, fe_status_t* VAR_6)
{
 struct l64781_state* VAR_7 = VAR_5->demodulator_priv;
 int VAR_8 = FUNC_0 (VAR_7, 0x32);
 int VAR_9 = FUNC_0 (VAR_7, 0x0e);

 FUNC_0 (VAR_7, 0x00);
 FUNC_0 (VAR_7, 0x01);

 *VAR_6 = 0;

 if (VAR_9 > 5)
  *VAR_6 |= VAR_2;

 if (VAR_8 & 0x02)
  *VAR_6 |= VAR_0;

 if (VAR_8 & 0x20)
  *VAR_6 |= VAR_4;

 if (VAR_8 & 0x40)
  *VAR_6 |= VAR_3;

 if (VAR_8 == 0x7f)
  *VAR_6 |= VAR_1;

 return 0;
}
