
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device_shadow {scalar_t__ lock; } ;
struct video_device {TYPE_1__* fops; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* poll ) (struct file*,struct poll_table_struct*) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct file*,struct poll_table_struct*) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct video_device_shadow* FUNC_4 (struct video_device*) ;
 scalar_t__ FUNC_5 (struct video_device*) ;

__attribute__((used)) static unsigned int FUNC_6(struct file *VAR_3, struct poll_table_struct *VAR_4)
{
 struct video_device *VAR_5 = FUNC_3(VAR_3);
 struct video_device_shadow *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = VAR_1 | VAR_2;

 if (!VAR_5->fops->poll)
  return VAR_0;
 if (VAR_6 && VAR_6->lock)
  FUNC_0(VAR_6->lock);
 if (FUNC_5(VAR_5))
  VAR_7 = VAR_5->fops->poll(VAR_3, VAR_4);
 if (VAR_6 && VAR_6->lock)
  FUNC_1(VAR_6->lock);
 return VAR_7;
}
