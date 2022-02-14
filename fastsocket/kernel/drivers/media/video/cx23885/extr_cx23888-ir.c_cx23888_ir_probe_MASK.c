
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int dummy; } ;
struct v4l2_subdev {int grp_id; int name; } ;
struct cx23888_ir_state {int rx_kfifo; int tx_params_lock; int rx_params_lock; struct v4l2_subdev sd; scalar_t__ rev; int id; struct cx23885_dev* dev; int rx_kfifo_lock; } ;
struct cx23885_dev {char* name; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cx23885_dev*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 struct cx23888_ir_state* FUNC_4 (int,int ) ;
 int FUNC_5 (struct v4l2_subdev_ir_parameters*,int *,int) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (int ,int,char*,char*) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int *,struct v4l2_subdev*) ;
 int FUNC_10 (struct v4l2_subdev*,struct cx23888_ir_state*) ;
 int FUNC_11 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_ir_parameters*) ;
 int FUNC_12 (struct v4l2_subdev*,int *) ;

int FUNC_13(struct cx23885_dev *VAR_12)
{
 struct cx23888_ir_state *VAR_13;
 struct v4l2_subdev *VAR_14;
 struct v4l2_subdev_ir_parameters VAR_15;
 int VAR_16;

 VAR_13 = FUNC_4(sizeof(struct cx23888_ir_state), VAR_4);
 if (VAR_13 == ((void*)0))
  return -VAR_3;

 FUNC_8(&VAR_13->rx_kfifo_lock);
 VAR_13->rx_kfifo = FUNC_2(VAR_2, VAR_4,
          &VAR_13->rx_kfifo_lock);
 if (FUNC_0(VAR_13->rx_kfifo))
  return FUNC_0(VAR_13->rx_kfifo);

 VAR_13->dev = VAR_12;
 VAR_13->id = VAR_5;
 VAR_13->rev = 0;
 VAR_14 = &VAR_13->sd;

 FUNC_12(VAR_14, &VAR_6);
 FUNC_10(VAR_14, VAR_13);

 FUNC_7(VAR_14->name, sizeof(VAR_14->name), "%s/888-ir", VAR_12->name);
 VAR_14->grp_id = VAR_0;

 VAR_16 = FUNC_9(&VAR_12->v4l2_dev, VAR_14);
 if (VAR_16 == 0) {





  FUNC_1(VAR_12, VAR_1, 0);

  FUNC_6(&VAR_13->rx_params_lock);
  FUNC_5(&VAR_15, &VAR_7,
         sizeof(struct v4l2_subdev_ir_parameters));
  FUNC_11(VAR_14, VAR_9, VAR_10, &VAR_15);

  FUNC_6(&VAR_13->tx_params_lock);
  FUNC_5(&VAR_15, &VAR_8,
         sizeof(struct v4l2_subdev_ir_parameters));
  FUNC_11(VAR_14, VAR_9, VAR_11, &VAR_15);
 } else {
  FUNC_3(VAR_13->rx_kfifo);
 }
 return VAR_16;
}
