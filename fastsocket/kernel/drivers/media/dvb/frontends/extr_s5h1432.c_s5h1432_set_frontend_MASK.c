
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct s5h1432_state {scalar_t__ current_frequency; } ;
struct TYPE_7__ {int bandwidth; } ;
struct TYPE_8__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {scalar_t__ frequency; TYPE_4__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct s5h1432_state* demodulator_priv; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct s5h1432_state*,int ,int,int) ;
 int FUNC_4 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_2,
    struct dvb_frontend_parameters *VAR_3)
{
 u32 VAR_4 = 8;
 struct s5h1432_state *VAR_5 = VAR_2->demodulator_priv;

 if (VAR_3->frequency == VAR_5->current_frequency) {


 } else {
  VAR_2->ops.tuner_ops.set_params(VAR_2, VAR_3);
  FUNC_0(300);
  FUNC_2(VAR_2, VAR_4);
  switch (VAR_3->u.ofdm.bandwidth) {
  case 130:
   VAR_4 = 6;
   FUNC_1(VAR_2, VAR_0);
   break;
  case 129:
   VAR_4 = 7;
   FUNC_1(VAR_2, VAR_0);
   break;
  case 128:
   VAR_4 = 8;
   FUNC_1(VAR_2, VAR_0);
   break;
  default:
   return 0;
  }


  FUNC_0(30);
  FUNC_3(VAR_5, VAR_1, 0x09, 0x1a);
  FUNC_0(30);
  FUNC_3(VAR_5, VAR_1, 0x09, 0x1b);

  FUNC_2(VAR_2, VAR_4);
  switch (VAR_3->u.ofdm.bandwidth) {
  case 130:
   VAR_4 = 6;
   FUNC_1(VAR_2, VAR_0);
   break;
  case 129:
   VAR_4 = 7;
   FUNC_1(VAR_2, VAR_0);
   break;
  case 128:
   VAR_4 = 8;
   FUNC_1(VAR_2, VAR_0);
   break;
  default:
   return 0;
  }


  FUNC_0(30);
  FUNC_3(VAR_5, VAR_1, 0x09, 0x1a);
  FUNC_0(30);
  FUNC_3(VAR_5, VAR_1, 0x09, 0x1b);

 }

 VAR_5->current_frequency = VAR_3->frequency;

 return 0;
}
