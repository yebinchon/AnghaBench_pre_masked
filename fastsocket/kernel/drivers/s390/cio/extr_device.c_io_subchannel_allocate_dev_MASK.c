
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dummy; } ;
struct ccw_device_private {int dummy; } ;
struct ccw_device {void* private; } ;


 int VAR_0 ;
 struct ccw_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ccw_device*) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static struct ccw_device * FUNC_3(struct subchannel *VAR_3)
{
 struct ccw_device *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (VAR_4) {
  VAR_4->private = FUNC_2(sizeof(struct ccw_device_private),
     VAR_2 | VAR_1);
  if (VAR_4->private)
   return VAR_4;
 }
 FUNC_1(VAR_4);
 return FUNC_0(-VAR_0);
}
