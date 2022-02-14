
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {TYPE_1__* config; } ;
struct TYPE_5__ {int reg; int data; } ;
struct TYPE_4__ {scalar_t__ dont_use_pll; scalar_t__ lnb_polarity; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct cx24123_state*,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct cx24123_state*,int,int ) ;
 int FUNC_3 (struct cx24123_state*,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1)
{
 struct cx24123_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 FUNC_4("init frontend\n");


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_3(VAR_2, VAR_0[VAR_3].reg,
   VAR_0[VAR_3].data);


 if (VAR_2->config->lnb_polarity)
  FUNC_3(VAR_2, 0x32,
   FUNC_1(VAR_2, 0x32) | 0x02);

 if (VAR_2->config->dont_use_pll)
  FUNC_2(VAR_2, 1, 0);

 return 0;
}
