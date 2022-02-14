
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nxt200x_state {TYPE_2__* i2c; } ;
struct firmware {int dummy; } ;
struct dvb_frontend {struct nxt200x_state* demodulator_priv; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,struct firmware const*) ;
 int FUNC_1 (struct nxt200x_state*) ;
 int FUNC_2 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend* VAR_1)
{
 struct nxt200x_state* VAR_2 = VAR_1->demodulator_priv;
 const struct firmware *VAR_3;
 int VAR_4;
 u8 VAR_5[2];


 FUNC_3("nxt2002: Waiting for firmware upload (%s)...\n", VAR_0);
 VAR_4 = FUNC_5(&VAR_3, VAR_0,
          VAR_2->i2c->dev.parent);
 FUNC_3("nxt2002: Waiting for firmware upload(2)...\n");
 if (VAR_4) {
  FUNC_3("nxt2002: No firmware uploaded (timeout or file not found?)\n");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_3("nxt2002: Writing firmware to device failed\n");
  return VAR_4;
 }
 FUNC_3("nxt2002: Firmware upload complete\n");


 FUNC_1(VAR_2);


 VAR_5[0]=0x00;
 FUNC_2(VAR_2, 0x2B, VAR_5, 1);


 FUNC_1(VAR_2);


 VAR_5[0] = 0x0F;
 FUNC_2(VAR_2, 0x08, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_2(VAR_2, 0x08, VAR_5, 1);


 VAR_5[0] = 0xF1;
 FUNC_2(VAR_2, 0x57, VAR_5, 1);


 VAR_5[0] = 0x20;
 FUNC_2(VAR_2, 0x09, VAR_5, 1);


 VAR_5[0] = 0x7E;
 VAR_5[1] = 0x00;
 FUNC_2(VAR_2, 0xE9, VAR_5, 2);


 VAR_5[0] = 0x00;
 FUNC_2(VAR_2, 0xCC, VAR_5, 1);

 return 0;
}
