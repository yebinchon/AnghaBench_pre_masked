
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {TYPE_1__* ctrl; } ;
struct omapfb_color_key {int dummy; } ;
struct TYPE_2__ {int (* set_color_key ) (struct omapfb_color_key*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct omapfb_device*) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (struct omapfb_color_key*) ;

__attribute__((used)) static int FUNC_3(struct omapfb_device *VAR_1,
    struct omapfb_color_key *VAR_2)
{
 int VAR_3;

 if (!VAR_1->ctrl->set_color_key)
  return -VAR_0;

 FUNC_0(VAR_1);
 VAR_3 = VAR_1->ctrl->set_color_key(VAR_2);
 FUNC_1(VAR_1);

 return VAR_3;
}
