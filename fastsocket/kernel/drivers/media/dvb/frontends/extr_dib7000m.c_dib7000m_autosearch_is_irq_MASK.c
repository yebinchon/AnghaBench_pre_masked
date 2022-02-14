
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int revision; } ;


 int FUNC_0 (struct dib7000m_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dib7000m_state *VAR_1 = VAR_0->demodulator_priv;
 if (VAR_1->revision == 0x4000)
  return FUNC_0(VAR_1, 1793);
 else
  return FUNC_0(VAR_1, 537);
}
