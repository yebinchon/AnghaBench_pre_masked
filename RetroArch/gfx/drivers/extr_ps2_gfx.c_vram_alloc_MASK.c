
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int Width; int Height; scalar_t__ Vram; void* VramClut; int ClutPSM; scalar_t__ Clut; int PSM; } ;
typedef TYPE_1__ GSTEXTURE ;
typedef int GSGLOBAL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 void* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(GSGLOBAL *VAR_2, GSTEXTURE *VAR_3)
{
   uint32_t VAR_4 = FUNC_0(VAR_3->Width, VAR_3->Height, VAR_3->PSM);
   VAR_3->Vram = FUNC_1(VAR_2, VAR_4, VAR_1);
   if(VAR_3->Vram == VAR_0) {
      FUNC_2("VRAM Allocation Failed. Will not upload texture.\n");
   }

   if (VAR_3->Clut) {

      VAR_4 = FUNC_0(16, 16, VAR_3->ClutPSM);
      VAR_3->VramClut = FUNC_1(VAR_2, VAR_4 , VAR_1);
   }
}
