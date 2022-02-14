
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int revision; int reset; TYPE_2__* config; } ;
struct TYPE_3__ {int clock_khz; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dib0090_state*,int) ;
 int FUNC_2 (struct dvb_frontend*,TYPE_2__*) ;
 int FUNC_3 (struct dib0090_state*) ;
 int FUNC_4 (struct dib0090_state*,int,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_2)
{
 struct dib0090_state *VAR_3 = VAR_2->tuner_priv;
 u16 VAR_4, VAR_5, *VAR_6;

 FUNC_2(VAR_2, VAR_3->config);
 VAR_3->revision = FUNC_0(VAR_2);


 if (VAR_3->revision == 0xff)
  return -VAR_0;
 VAR_6 = (u16 *) VAR_1;
 VAR_4 = FUNC_6(VAR_6++);
 while (VAR_4) {
  VAR_5 = FUNC_6(VAR_6++);
  do {


   FUNC_4(VAR_3, VAR_5, FUNC_6(VAR_6++));
   VAR_5++;
  } while (--VAR_4);
  VAR_4 = FUNC_6(VAR_6++);
 }


 if (VAR_3->config->io.clock_khz >= 24000)
  VAR_4 = 1;
 else
  VAR_4 = 2;
 FUNC_4(VAR_3, 0x14, VAR_4);
 FUNC_5("Pll lock : %d", (FUNC_1(VAR_3, 0x1a) >> 11) & 0x1);

 VAR_3->reset = 3;

 return 0;
}
