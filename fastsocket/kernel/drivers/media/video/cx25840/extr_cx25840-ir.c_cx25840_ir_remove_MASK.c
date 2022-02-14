
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx25840_state {int * ir_state; } ;
struct cx25840_ir_state {int rx_kfifo; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cx25840_ir_state*) ;
 struct cx25840_ir_state* FUNC_4 (struct v4l2_subdev*) ;
 struct cx25840_state* FUNC_5 (struct v4l2_subdev*) ;

int FUNC_6(struct v4l2_subdev *VAR_1)
{
 struct cx25840_state *VAR_2 = FUNC_5(VAR_1);
 struct cx25840_ir_state *VAR_3 = FUNC_4(VAR_1);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_2(VAR_3->rx_kfifo);
 FUNC_3(VAR_3);
 VAR_2->ir_state = ((void*)0);
 return 0;
}
