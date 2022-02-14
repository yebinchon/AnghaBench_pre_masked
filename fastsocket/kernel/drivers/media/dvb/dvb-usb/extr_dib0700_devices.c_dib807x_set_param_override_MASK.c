
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_usb_adapter {struct dib0700_adapter_state* priv; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct dib0700_adapter_state {int (* set_param_save ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_2__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (int) ;


 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0,
  struct dvb_frontend_parameters *VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;
 struct dib0700_adapter_state *VAR_3 = VAR_2->priv;

 u16 VAR_4 = FUNC_2(VAR_0);
 u8 VAR_5 = FUNC_0(VAR_1->frequency/1000);
 switch (VAR_5) {
 case 128:
  VAR_4 += 750;
  break;
 case 129:
 default:
  VAR_4 += 250; break;
 }
 FUNC_1("WBD for DiB8000: %d\n", VAR_4);
 FUNC_3(VAR_0, VAR_4);

 return VAR_3->set_param_save(VAR_0, VAR_1);
}
