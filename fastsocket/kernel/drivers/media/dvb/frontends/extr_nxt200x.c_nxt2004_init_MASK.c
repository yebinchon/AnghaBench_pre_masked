
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
 int FUNC_2 (struct nxt200x_state*) ;
 int FUNC_3 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_4 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_5 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_6 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend* VAR_1)
{
 struct nxt200x_state* VAR_2 = VAR_1->demodulator_priv;
 const struct firmware *VAR_3;
 int VAR_4;
 u8 VAR_5[3];


 VAR_5[0]=0x00;
 FUNC_5(VAR_2, 0x1E, VAR_5, 1);


 FUNC_7("nxt2004: Waiting for firmware upload (%s)...\n", VAR_0);
 VAR_4 = FUNC_9(&VAR_3, VAR_0,
          VAR_2->i2c->dev.parent);
 FUNC_7("nxt2004: Waiting for firmware upload(2)...\n");
 if (VAR_4) {
  FUNC_7("nxt2004: No firmware uploaded (timeout or file not found?)\n");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 FUNC_8(VAR_3);
 if (VAR_4) {
  FUNC_7("nxt2004: Writing firmware to device failed\n");
  return VAR_4;
 }
 FUNC_7("nxt2004: Firmware upload complete\n");


 VAR_5[0] = 0x01;
 FUNC_5(VAR_2, 0x19, VAR_5, 1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);


 VAR_5[0] = 0xFF;
 FUNC_6(VAR_2, 0x08, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x08, VAR_5, 1);


 VAR_5[0] = 0xD7;
 FUNC_5(VAR_2, 0x57, VAR_5, 1);


 VAR_5[0] = 0x07;
 VAR_5[1] = 0xfe;
 FUNC_5(VAR_2, 0x35, VAR_5, 2);
 VAR_5[0] = 0x12;
 FUNC_5(VAR_2, 0x34, VAR_5, 1);
 VAR_5[0] = 0x80;
 FUNC_5(VAR_2, 0x21, VAR_5, 1);


 VAR_5[0] = 0x21;
 FUNC_5(VAR_2, 0x0A, VAR_5, 1);


 VAR_5[0] = 0x01;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);


 VAR_5[0] = 0x7E;
 VAR_5[1] = 0x00;
 FUNC_5(VAR_2, 0xE9, VAR_5, 2);


 VAR_5[0] = 0x00;
 FUNC_5(VAR_2, 0xCC, VAR_5, 1);


 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);


 FUNC_4(VAR_2, 0x08, VAR_5, 1);
 VAR_5[0] = 0x10;
 FUNC_6(VAR_2, 0x08, VAR_5, 1);
 FUNC_4(VAR_2, 0x08, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x08, VAR_5, 1);


 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x01;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x70;
 FUNC_6(VAR_2, 0x81, VAR_5, 1);
 VAR_5[0] = 0x31; VAR_5[1] = 0x5E; VAR_5[2] = 0x66;
 FUNC_6(VAR_2, 0x82, VAR_5, 3);

 FUNC_4(VAR_2, 0x88, VAR_5, 1);
 VAR_5[0] = 0x11;
 FUNC_6(VAR_2, 0x88, VAR_5, 1);
 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x40;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);

 FUNC_3(VAR_2, 0x10, VAR_5, 1);
 VAR_5[0] = 0x10;
 FUNC_5(VAR_2, 0x10, VAR_5, 1);
 FUNC_3(VAR_2, 0x0A, VAR_5, 1);
 VAR_5[0] = 0x21;
 FUNC_5(VAR_2, 0x0A, VAR_5, 1);

 FUNC_1(VAR_2);

 VAR_5[0] = 0x21;
 FUNC_5(VAR_2, 0x0A, VAR_5, 1);
 VAR_5[0] = 0x7E;
 FUNC_5(VAR_2, 0xE9, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_5(VAR_2, 0xEA, VAR_5, 1);

 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);
 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);


 FUNC_4(VAR_2, 0x08, VAR_5, 1);
 VAR_5[0] = 0x10;
 FUNC_6(VAR_2, 0x08, VAR_5, 1);
 FUNC_4(VAR_2, 0x08, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x08, VAR_5, 1);

 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x04;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_6(VAR_2, 0x81, VAR_5, 1);
 VAR_5[0] = 0x80; VAR_5[1] = 0x00; VAR_5[2] = 0x00;
 FUNC_6(VAR_2, 0x82, VAR_5, 3);

 FUNC_4(VAR_2, 0x88, VAR_5, 1);
 VAR_5[0] = 0x11;
 FUNC_6(VAR_2, 0x88, VAR_5, 1);

 FUNC_4(VAR_2, 0x80, VAR_5, 1);
 VAR_5[0] = 0x44;
 FUNC_6(VAR_2, 0x80, VAR_5, 1);


 FUNC_3(VAR_2, 0x10, VAR_5, 1);
 VAR_5[0] = 0x12;
 FUNC_5(VAR_2, 0x10, VAR_5, 1);
 VAR_5[0] = 0x04;
 FUNC_5(VAR_2, 0x13, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_5(VAR_2, 0x16, VAR_5, 1);
 VAR_5[0] = 0x04;
 FUNC_5(VAR_2, 0x14, VAR_5, 1);
 VAR_5[0] = 0x00;
 FUNC_5(VAR_2, 0x14, VAR_5, 1);
 FUNC_5(VAR_2, 0x17, VAR_5, 1);
 FUNC_5(VAR_2, 0x14, VAR_5, 1);
 FUNC_5(VAR_2, 0x17, VAR_5, 1);

 return 0;
}
