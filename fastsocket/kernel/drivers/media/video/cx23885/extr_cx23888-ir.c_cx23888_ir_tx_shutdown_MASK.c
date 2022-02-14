
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int shutdown; } ;
struct cx23888_ir_state {int tx_params_lock; TYPE_1__ tx_params; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int) ;
 int FUNC_1 (struct cx23885_dev*,int) ;
 int FUNC_2 (struct cx23885_dev*,int ,int ) ;
 int FUNC_3 (struct cx23885_dev*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cx23888_ir_state* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_2)
{
 struct cx23888_ir_state *VAR_3 = FUNC_6(VAR_2);
 struct cx23885_dev *VAR_4 = VAR_3->dev;

 FUNC_4(&VAR_3->tx_params_lock);


 FUNC_3(VAR_4, 0);
 FUNC_0(VAR_4, 0);
 FUNC_1(VAR_4, 0);
 FUNC_2(VAR_4, VAR_0, VAR_1);

 VAR_3->tx_params.shutdown = 1;

 FUNC_5(&VAR_3->tx_params_lock);
 return 0;
}
