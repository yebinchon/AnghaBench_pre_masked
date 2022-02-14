
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct vp702x_fe_state* demodulator_priv; int ops; } ;
struct vp702x_fe_state {int* lnb_buf; struct dvb_frontend fe; struct dvb_usb_device* d; } ;
struct dvb_usb_device {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vp702x_fe_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_2 ;

struct dvb_frontend * FUNC_2(struct dvb_usb_device *VAR_3)
{
 struct vp702x_fe_state *VAR_4 = FUNC_0(sizeof(struct vp702x_fe_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto error;

 VAR_4->d = VAR_3;

 FUNC_1(&VAR_4->fe.ops,&VAR_2,sizeof(struct dvb_frontend_ops));
 VAR_4->fe.demodulator_priv = VAR_4;

 VAR_4->lnb_buf[1] = VAR_1;
 VAR_4->lnb_buf[3] = 0xff;

 return &VAR_4->fe;
error:
 return ((void*)0);
}
