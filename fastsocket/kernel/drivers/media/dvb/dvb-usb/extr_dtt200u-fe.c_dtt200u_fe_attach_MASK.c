
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; int ops; } ;
struct dtt200u_fe_state {struct dvb_frontend frontend; struct dvb_usb_device* d; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct dtt200u_fe_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;

struct dvb_frontend* FUNC_3(struct dvb_usb_device *VAR_2)
{
 struct dtt200u_fe_state* VAR_3 = ((void*)0);


 VAR_3 = FUNC_1(sizeof(struct dtt200u_fe_state), VAR_0);
 if (VAR_3 == ((void*)0))
  goto error;

 FUNC_0("attaching frontend dtt200u\n");

 VAR_3->d = VAR_2;

 FUNC_2(&VAR_3->frontend.ops,&VAR_1,sizeof(struct dvb_frontend_ops));
 VAR_3->frontend.demodulator_priv = VAR_3;

 return &VAR_3->frontend;
error:
 return ((void*)0);
}
