
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct cx23888_ir_state {struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct cx23885_dev*,int ) ;
 struct cx23888_ir_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, u8 *VAR_2, size_t VAR_3,
          ssize_t *VAR_4)
{
 struct cx23888_ir_state *VAR_5 = FUNC_1(VAR_1);
 struct cx23885_dev *VAR_6 = VAR_5->dev;

 FUNC_0(VAR_6, VAR_0);
 *VAR_4 = VAR_3;
 return 0;
}
