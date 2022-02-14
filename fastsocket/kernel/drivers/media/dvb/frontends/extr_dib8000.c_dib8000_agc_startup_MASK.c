
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct dib8000_state* demodulator_priv; } ;
struct TYPE_4__ {int (* agc_control ) (int *,int) ;} ;
struct dib8000_state {int tune_state; int fe; TYPE_2__ cfg; int status; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;


 scalar_t__ FUNC_0 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dib8000_state*) ;
 int FUNC_2 (struct dib8000_state*) ;
 int FUNC_3 (struct dib8000_state*,int ) ;
 int FUNC_4 (struct dib8000_state*,unsigned char) ;
 int FUNC_5 (struct dib8000_state*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_3)
{
 struct dib8000_state *VAR_4 = VAR_3->demodulator_priv;
 enum frontend_tune_state *VAR_5 = &VAR_4->tune_state;

 int VAR_6 = 0;

 switch (*VAR_5) {
 case 131:


  FUNC_3(VAR_4, VAR_1);

  if (FUNC_4(VAR_4, (unsigned char)(FUNC_0(VAR_3->dtv_property_cache.frequency / 1000))) != 0) {
   *VAR_5 = VAR_0;
   VAR_4->status = VAR_2;
   break;
  }

  VAR_6 = 70;
  *VAR_5 = 130;
  break;

 case 130:

  if (VAR_4->cfg.agc_control)
   VAR_4->cfg.agc_control(&VAR_4->fe, 1);

  FUNC_2(VAR_4);


  VAR_6 = 50;
  *VAR_5 = 129;
  break;

 case 129:

  VAR_6 = 70;

  if (FUNC_5(VAR_4))

   VAR_6 = 50;
  else
   *VAR_5 = 128;
  break;

 case 128:
  FUNC_1(VAR_4);

  if (VAR_4->cfg.agc_control)
   VAR_4->cfg.agc_control(&VAR_4->fe, 0);

  *VAR_5 = VAR_0;
  break;
 default:
  VAR_6 = FUNC_1(VAR_4);
  break;
 }
 return VAR_6;

}
