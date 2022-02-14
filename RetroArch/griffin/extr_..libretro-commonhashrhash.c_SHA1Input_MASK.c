
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Corrupted; unsigned char* Message_Block; int Message_Block_Index; int Length_Low; int Length_High; scalar_t__ Computed; } ;
typedef TYPE_1__ SHA1Context ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(SHA1Context *VAR_0,
      const unsigned char *VAR_1,
      unsigned VAR_2)
{
   if (!VAR_2)
      return;

   if (VAR_0->Computed || VAR_0->Corrupted)
   {
      VAR_0->Corrupted = 1;
      return;
   }

   while(VAR_2-- && !VAR_0->Corrupted)
   {
      VAR_0->Message_Block[VAR_0->Message_Block_Index++] =
         (*VAR_1 & 0xFF);

      VAR_0->Length_Low += 8;

      VAR_0->Length_Low &= 0xFFFFFFFF;
      if (VAR_0->Length_Low == 0)
      {
         VAR_0->Length_High++;

         VAR_0->Length_High &= 0xFFFFFFFF;
         if (VAR_0->Length_High == 0)
            VAR_0->Corrupted = 1;
      }

      if (VAR_0->Message_Block_Index == 64)
         FUNC_0(VAR_0);

      VAR_1++;
   }
}
