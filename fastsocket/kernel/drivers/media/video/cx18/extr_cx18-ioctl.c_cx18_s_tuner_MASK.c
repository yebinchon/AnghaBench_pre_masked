
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct cx18 {int prio; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct cx18_open_id *VAR_6 = VAR_4;
 struct cx18 *VAR_7 = VAR_6->cx;
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_7->prio, VAR_6->prio);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->index != 0)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_2, VAR_1, VAR_5);
 return 0;
}
