
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct drx397xD_state* demodulator_priv; } ;
struct TYPE_3__ {int d00; } ;
struct TYPE_4__ {TYPE_1__ ifagc; } ;
struct drx397xD_state {TYPE_2__ config; } ;


 int FUNC_0 (struct drx397xD_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct drx397xD_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 if (VAR_2->config.ifagc.d00 == 2) {
  *VAR_1 = 0xffff;
  return 0;
 }
 VAR_3 = FUNC_0(VAR_2, 0x0c20035);
 if (VAR_3 < 0) {
  *VAR_1 = 0;
  return 0;
 }
 VAR_3 &= 0x3ff;
 *VAR_1 = ~(7720 + (VAR_3 * 30744 >> 10));

 return 0;
}
