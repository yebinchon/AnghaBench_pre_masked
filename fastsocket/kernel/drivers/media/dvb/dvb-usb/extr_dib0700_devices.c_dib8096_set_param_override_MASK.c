
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
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_2__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int *,int *,int*,int*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,int ) ;
 int FUNC_8 (struct dvb_frontend*) ;
 int FUNC_9 (struct dvb_frontend*,int,int ,int) ;
 int FUNC_10 (struct dvb_frontend*,int ) ;
 int FUNC_11 (struct dvb_frontend*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_14(struct dvb_frontend *VAR_7,
  struct dvb_frontend_parameters *VAR_8)
{
    struct dvb_usb_adapter *VAR_9 = VAR_7->dvb->priv;
    struct dib0700_adapter_state *VAR_10 = VAR_9->priv;
    u8 VAR_11 = FUNC_0(VAR_8->frequency/1000);
    u16 VAR_12;
    int VAR_13 = 0;
    enum frontend_tune_state VAR_14 = VAR_6;
    u16 VAR_15, VAR_16;

    VAR_13 = VAR_10->set_param_save(VAR_7, VAR_8);
    if (VAR_13 < 0)
 return VAR_13;

    switch (VAR_11) {
    case 128:
     VAR_12 = 100;
     break;
    case 129:
     VAR_12 = 550;
     break;
    default:
     VAR_12 = 0;
     break;
    }
    VAR_12 += (FUNC_5(VAR_7) * 8 * 18 / 33 + 1) / 2;
    FUNC_11(VAR_7, VAR_12);


    if (VAR_11 == VAR_0) {
 FUNC_1("tuning in CBAND - soft-AGC startup\n");

 FUNC_7(VAR_7, VAR_1);
 do {
  VAR_13 = FUNC_2(VAR_7);
  FUNC_12(VAR_13);
  VAR_14 = FUNC_4(VAR_7);
  if (VAR_14 == VAR_2)
   FUNC_9(VAR_7, 6, 0, 1);
  else if (VAR_14 == VAR_3) {
   FUNC_3(VAR_7, ((void*)0), ((void*)0), &VAR_16, &VAR_15);
   if (VAR_16 == 0)
    FUNC_9(VAR_7, 6, 0, 0);
  }
 } while (VAR_14 < VAR_4);
 FUNC_6(VAR_7);
 FUNC_8(VAR_7);
 FUNC_10(VAR_7, VAR_5);
    } else {
 FUNC_1("not tuning in CBAND - standard AGC startup\n");
 FUNC_6(VAR_7);
    }

    return 0;
}
