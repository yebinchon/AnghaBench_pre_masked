
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dib8000_state*,int ) ;
 int FUNC_2 (struct dib8000_state*,unsigned char) ;

void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_1->demodulator_priv;
 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, (unsigned char)(FUNC_0(VAR_1->dtv_property_cache.frequency / 1000)));
}
