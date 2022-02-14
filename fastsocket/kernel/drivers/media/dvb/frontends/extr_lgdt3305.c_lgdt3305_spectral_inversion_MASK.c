
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
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lgdt3305_state *VAR_3,
           struct dvb_frontend_parameters *VAR_4,
           int VAR_5)
{
 int VAR_6;

 FUNC_0("(%d)\n", VAR_5);

 switch (VAR_4->u.vsb.modulation) {
 case 128:
  VAR_6 = FUNC_1(VAR_3, VAR_1,
      VAR_5 ? 0xf9 : 0x79);
  break;
 case 129:
 case 130:
  VAR_6 = FUNC_1(VAR_3, VAR_2,
      VAR_5 ? 0xfd : 0xff);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
