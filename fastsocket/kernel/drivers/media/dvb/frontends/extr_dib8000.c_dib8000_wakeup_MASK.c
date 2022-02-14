
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dib8000_state*,int ) ;
 int FUNC_1 (struct dib8000_state*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3)
{
 struct dib8000_state *VAR_4 = VAR_3->demodulator_priv;

 FUNC_1(VAR_4, VAR_0);
 FUNC_0(VAR_4, VAR_1);
 if (FUNC_0(VAR_4, VAR_2) != 0)
  FUNC_2("could not start Slow ADC");

 return 0;
}
