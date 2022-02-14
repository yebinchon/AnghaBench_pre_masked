
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clearVRAM; int gsGlobal; scalar_t__ vsync; } ;
typedef TYPE_1__ ps2_video_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ps2_video_t *VAR_0)
{
   if (VAR_0->vsync) {
      FUNC_1(VAR_0->gsGlobal);
   }
   FUNC_0(VAR_0->gsGlobal);



   VAR_0->clearVRAM = 0;
}
