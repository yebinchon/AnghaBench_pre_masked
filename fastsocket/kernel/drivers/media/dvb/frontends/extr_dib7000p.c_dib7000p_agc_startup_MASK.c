
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct TYPE_4__ {int (* agc_control ) (int *,int) ;} ;
struct dib7000p_state {int agc_state; int demod; TYPE_2__ cfg; TYPE_1__* current_agc; } ;
struct TYPE_3__ {int wbd_sel; int wbd_alpha; int setup; int perform_agc_softsplit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dib7000p_state*) ;
 int FUNC_2 (struct dib7000p_state*,int) ;
 int FUNC_3 (struct dib7000p_state*) ;
 int FUNC_4 (struct dib7000p_state*,int ) ;
 int FUNC_5 (struct dib7000p_state*,int ) ;
 int FUNC_6 (struct dib7000p_state*,int ) ;
 int FUNC_7 (struct dib7000p_state*) ;
 int FUNC_8 (struct dib7000p_state*,int,int) ;
 int FUNC_9 (char*,struct dvb_frontend*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(struct dvb_frontend *VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct dib7000p_state *VAR_4 = VAR_2->demodulator_priv;
 int VAR_5 = -1;
 u8 *VAR_6 = &VAR_4->agc_state;
 u8 VAR_7;

 switch (VAR_4->agc_state) {
  case 0:

   FUNC_6(VAR_4, VAR_0);
   FUNC_4(VAR_4, VAR_1);
   FUNC_1(VAR_4);

   if (FUNC_5(VAR_4, FUNC_0(VAR_3->frequency/1000)) != 0)
    return -1;

   VAR_5 = 7;
   (*VAR_6)++;
   break;

  case 1:

   if (VAR_4->cfg.agc_control)
    VAR_4->cfg.agc_control(&VAR_4->demod, 1);

   FUNC_8(VAR_4, 78, 32768);
   if (!VAR_4->current_agc->perform_agc_softsplit) {


    FUNC_8(VAR_4, 106, (VAR_4->current_agc->wbd_sel << 13) | (VAR_4->current_agc->wbd_alpha << 9) | (1 << 8));
    (*VAR_6)++;
    VAR_5 = 5;
   } else {

    (*VAR_6) = 4;

    VAR_5 = 7;
   }

   FUNC_3(VAR_4);
   break;

  case 2:
   FUNC_8(VAR_4, 75, VAR_4->current_agc->setup | (1 << 4));
   FUNC_8(VAR_4, 106, (VAR_4->current_agc->wbd_sel << 13) | (2 << 9) | (0 << 8));
   (*VAR_6)++;
   VAR_5 = 14;
   break;

 case 3:
   VAR_7 = (u8)FUNC_2(VAR_4, 396);
   FUNC_8(VAR_4, 78, FUNC_2(VAR_4, 394));

   FUNC_8(VAR_4, 75, VAR_4->current_agc->setup);
   FUNC_8(VAR_4, 106, (VAR_4->current_agc->wbd_sel << 13) | (VAR_4->current_agc->wbd_alpha << 9) | VAR_7);

   FUNC_3(VAR_4);

   FUNC_9( "SPLIT %p: %hd", VAR_2, VAR_7);

   (*VAR_6)++;
   VAR_5 = 5;
   break;

  case 4:

   VAR_5 = 7;

   if (FUNC_7(VAR_4))

    VAR_5 = 5;
   else
    (*VAR_6)++;
   break;

  case 5:
   if (VAR_4->cfg.agc_control)
    VAR_4->cfg.agc_control(&VAR_4->demod, 0);
   (*VAR_6)++;
   break;
  default:
   break;
 }
 return VAR_5;
}
