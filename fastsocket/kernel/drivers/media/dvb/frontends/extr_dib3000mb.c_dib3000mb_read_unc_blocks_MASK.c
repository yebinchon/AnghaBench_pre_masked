
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1, u32 *VAR_2)
{
 struct dib3000_state* VAR_3 = VAR_1->demodulator_priv;

 *VAR_2 = FUNC_0(VAR_0);
 return 0;
}
