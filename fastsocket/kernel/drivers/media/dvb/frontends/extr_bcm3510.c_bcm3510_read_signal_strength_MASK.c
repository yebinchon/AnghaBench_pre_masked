
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct TYPE_2__ {int SIGNAL; } ;
struct bcm3510_state {TYPE_1__ status2; } ;
typedef int s32 ;


 int FUNC_0 (struct bcm3510_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct bcm3510_state* VAR_2 = VAR_0->demodulator_priv;
 s32 VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->status2.SIGNAL;

 if (VAR_3 > 190)
  VAR_3 = 190;
 if (VAR_3 < 90)
  VAR_3 = 90;

 VAR_3 -= 90;
 VAR_3 = VAR_3 * 0xff / 100;

 *VAR_1 = (VAR_3 << 8) | VAR_3;
 return 0;
}
