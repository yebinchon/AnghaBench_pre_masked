
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omapfb_device {int state; } ;
typedef enum omapfb_state { ____Placeholder_omapfb_state } omapfb_state ;


 int VAR_0 ;
 int FUNC_0 (struct omapfb_device*,int) ;
 struct omapfb_device* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct omapfb_device *VAR_2 = FUNC_1(VAR_1);
 enum omapfb_state VAR_3 = VAR_2->state;



 VAR_2->state = VAR_0;
 FUNC_0(VAR_2, VAR_3);

 return 0;
}
