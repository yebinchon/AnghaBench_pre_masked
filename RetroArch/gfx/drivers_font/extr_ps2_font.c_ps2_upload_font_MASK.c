
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {TYPE_1__* Texture; int Align; int Spacing; scalar_t__ VramIdx; void** Vram; scalar_t__* LastPage; } ;
struct TYPE_4__ {int Clut; int ClutPSM; void* VramClut; void* Vram; int PSM; int Height; int Width; } ;
typedef int GSGLOBAL ;
typedef TYPE_2__ GSFONTM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int,void*,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(GSGLOBAL *VAR_9, GSFONTM *VAR_10)
{
 int VAR_11;
   int VAR_12 = FUNC_2(VAR_10->Texture->Width, VAR_10->Texture->Height, VAR_10->Texture->PSM);

   VAR_10->Texture->VramClut = FUNC_3(VAR_9, VAR_1, VAR_2);

   for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
      VAR_10->Vram[VAR_11] = FUNC_3(VAR_9, VAR_12, VAR_2);
      VAR_10->LastPage[VAR_11] = (u32) -1;
   }

   VAR_10->Texture->Vram = VAR_10->Vram[0];
   VAR_10->VramIdx = 0;
   VAR_10->Spacing = VAR_0;
   VAR_10->Align = VAR_3;

 VAR_10->Texture->Clut = FUNC_4(VAR_7, VAR_6);
 FUNC_5(VAR_10->Texture->Clut, VAR_8, VAR_6);
 FUNC_1(VAR_10->Texture->Clut, 8, 2, VAR_10->Texture->VramClut, VAR_10->Texture->ClutPSM, 1, VAR_4);
 FUNC_0(VAR_10->Texture->Clut);
}
