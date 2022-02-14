
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct cx18 {int prio; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cx18*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct file *VAR_3, void *VAR_4, struct v4l2_frequency *VAR_5)
{
 struct cx18_open_id *VAR_6 = VAR_4;
 struct cx18 *VAR_7 = VAR_6->cx;
 int VAR_8;

 VAR_8 = FUNC_4(&VAR_7->prio, VAR_6->prio);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->tuner != 0)
  return -VAR_0;

 FUNC_2(VAR_7);
 FUNC_0("v4l2 ioctl: set frequency %d\n", VAR_5->frequency);
 FUNC_1(VAR_7, VAR_2, VAR_1, VAR_5);
 FUNC_3(VAR_7);
 return 0;
}
