
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct bcm3510_state {int dummy; } ;
struct bcm3510_hab_cmd_set_agc {int SEL; } ;
typedef int c ;
struct TYPE_4__ {int JDEC; } ;
struct TYPE_5__ {TYPE_1__ JDEC_ca; int raw; } ;
typedef TYPE_2__ bcm3510_register_value ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct bcm3510_state*) ;
 int FUNC_1 (struct bcm3510_state*,int ,int ,int *,int,int *,int ) ;
 int FUNC_2 (struct bcm3510_state*) ;
 int FUNC_3 (struct bcm3510_state*,int,TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct bcm3510_hab_cmd_set_agc*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend* VAR_3)
{
 struct bcm3510_state* VAR_4 = VAR_3->demodulator_priv;
 bcm3510_register_value VAR_5;
 struct bcm3510_hab_cmd_set_agc VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_3(VAR_4,0xca,&VAR_5)) < 0)
  return VAR_7;

 FUNC_4("JDEC: %02x\n",VAR_5.raw);

 switch (VAR_5.JDEC_ca.JDEC) {
  case 128:
   FUNC_4("attempting to download firmware\n");
   if ((VAR_7 = FUNC_2(VAR_4)) < 0)
    return VAR_7;
  case 129:
   FUNC_4("firmware is loaded\n");
   FUNC_0(VAR_4);
   break;
  default:
   return -VAR_1;
 }

 FUNC_5(&VAR_6,0,1);
 VAR_6.SEL = 1;
 FUNC_1(VAR_4,VAR_0,VAR_2,(u8 *)&VAR_6,sizeof(VAR_6),((void*)0),0);

 return 0;
}
