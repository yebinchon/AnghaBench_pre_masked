
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct itd1000_state {int dummy; } ;
struct TYPE_3__ {int symbol_rate; } ;
struct TYPE_4__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int frequency; } ;
struct dvb_frontend {struct itd1000_state* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct itd1000_state*,int ) ;
 int FUNC_1 (struct itd1000_state*,int ) ;
 int FUNC_2 (struct itd1000_state*,int ) ;
 int FUNC_3 (struct itd1000_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1, struct dvb_frontend_parameters *VAR_2)
{
 struct itd1000_state *VAR_3 = VAR_1->tuner_priv;
 u8 VAR_4;

 FUNC_1(VAR_3, VAR_2->frequency);
 FUNC_2(VAR_3, VAR_2->u.qpsk.symbol_rate);

 VAR_4 = FUNC_0(VAR_3, VAR_0) & 0x7f;
 FUNC_3(VAR_3, VAR_0, VAR_4 | (1 << 7));
 FUNC_3(VAR_3, VAR_0, VAR_4);

 return 0;
}
