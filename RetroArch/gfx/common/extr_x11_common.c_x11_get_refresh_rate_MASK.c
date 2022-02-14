
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * screen; } ;
typedef TYPE_1__ XWindowAttributes ;
struct TYPE_6__ {int flags; float htotal; float vtotal; } ;
typedef TYPE_2__ XF86VidModeModeLine ;
typedef int Screen ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*,TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

float FUNC_3(void *VAR_4)
{
   XWindowAttributes VAR_5;
   XF86VidModeModeLine VAR_6;
   Screen *VAR_7;
   int VAR_8;
   int VAR_9;
   float VAR_10;

   if (!VAR_2 || VAR_3 == VAR_0)
      return 0.0f;

   if (!FUNC_1(VAR_2, VAR_3, &VAR_5))
      return 0.0f;

   VAR_7 = VAR_5.screen;
   VAR_8 = FUNC_2(VAR_7);

   FUNC_0(VAR_2, VAR_8, &VAR_9, &VAR_6);


   if (VAR_6.flags & VAR_1)
      VAR_9 /= 2;

   VAR_10 = (float)VAR_9 * 1000.0f / VAR_6.htotal / VAR_6.vtotal;

   return VAR_10;
}
