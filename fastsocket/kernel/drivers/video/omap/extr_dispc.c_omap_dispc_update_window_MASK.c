
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_update_window {int dummy; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ update_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct fb_info *VAR_3,
     struct omapfb_update_window *VAR_4,
     void (*VAR_5)(void *VAR_6),
     void *VAR_7)
{
 return VAR_2.update_mode == VAR_1 ? -VAR_0 : 0;
}
