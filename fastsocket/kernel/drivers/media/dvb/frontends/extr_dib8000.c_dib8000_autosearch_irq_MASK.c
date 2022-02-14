
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dib8000_state *VAR_1 = VAR_0->demodulator_priv;
 u16 VAR_2 = FUNC_0(VAR_1, 1284);

 if (VAR_2 & 0x1) {
  FUNC_1("dib8000_autosearch_irq failed");
  return 1;
 }

 if (VAR_2 & 0x2) {
  FUNC_1("dib8000_autosearch_irq succeeded");
  return 2;
 }

 return 0;
}
