
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_12__ {int* ScreenBuffer; int ActiveBuffer; int Width; int PrimContext; int EvenOrOdd; int PSM; } ;
struct TYPE_11__ {int FIELD; } ;
struct TYPE_10__ {int Vram; int VramClut; int Filter; int Clut; int * Mem; int PSM; int Height; int Width; } ;
typedef TYPE_1__ GSTEXTURE ;
typedef TYPE_2__ GSREG ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int ,int ,int,int ,int,int,int,int,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;

void FUNC_5(void)
{
 GSTEXTURE VAR_8;
 VAR_8.Width = VAR_4;
 VAR_8.Height = VAR_3;
 VAR_8.PSM = VAR_2;
 VAR_8.Mem = (UBYTE *) VAR_5;
 VAR_8.Clut = VAR_6;
 VAR_8.Vram = 0x200000;
 VAR_8.VramClut = 0x280000;
 VAR_8.Filter = VAR_1;

 FUNC_4(VAR_7, &VAR_8);
 FUNC_1(VAR_7, &VAR_8, 0, 0, 32, 0, 640, 480, 32 + 320, 240, 0, 0x80808080);





 FUNC_0(VAR_7->ScreenBuffer[VAR_7->ActiveBuffer & 1] / 8192,
  VAR_7->Width / 64, VAR_7->PSM, 0, 0 );
 VAR_7->ActiveBuffer ^= 1;
 VAR_7->PrimContext ^= 1;
 VAR_7->EvenOrOdd = ((GSREG *) VAR_0)->FIELD;
 FUNC_2(VAR_7);


}
