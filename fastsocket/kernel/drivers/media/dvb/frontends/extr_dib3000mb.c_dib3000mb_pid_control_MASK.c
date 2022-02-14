
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2,int VAR_3, int VAR_4,int VAR_5)
{
 struct dib3000_state *VAR_6 = VAR_2->demodulator_priv;
 VAR_4 = (VAR_5 ? VAR_4 | VAR_1 : 0);
 FUNC_0(VAR_3+VAR_0,VAR_4);
 return 0;
}
