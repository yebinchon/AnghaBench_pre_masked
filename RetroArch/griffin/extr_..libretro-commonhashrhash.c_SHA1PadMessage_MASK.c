
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* Message_Block; int Message_Block_Index; int Length_High; int Length_Low; } ;
typedef TYPE_1__ SHA1Context ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(SHA1Context *VAR_0)
{
   if (!VAR_0)
      return;







   VAR_0->Message_Block[VAR_0->Message_Block_Index++] = 0x80;

   if (VAR_0->Message_Block_Index > 55)
   {
      while(VAR_0->Message_Block_Index < 64)
         VAR_0->Message_Block[VAR_0->Message_Block_Index++] = 0;

      FUNC_0(VAR_0);
   }

   while(VAR_0->Message_Block_Index < 56)
      VAR_0->Message_Block[VAR_0->Message_Block_Index++] = 0;


   VAR_0->Message_Block[56] = (VAR_0->Length_High >> 24) & 0xFF;
   VAR_0->Message_Block[57] = (VAR_0->Length_High >> 16) & 0xFF;
   VAR_0->Message_Block[58] = (VAR_0->Length_High >> 8) & 0xFF;
   VAR_0->Message_Block[59] = (VAR_0->Length_High) & 0xFF;
   VAR_0->Message_Block[60] = (VAR_0->Length_Low >> 24) & 0xFF;
   VAR_0->Message_Block[61] = (VAR_0->Length_Low >> 16) & 0xFF;
   VAR_0->Message_Block[62] = (VAR_0->Length_Low >> 8) & 0xFF;
   VAR_0->Message_Block[63] = (VAR_0->Length_Low) & 0xFF;

   FUNC_0(VAR_0);
}
