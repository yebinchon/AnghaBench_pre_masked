
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int modulation; } ;
struct TYPE_6__ {TYPE_2__ vsb; } ;
struct dvb_frontend_parameters {TYPE_3__ u; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx23885_tsport {struct cx23885_dev* dev; } ;
struct cx23885_dev {int board; } ;
struct TYPE_4__ {struct cx23885_tsport* priv; } ;





 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cx23885_dev*,int ) ;
 int FUNC_1 (struct cx23885_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
        struct dvb_frontend_parameters *VAR_3)
{
 struct cx23885_tsport *VAR_4 = VAR_2->dvb->priv;
 struct cx23885_dev *VAR_5 = VAR_4->dev;

 switch (VAR_5->board) {
 case 133:
  switch (VAR_3->u.vsb.modulation) {
  case 128:
   FUNC_0(VAR_5, VAR_1);
   break;
  case 129:
  case 130:
  default:
   FUNC_1(VAR_5, VAR_1);
   break;
  }
  break;
 case 131:
 case 132:

  FUNC_1(VAR_5, VAR_0);
  break;
 }
 return 0;
}
