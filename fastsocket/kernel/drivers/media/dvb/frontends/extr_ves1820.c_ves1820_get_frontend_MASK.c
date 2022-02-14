
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ves1820_state {int reg0; TYPE_1__* config; } ;
struct TYPE_5__ {scalar_t__ symbol_rate; int fec_inner; scalar_t__ modulation; } ;
struct TYPE_6__ {TYPE_2__ qam; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; void* inversion; } ;
struct dvb_frontend {struct ves1820_state* demodulator_priv; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_4__ {int invert; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ves1820_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_5, struct dvb_frontend_parameters *VAR_6)
{
 struct ves1820_state* VAR_7 = VAR_5->demodulator_priv;
 int VAR_8;
 s8 VAR_9 = 0;

 VAR_8 = FUNC_1(VAR_7, 0x11);
 VAR_9 = FUNC_1(VAR_7, 0x19);
 if (VAR_4) {

  FUNC_0(VAR_8 & 2 ? "ves1820: AFC (%d) %dHz\n" :
   "ves1820: [AFC (%d) %dHz]\n", VAR_9, -((s32) VAR_6->u.qam.symbol_rate * VAR_9) >> 10);
 }

 if (!VAR_7->config->invert) {
  VAR_6->inversion = (VAR_7->reg0 & 0x20) ? VAR_2 : VAR_1;
 } else {
  VAR_6->inversion = (!(VAR_7->reg0 & 0x20)) ? VAR_2 : VAR_1;
 }

 VAR_6->u.qam.modulation = ((VAR_7->reg0 >> 2) & 7) + VAR_3;

 VAR_6->u.qam.fec_inner = VAR_0;

 VAR_6->frequency = ((VAR_6->frequency + 31250) / 62500) * 62500;
 if (VAR_8 & 2)
  VAR_6->frequency -= ((s32) VAR_6->u.qam.symbol_rate * VAR_9) >> 10;

 return 0;
}
