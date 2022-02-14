
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lgdt330x_state {int snr; } ;
struct TYPE_2__ {int (* read_snr ) (struct dvb_frontend*,int*) ;} ;
struct dvb_frontend {TYPE_1__ ops; scalar_t__ demodulator_priv; } ;


 int FUNC_0 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{



 struct lgdt330x_state* VAR_2 = (struct lgdt330x_state*) VAR_0->demodulator_priv;
 u16 VAR_3;
 int VAR_4;

 VAR_4 = VAR_0->ops.read_snr(VAR_0, &VAR_3);
 if (VAR_4 != 0)
  return VAR_4;


 if (VAR_2->snr >= 8960 * 0x10000)
  *VAR_1 = 0xffff;
 else
  *VAR_1 = VAR_2->snr / 8960;

 return 0;
}
