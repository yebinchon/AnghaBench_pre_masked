
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int v4l2_dev; } ;
struct cx23885_dev {unsigned long ir_rx_notifications; int ir_rx_work; struct v4l2_subdev* sd_cx25840; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long*) ;
 struct cx23885_dev* FUNC_3 (int ) ;

void FUNC_4(struct v4l2_subdev *VAR_8, u32 VAR_9)
{
 struct cx23885_dev *VAR_10 = FUNC_3(VAR_8->v4l2_dev);
 unsigned long *VAR_11 = &VAR_10->ir_rx_notifications;

 if (VAR_9 & VAR_5)
  FUNC_2(VAR_1, VAR_11);
 if (VAR_9 & VAR_4)
  FUNC_2(VAR_0, VAR_11);
 if (VAR_9 & VAR_6)
  FUNC_2(VAR_2, VAR_11);
 if (VAR_9 & VAR_7)
  FUNC_2(VAR_3, VAR_11);





 if (VAR_8 == VAR_10->sd_cx25840)
  FUNC_0(&VAR_10->ir_rx_work);
 else
  FUNC_1(&VAR_10->ir_rx_work);
}
