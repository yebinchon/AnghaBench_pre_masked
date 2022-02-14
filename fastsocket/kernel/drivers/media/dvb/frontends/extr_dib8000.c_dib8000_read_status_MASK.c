
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dib8000_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_5, fe_status_t * VAR_6)
{
 struct dib8000_state *VAR_7 = VAR_5->demodulator_priv;
 u16 VAR_8 = FUNC_0(VAR_7, 568);

 *VAR_6 = 0;

 if ((VAR_8 >> 13) & 1)
  *VAR_6 |= VAR_2;

 if ((VAR_8 >> 8) & 1)
  *VAR_6 |= VAR_0;

 if (((VAR_8 >> 1) & 0xf) == 0xf)
  *VAR_6 |= VAR_3;

 if (((VAR_8 >> 12) & 1) && ((VAR_8 >> 5) & 7))
  *VAR_6 |= VAR_1;

 if ((VAR_8 >> 12) & 1) {
  VAR_8 = FUNC_0(VAR_7, 554);
  if (VAR_8 & 0x01)
   *VAR_6 |= VAR_4;

  VAR_8 = FUNC_0(VAR_7, 555);
  if (VAR_8 & 0x01)
   *VAR_6 |= VAR_4;

  VAR_8 = FUNC_0(VAR_7, 556);
  if (VAR_8 & 0x01)
   *VAR_6 |= VAR_4;
 }

 return 0;
}
