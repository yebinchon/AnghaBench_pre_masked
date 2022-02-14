
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5h1420_state {int CON_1_val; TYPE_1__* config; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;
struct TYPE_2__ {int serial_mpeg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct s5h1420_state*) ;
 int FUNC_2 (struct s5h1420_state*,int,int) ;

__attribute__((used)) static int FUNC_3 (struct dvb_frontend* VAR_0)
{
 struct s5h1420_state* VAR_1 = VAR_0->demodulator_priv;


 VAR_1->CON_1_val = VAR_1->config->serial_mpeg << 4;
 FUNC_2(VAR_1, 0x02, VAR_1->CON_1_val);
 FUNC_0(10);
 FUNC_1(VAR_1);

 return 0;
}
