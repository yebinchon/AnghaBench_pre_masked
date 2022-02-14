
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int dummy; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dib7000m_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_5, fe_status_t *VAR_6)
{
 struct dib7000m_state *VAR_7 = VAR_5->demodulator_priv;
 u16 VAR_8 = FUNC_0(VAR_7, 535);

 *VAR_6 = 0;

 if (VAR_8 & 0x8000)
  *VAR_6 |= VAR_2;
 if (VAR_8 & 0x3000)
  *VAR_6 |= VAR_0;
 if (VAR_8 & 0x0100)
  *VAR_6 |= VAR_4;
 if (VAR_8 & 0x0010)
  *VAR_6 |= VAR_3;
 if (VAR_8 & 0x0008)
  *VAR_6 |= VAR_1;

 return 0;
}
