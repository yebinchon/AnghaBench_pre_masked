
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct av7110 {int (* fe_set_frontend ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;struct dvb_frontend_parameters saved_fe_params; } ;
struct TYPE_2__ {struct av7110* priv; } ;


 int FUNC_0 (struct av7110*,int ) ;
 int FUNC_1 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, struct dvb_frontend_parameters* VAR_1)
{
 struct av7110* VAR_2 = VAR_0->dvb->priv;

 int VAR_3 = FUNC_0(VAR_2, 0);
 if (!VAR_3) {
  VAR_2->saved_fe_params = *VAR_1;
  VAR_3 = VAR_2->fe_set_frontend(VAR_0, VAR_1);
 }
 return VAR_3;
}
