
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner_state {int tunerstep; int refclock; int iqsense; int bandwidth; scalar_t__ ifreq; } ;
struct stb6100_state {int bandwidth; int reference; struct tuner_state status; } ;
struct dvb_frontend {struct stb6100_state* tuner_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0)
{
 struct stb6100_state *VAR_1 = VAR_0->tuner_priv;
 struct tuner_state *VAR_2 = &VAR_1->status;

 VAR_2->tunerstep = 125000;
 VAR_2->ifreq = 0;
 VAR_2->refclock = 27000000;
 VAR_2->iqsense = 1;
 VAR_2->bandwidth = 36000;
 VAR_1->bandwidth = VAR_2->bandwidth * 1000;
 VAR_1->reference = VAR_2->refclock / 1000;


 return 0;
}
