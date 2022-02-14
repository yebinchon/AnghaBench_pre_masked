
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {scalar_t__ tune_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3, struct dvb_frontend_parameters *VAR_4)
{
 struct dib0090_state *VAR_5 = VAR_3->tuner_priv;
 uint32_t VAR_6;

 VAR_5->tune_state = VAR_0;

 do {
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6 != VAR_2)
   FUNC_1(VAR_6 / 10);
  else
   break;
 } while (VAR_5->tune_state != VAR_1);

 return 0;
}
