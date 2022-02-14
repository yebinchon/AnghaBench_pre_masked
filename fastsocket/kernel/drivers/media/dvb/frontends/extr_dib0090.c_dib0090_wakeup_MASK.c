
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {TYPE_1__* config; } ;
struct TYPE_2__ {int (* sleep ) (struct dvb_frontend*,int ) ;} ;


 int FUNC_0 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dib0090_state *VAR_1 = VAR_0->tuner_priv;
 if (VAR_1->config->sleep)
  VAR_1->config->sleep(VAR_0, 0);
 return 0;
}
