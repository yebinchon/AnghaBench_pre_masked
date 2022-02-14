
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp887x_state {int initialised; TYPE_1__* config; } ;
struct firmware {int dummy; } ;
struct dvb_frontend {struct sp887x_state* demodulator_priv; } ;
struct TYPE_2__ {int (* request_firmware ) (struct dvb_frontend*,struct firmware const**,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct dvb_frontend*,struct firmware const*) ;
 int FUNC_3 (struct sp887x_state*,int,int) ;
 int FUNC_4 (struct dvb_frontend*,struct firmware const**,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend* VAR_1)
{
 struct sp887x_state* VAR_2 = VAR_1->demodulator_priv;
 const struct firmware *VAR_3 = ((void*)0);
 int VAR_4;

 if (!VAR_2->initialised) {

  FUNC_0("sp887x: waiting for firmware upload (%s)...\n", VAR_0);
  VAR_4 = VAR_2->config->request_firmware(VAR_1, &VAR_3, VAR_0);
  if (VAR_4) {
   FUNC_0("sp887x: no firmware upload (timeout or file not found?)\n");
   return VAR_4;
  }

  VAR_4 = FUNC_2(VAR_1, VAR_3);
  FUNC_1(VAR_3);
  if (VAR_4) {
   FUNC_0("sp887x: writing firmware to device failed\n");
   return VAR_4;
  }
  FUNC_0("sp887x: firmware upload complete\n");
  VAR_2->initialised = 1;
 }


 FUNC_3(VAR_2, 0xc18, 0x00d);

 return 0;
}
