
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int modulation; int symbol_rate; int fec_inner; } ;
struct TYPE_6__ {int bandwidth; } ;
struct TYPE_5__ {int symbol_rate; int fec_inner; } ;
struct TYPE_8__ {TYPE_3__ qam; TYPE_2__ ofdm; TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_4__ u; int inversion; int frequency; } ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {scalar_t__ dst_type; int type_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,char*,int ) ;
 int FUNC_1 (struct dst_state*,int ) ;
 int FUNC_2 (struct dst_state*,int ) ;
 int FUNC_3 (struct dst_state*,int ) ;
 int FUNC_4 (struct dst_state*,int ) ;
 int FUNC_5 (struct dst_state*,int ) ;
 int FUNC_6 (struct dst_state*) ;
 int FUNC_7 (struct dst_state*,int ) ;
 int FUNC_8 (struct dvb_frontend*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_7, struct dvb_frontend_parameters *VAR_8)
{
 int VAR_9 = -VAR_5;
 struct dst_state *VAR_10 = VAR_7->demodulator_priv;

 if (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_3(VAR_10, VAR_8->frequency);
  if(VAR_9 != 0)
   return VAR_9;
  FUNC_0(VAR_6, VAR_0, 1, "Set Frequency=[%d]", VAR_8->frequency);

  if (VAR_10->dst_type == VAR_3) {
   if (VAR_10->type_flags & VAR_1)
    FUNC_4(VAR_10, VAR_8->inversion);
   FUNC_2(VAR_10, VAR_8->u.qpsk.fec_inner);
   FUNC_7(VAR_10, VAR_8->u.qpsk.symbol_rate);
   FUNC_6(VAR_10);
   FUNC_0(VAR_6, VAR_0, 1, "Set Symbolrate=[%d]", VAR_8->u.qpsk.symbol_rate);

  } else if (VAR_10->dst_type == VAR_4)
   FUNC_1(VAR_10, VAR_8->u.ofdm.bandwidth);
  else if (VAR_10->dst_type == VAR_2) {
   FUNC_2(VAR_10, VAR_8->u.qam.fec_inner);
   FUNC_7(VAR_10, VAR_8->u.qam.symbol_rate);
   FUNC_5(VAR_10, VAR_8->u.qam.modulation);
  }
  VAR_9 = FUNC_8(VAR_7);
 }

 return VAR_9;
}
