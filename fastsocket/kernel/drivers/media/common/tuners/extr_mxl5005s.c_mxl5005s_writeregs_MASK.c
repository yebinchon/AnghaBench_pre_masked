
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; } ;


 int FUNC_0 (struct dvb_frontend*,int,int,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, u8 *VAR_1,
 u8 *VAR_2, u8 VAR_3)
{
 int VAR_4 = 0, VAR_5;

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);

 for (VAR_5 = 0 ; VAR_5 < VAR_3-1; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_5], VAR_2[VAR_5], 0);
  if (VAR_4 < 0)
   break;
 }

 VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_5], VAR_2[VAR_5], 1);

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);

 return VAR_4;
}
