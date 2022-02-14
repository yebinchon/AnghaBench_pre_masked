
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum rotation { ____Placeholder_rotation } rotation ;
struct TYPE_2__ {int (* set_screen_orientation ) (int) ;} ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(enum rotation VAR_2)
{
   if (VAR_0 && VAR_0->set_screen_orientation)
   {
      FUNC_0("[Video]: Setting screen orientation to %d.\n", VAR_2);
      VAR_1 = VAR_2;
      VAR_0->set_screen_orientation(VAR_2);
   }
}
