
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ PSM; int Width; int Height; int TBW; scalar_t__ ClutPSM; int Vram; int Mem; int VramClut; int Clut; } ;
typedef TYPE_1__ GSTEXTURE ;
typedef int GSGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_2(GSGLOBAL *VAR_5, GSTEXTURE *VAR_6, bool VAR_7)
{
   FUNC_0(VAR_6);

   if (VAR_6->PSM == VAR_4) {
      FUNC_1(VAR_6->Mem, VAR_6->Width, VAR_6->Height, VAR_6->Vram, VAR_6->PSM, VAR_6->TBW, VAR_2);
      if (VAR_7) {
         FUNC_1(VAR_6->Clut, 16, 16, VAR_6->VramClut, VAR_6->ClutPSM, 1, VAR_1);
      }

   } else if (VAR_6->PSM == VAR_3) {
      FUNC_1(VAR_6->Mem, VAR_6->Width, VAR_6->Height, VAR_6->Vram, VAR_6->PSM, VAR_6->TBW, VAR_2);
      if (VAR_7) {
         FUNC_1(VAR_6->Clut, 8, 2, VAR_6->VramClut, VAR_6->ClutPSM, 1, VAR_1);
      }
   } else {
      FUNC_1(VAR_6->Mem, VAR_6->Width, VAR_6->Height, VAR_6->Vram, VAR_6->PSM, VAR_6->TBW, VAR_0);
   }
}
