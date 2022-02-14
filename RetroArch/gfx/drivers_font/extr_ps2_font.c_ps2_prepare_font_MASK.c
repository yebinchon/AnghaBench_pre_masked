
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Filter; int ClutPSM; int PSM; int Height; int Width; } ;
struct TYPE_5__ {TYPE_3__* Texture; } ;
typedef int GSGLOBAL ;
typedef TYPE_1__ GSFONTM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(GSGLOBAL *VAR_5, GSFONTM *VAR_6)
{
   if(FUNC_0(VAR_6) == 0) {
      VAR_6->Texture->Width = VAR_1;
      VAR_6->Texture->Height = VAR_0;
      VAR_6->Texture->PSM = VAR_4;
      VAR_6->Texture->ClutPSM = VAR_3;
      VAR_6->Texture->Filter = VAR_2;
      FUNC_1(VAR_6->Texture);
   }
}
