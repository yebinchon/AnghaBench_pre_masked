
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_2)
{
 struct dib3000_state* VAR_3 = VAR_2->demodulator_priv;
 FUNC_0("dib3000mb is going to bed.\n");
 FUNC_1(VAR_1, VAR_0);
 return 0;
}
