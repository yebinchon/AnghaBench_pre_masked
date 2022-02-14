
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lgdt3305_state {int dummy; } ;
struct TYPE_3__ {int modulation; } ;
struct TYPE_4__ {TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct lgdt3305_state *VAR_1,
      struct dvb_frontend_parameters *VAR_2)
{
 int VAR_3;

 switch (VAR_2->u.vsb.modulation) {
 case 128:
  VAR_3 = 0;
  break;
 case 129:
 case 130:
  VAR_3 = 1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0("val = %d\n", VAR_3);

 return FUNC_1(VAR_1, 0x043f, 2, VAR_3);
}
