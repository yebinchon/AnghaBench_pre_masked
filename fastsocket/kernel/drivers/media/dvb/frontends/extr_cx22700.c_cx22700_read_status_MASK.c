
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_frontend {struct cx22700_state* demodulator_priv; } ;
struct cx22700_state {int dummy; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx22700_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_5, fe_status_t* VAR_6)
{
 struct cx22700_state* VAR_7 = VAR_5->demodulator_priv;

 u16 VAR_8 = (FUNC_0 (VAR_7, 0x0d) << 9)
     | (FUNC_0 (VAR_7, 0x0e) << 1);
 u8 VAR_9 = FUNC_0 (VAR_7, 0x07);

 *VAR_6 = 0;

 if (VAR_8 < 0xff00)
  *VAR_6 |= VAR_2;

 if (VAR_9 & 0x20)
  *VAR_6 |= VAR_0;

 if (VAR_9 & 0x10)
  *VAR_6 |= VAR_4;

 if (VAR_9 & 0x10)
  *VAR_6 |= VAR_3;

 if (*VAR_6 == 0x0f)
  *VAR_6 |= VAR_1;

 return 0;
}
