
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_device {int dummy; } ;
struct fb_info {int device; } ;


 struct hv_device* FUNC_0 (int ) ;
 int FUNC_1 (struct hv_device*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0)
{
 struct hv_device *VAR_1 = FUNC_0(VAR_0->device);

 return FUNC_1(VAR_1);
}
