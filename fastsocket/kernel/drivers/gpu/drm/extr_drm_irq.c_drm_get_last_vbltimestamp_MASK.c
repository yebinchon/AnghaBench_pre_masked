
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timeval {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* get_vblank_timestamp ) (struct drm_device*,int,int*,struct timeval*,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 struct timeval FUNC_0 () ;
 int FUNC_1 (struct drm_device*,int,int*,struct timeval*,unsigned int) ;

u32 FUNC_2(struct drm_device *VAR_1, int VAR_2,
         struct timeval *VAR_3, unsigned VAR_4)
{
 int VAR_5;


 int VAR_6 = (int) VAR_0 * 1000;


 if (VAR_1->driver->get_vblank_timestamp && (VAR_6 > 0)) {
  VAR_5 = VAR_1->driver->get_vblank_timestamp(VAR_1, VAR_2, &VAR_6,
       VAR_3, VAR_4);
  if (VAR_5 > 0)
   return (u32) VAR_5;
 }




 *VAR_3 = FUNC_0();

 return 0;
}
