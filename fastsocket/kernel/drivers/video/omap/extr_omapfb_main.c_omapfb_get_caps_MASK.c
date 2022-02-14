
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_device {TYPE_2__* panel; TYPE_1__* ctrl; } ;
struct omapfb_caps {int ctrl; } ;
struct TYPE_4__ {int (* get_caps ) (TYPE_2__*) ;} ;
struct TYPE_3__ {int (* get_caps ) (int,struct omapfb_caps*) ;} ;


 int FUNC_0 (struct omapfb_caps*,int ,int) ;
 int FUNC_1 (int,struct omapfb_caps*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct omapfb_device *VAR_0, int VAR_1,
         struct omapfb_caps *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_0->ctrl->get_caps(VAR_1, VAR_2);
 VAR_2->ctrl |= VAR_0->panel->get_caps(VAR_0->panel);
}
