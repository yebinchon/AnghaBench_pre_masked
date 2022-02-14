
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct av7110 {TYPE_2__* fe; } ;
struct TYPE_3__ {int (* i2c_gate_ctrl ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct saa7146_dev*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct saa7146_dev *VAR_1, u32 VAR_2)
{
 struct av7110 *VAR_3 = (struct av7110*)VAR_1->ext_priv;
 u32 VAR_4;
 u8 VAR_5[4];

 VAR_4 = (VAR_2 + 38900000 + 31250) / 62500;

 VAR_5[0] = (VAR_4 >> 8) & 0x7f;
 VAR_5[1] = VAR_4 & 0xff;
 VAR_5[2] = 0xce;

 if (VAR_2 < 45000000)
  return -VAR_0;
 else if (VAR_2 < 137000000)
  VAR_5[3] = 0x01;
 else if (VAR_2 < 403000000)
  VAR_5[3] = 0x02;
 else if (VAR_2 < 860000000)
  VAR_5[3] = 0x04;
 else
  return -VAR_0;

 if (VAR_3->fe->ops.i2c_gate_ctrl)
  VAR_3->fe->ops.i2c_gate_ctrl(VAR_3->fe, 1);
 return FUNC_1(VAR_1, 0x63, VAR_5);
}
