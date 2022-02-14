
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dib7000m_state*,int ) ;
 int FUNC_1 (struct dib7000m_state*,int ) ;
 int FUNC_2 (struct dib7000m_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4)
{
 struct dib7000m_state *VAR_5 = VAR_4->demodulator_priv;
 FUNC_1(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_0);
 return FUNC_0(VAR_5, VAR_2) |
  FUNC_0(VAR_5, VAR_1);
}
