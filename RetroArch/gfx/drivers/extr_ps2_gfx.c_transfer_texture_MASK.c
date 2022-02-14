
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Width; int Height; int PSM; int Filter; void* Mem; } ;
typedef TYPE_1__ GSTEXTURE ;



__attribute__((used)) static void FUNC_0(GSTEXTURE *VAR_0, const void *VAR_1,
      int VAR_2, int VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
   VAR_0->Width = VAR_2;
   VAR_0->Height = VAR_3;
   VAR_0->PSM = VAR_4;
   VAR_0->Filter = VAR_5;
   VAR_0->Mem = (void *)VAR_1;
}
