
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lgdt3305_state {TYPE_1__* cfg; } ;
struct lgdt3305_reg {int reg; int val; } ;
struct dvb_frontend {struct lgdt3305_state* demodulator_priv; } ;
struct TYPE_2__ {int demod_chip; } ;


 int FUNC_0 (struct lgdt3305_reg*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct lgdt3305_state*) ;
 int FUNC_4 (struct lgdt3305_state*,struct lgdt3305_reg*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1)
{
 struct lgdt3305_state *VAR_2 = VAR_1->demodulator_priv;
 int VAR_3;

 static struct lgdt3305_reg VAR_4[] = {
  { .reg = 136, .val = 0x03, },
  { .reg = 0x000d, .val = 0x02, },
  { .reg = 0x000e, .val = 0x02, },
  { .reg = 140, .val = 0x32, },
  { .reg = 139, .val = 0xc4, },
  { .reg = 144, .val = 0x00, },
  { .reg = 143, .val = 0x00, },
  { .reg = 142, .val = 0x00, },
  { .reg = 141, .val = 0x00, },
  { .reg = 145, .val = 0xf9, },
  { .reg = 0x0112, .val = 0x17, },
  { .reg = 0x0113, .val = 0x15, },
  { .reg = 0x0114, .val = 0x18, },
  { .reg = 0x0115, .val = 0xff, },
  { .reg = 0x0116, .val = 0x3c, },
  { .reg = 0x0214, .val = 0x67, },
  { .reg = 0x0424, .val = 0x8d, },
  { .reg = 0x0427, .val = 0x12, },
  { .reg = 0x0428, .val = 0x4f, },
  { .reg = 132, .val = 0x80, },
  { .reg = 131, .val = 0x00, },
  { .reg = 0x030a, .val = 0x08, },
  { .reg = 0x030b, .val = 0x9b, },
  { .reg = 0x030d, .val = 0x00, },
  { .reg = 0x030e, .val = 0x1c, },
  { .reg = 0x0314, .val = 0xe1, },
  { .reg = 0x000d, .val = 0x82, },
  { .reg = 128, .val = 0x5b, },
  { .reg = 128, .val = 0x5b, },
 };

 static struct lgdt3305_reg VAR_5[] = {
  { .reg = 136, .val = 0x03, },
  { .reg = 135, .val = 0xb0, },
  { .reg = 134, .val = 0x01, },
  { .reg = 137, .val = 0x6f, },
  { .reg = 133, .val = 0x03, },
  { .reg = 140, .val = 0x32, },
  { .reg = 139, .val = 0xc4, },
  { .reg = 144, .val = 0x00, },
  { .reg = 143, .val = 0x00, },
  { .reg = 142, .val = 0x00, },
  { .reg = 141, .val = 0x00, },
  { .reg = 145, .val = 0x79, },
  { .reg = 147, .val = 0x32, },
  { .reg = 146, .val = 0xc4, },
  { .reg = 149, .val = 0x0d, },
  { .reg = 148, .val = 0x30, },
  { .reg = 130, .val = 0x80, },
  { .reg = 129, .val = 0x00, },
  { .reg = 132, .val = 0x80, },
  { .reg = 131, .val = 0x00, },
  { .reg = 151, .val = 0x30, },
  { .reg = 150, .val = 0x61, },
  { .reg = 138, .val = 0xff, },
  { .reg = 128, .val = 0x1b, },
 };

 FUNC_1("\n");

 switch (VAR_2->cfg->demod_chip) {
 case 153:
  VAR_3 = FUNC_4(VAR_2, VAR_4,
       FUNC_0(VAR_4));
  break;
 case 152:
  VAR_3 = FUNC_4(VAR_2, VAR_5,
       FUNC_0(VAR_5));
  break;
 default:
  VAR_3 = -VAR_0;
 }
 if (FUNC_2(VAR_3))
  goto fail;

 VAR_3 = FUNC_3(VAR_2);
fail:
 return VAR_3;
}
