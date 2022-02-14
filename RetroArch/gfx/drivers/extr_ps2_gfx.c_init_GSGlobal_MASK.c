
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* PrimAlphaEnable; void* ZBuffering; void* DoubleBuffering; int PSMZ; int PSM; int Height; int Width; int Field; int Interlace; int Mode; } ;
typedef TYPE_1__ GSGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static GSGLOBAL *FUNC_6(void)
{
   GSGLOBAL *VAR_16 = FUNC_3();

   VAR_16->Mode = VAR_9;
   VAR_16->Interlace = VAR_8;
   VAR_16->Field = VAR_7;
   VAR_16->Width = VAR_15;
   VAR_16->Height = VAR_14;

   VAR_16->PSM = VAR_12;
   VAR_16->PSMZ = VAR_11;
   VAR_16->DoubleBuffering = VAR_13;
   VAR_16->ZBuffering = VAR_13;
   VAR_16->PrimAlphaEnable = VAR_13;

   FUNC_1(VAR_3,VAR_1, VAR_5,
               VAR_4, VAR_2, 1 << VAR_0);


   FUNC_0(VAR_0);

   FUNC_4(VAR_16);
   FUNC_5(VAR_16, VAR_10);
   FUNC_2(VAR_16, VAR_6);

   return VAR_16;
}
