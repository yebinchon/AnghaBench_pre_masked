
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lgdt3305_state {TYPE_3__* cfg; } ;
struct TYPE_4__ {int modulation; } ;
struct TYPE_5__ {TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct TYPE_6__ {int demod_chip; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct lgdt3305_state*,struct dvb_frontend_parameters*) ;
 int FUNC_2 (struct lgdt3305_state*,int,int,int) ;
 int FUNC_3 (struct lgdt3305_state*,int,int) ;

__attribute__((used)) static int FUNC_4(struct lgdt3305_state *VAR_3,
         struct dvb_frontend_parameters *VAR_4)
{
 int VAR_5, VAR_6;

 switch (VAR_4->u.vsb.modulation) {
 case 128:
  VAR_5 = 0;
  VAR_6 = 0;
  break;
 case 129:
 case 130:
  VAR_5 = 1;
  VAR_6 = 1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0("lockdten = %d, acqen = %d\n", VAR_5, VAR_6);


 switch (VAR_3->cfg->demod_chip) {
 case 132:
  FUNC_3(VAR_3, 0x0314, 0xe1 | VAR_5 << 1);
  FUNC_2(VAR_3, 0x030e, 2, VAR_6);
  break;
 case 131:
  FUNC_3(VAR_3, VAR_2, 0xe1 | VAR_5 << 1);
  FUNC_2(VAR_3, VAR_1, 2, VAR_6);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_3, VAR_4);
}
