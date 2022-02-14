
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_state {struct cx25840_ir_state* ir_state; int c; } ;
struct cx25840_ir_state {int tx_params_lock; int rx_params_lock; int c; int rx_kfifo; int rx_kfifo_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct cx25840_ir_state*) ;
 struct cx25840_ir_state* FUNC_6 (int,int ) ;
 int FUNC_7 (struct v4l2_subdev_ir_parameters*,int *,int) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 struct cx25840_state* FUNC_10 (struct v4l2_subdev*) ;
 int VAR_9 ;
 int FUNC_11 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_ir_parameters*) ;

int FUNC_12(struct v4l2_subdev *VAR_10)
{
 struct cx25840_state *VAR_11 = FUNC_10(VAR_10);
 struct cx25840_ir_state *VAR_12;
 struct v4l2_subdev_ir_parameters VAR_13;


 if (!(FUNC_2(VAR_11) || FUNC_3(VAR_11)))
  return 0;

 VAR_12 = FUNC_6(sizeof(struct cx25840_ir_state), VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 FUNC_9(&VAR_12->rx_kfifo_lock);
 VAR_12->rx_kfifo = FUNC_4(VAR_1, VAR_3,
          &VAR_12->rx_kfifo_lock);
 if (FUNC_0(VAR_12->rx_kfifo)) {
  FUNC_5(VAR_12);
  return -VAR_2;
 }

 VAR_12->c = VAR_11->c;
 VAR_11->ir_state = VAR_12;


 if (FUNC_2(VAR_11) || FUNC_3(VAR_11))
  FUNC_1(VAR_12->c, VAR_0, VAR_4);
 else
  FUNC_1(VAR_12->c, VAR_0, 0);

 FUNC_8(&VAR_12->rx_params_lock);
 FUNC_7(&VAR_13, &VAR_5,
         sizeof(struct v4l2_subdev_ir_parameters));
 FUNC_11(VAR_10, VAR_7, VAR_8, &VAR_13);

 FUNC_8(&VAR_12->tx_params_lock);
 FUNC_7(&VAR_13, &VAR_6,
         sizeof(struct v4l2_subdev_ir_parameters));
 FUNC_11(VAR_10, VAR_7, VAR_9, &VAR_13);

 return 0;
}
