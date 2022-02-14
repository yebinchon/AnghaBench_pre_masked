
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_ops {int dummy; } ;
struct dvb_adapter {int dummy; } ;
struct TYPE_2__ {struct dst_state* demodulator_priv; int ops; } ;
struct dst_state {int dst_type; TYPE_1__ frontend; } ;


 int VAR_0 ;




 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_5 ;

struct dst_state *FUNC_4(struct dst_state *VAR_6, struct dvb_adapter *VAR_7)
{

 if (FUNC_1(VAR_6) < 0) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }


 switch (VAR_6->dst_type) {
 case 128:
  FUNC_3(&VAR_6->frontend.ops, &VAR_4, sizeof(struct dvb_frontend_ops));
  break;
 case 130:
  FUNC_3(&VAR_6->frontend.ops, &VAR_2, sizeof(struct dvb_frontend_ops));
  break;
 case 129:
  FUNC_3(&VAR_6->frontend.ops, &VAR_3, sizeof(struct dvb_frontend_ops));
  break;
 case 131:
  FUNC_3(&VAR_6->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
  break;
 default:
  FUNC_0(VAR_5, VAR_0, 1, "unknown DST type. please report to the LinuxTV.org DVB mailinglist.");
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 VAR_6->frontend.demodulator_priv = VAR_6;

 return VAR_6;
}
