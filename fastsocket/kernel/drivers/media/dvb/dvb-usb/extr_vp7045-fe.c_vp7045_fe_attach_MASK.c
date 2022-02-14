
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct vp7045_fe_state* demodulator_priv; int ops; } ;
struct vp7045_fe_state {struct dvb_frontend fe; struct dvb_usb_device* d; } ;
struct dvb_usb_device {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 struct vp7045_fe_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;

struct dvb_frontend * FUNC_2(struct dvb_usb_device *VAR_2)
{
 struct vp7045_fe_state *VAR_3 = FUNC_0(sizeof(struct vp7045_fe_state), VAR_0);
 if (VAR_3 == ((void*)0))
  goto error;

 VAR_3->d = VAR_2;
 FUNC_1(&VAR_3->fe.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_3->fe.demodulator_priv = VAR_3;

 return &VAR_3->fe;
error:
 return ((void*)0);
}
