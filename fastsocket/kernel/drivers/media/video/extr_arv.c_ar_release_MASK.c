
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct ar_device {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct video_device*) ;
 struct ar_device* FUNC_2 (struct video_device*) ;

void FUNC_3(struct video_device *VAR_0)
{
 struct ar_device *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(&VAR_1->lock);
 FUNC_1(VAR_0);
}
