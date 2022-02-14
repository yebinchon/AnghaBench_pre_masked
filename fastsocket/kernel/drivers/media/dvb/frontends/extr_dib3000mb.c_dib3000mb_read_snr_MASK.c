
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef short u16 ;
struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_3, u16 *VAR_4)
{
 struct dib3000_state* VAR_5 = VAR_3->demodulator_priv;
 short VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = ((FUNC_0(VAR_1) & 0xff) << 16) |
  FUNC_0(VAR_0);
 *VAR_4 = (VAR_6 << 8) / ((VAR_7 > 0) ? VAR_7 : 1);
 return 0;
}
