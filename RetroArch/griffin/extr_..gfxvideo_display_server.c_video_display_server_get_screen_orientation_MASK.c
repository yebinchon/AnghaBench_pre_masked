
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum rotation { ____Placeholder_rotation } rotation ;
struct TYPE_2__ {int (* get_screen_orientation ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

enum rotation FUNC_1(void)
{
   if (VAR_1 && VAR_1->get_screen_orientation)
      return VAR_1->get_screen_orientation();
   return VAR_0;
}
