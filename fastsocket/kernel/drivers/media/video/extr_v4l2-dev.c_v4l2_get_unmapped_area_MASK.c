
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* fops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct video_device* FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct video_device*) ;

__attribute__((used)) static unsigned long FUNC_3(struct file *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5,
  unsigned long VAR_6)
{
 struct video_device *VAR_7 = FUNC_1(VAR_2);

 if (!VAR_7->fops->get_unmapped_area)
  return -VAR_1;
 if (FUNC_2(VAR_7))
  return -VAR_0;
 return VAR_7->fops->get_unmapped_area(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
