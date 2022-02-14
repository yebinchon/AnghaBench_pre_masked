
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {scalar_t__ index; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {scalar_t__ ctl_ainput; } ;
struct TYPE_2__ {scalar_t__ amux; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cx231xx*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_2;
 struct cx231xx *VAR_5 = VAR_4->dev;
 int VAR_6 = 0;


 if (VAR_3->index != VAR_5->ctl_ainput)
  return -VAR_0;

 VAR_5->ctl_ainput = FUNC_0(VAR_3->index)->amux;
 VAR_6 = FUNC_1(VAR_5, VAR_5->ctl_ainput);

 return VAR_6;
}
