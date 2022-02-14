
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * linescreen; int * vdp2framebuffer; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;

int FUNC_1()
{
   int VAR_1;

   for(VAR_1 = 0;VAR_1 < 6;VAR_1++)
      FUNC_0(VAR_0.vdp2framebuffer[VAR_1]);

   for(VAR_1 = 1;VAR_1 < 4;VAR_1++)
      FUNC_0(VAR_0.linescreen[VAR_1]);

   return 0;
}
