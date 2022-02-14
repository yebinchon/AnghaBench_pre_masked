
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* dvb; } ;
struct tda10021_state {int reg0; TYPE_3__* config; TYPE_2__ frontend; } ;
struct TYPE_9__ {scalar_t__ symbol_rate; int fec_inner; scalar_t__ modulation; } ;
struct TYPE_10__ {TYPE_4__ qam; } ;
struct dvb_frontend_parameters {int frequency; TYPE_5__ u; int inversion; } ;
struct dvb_frontend {struct tda10021_state* demodulator_priv; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_8__ {scalar_t__ invert; } ;
struct TYPE_6__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (struct tda10021_state*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_5, struct dvb_frontend_parameters *VAR_6)
{
 struct tda10021_state* VAR_7 = VAR_5->demodulator_priv;
 int VAR_8;
 s8 VAR_9 = 0;

 VAR_8 = FUNC_1(VAR_7, 0x11);
 VAR_9 = FUNC_1(VAR_7, 0x19);
 if (VAR_4) {

  FUNC_0(VAR_8 & 2 ? "DVB: TDA10021(%d): AFC (%d) %dHz\n" :
      "DVB: TDA10021(%d): [AFC (%d) %dHz]\n",
   VAR_7->frontend.dvb->num, VAR_9,
         -((s32)VAR_6->u.qam.symbol_rate * VAR_9) >> 10);
 }

 VAR_6->inversion = ((VAR_7->reg0 & 0x20) == 0x20) ^ (VAR_7->config->invert != 0) ? VAR_2 : VAR_1;
 VAR_6->u.qam.modulation = ((VAR_7->reg0 >> 2) & 7) + VAR_3;

 VAR_6->u.qam.fec_inner = VAR_0;
 VAR_6->frequency = ((VAR_6->frequency + 31250) / 62500) * 62500;

 if (VAR_8 & 2)
  VAR_6->frequency -= ((s32)VAR_6->u.qam.symbol_rate * VAR_9) >> 10;

 return 0;
}
