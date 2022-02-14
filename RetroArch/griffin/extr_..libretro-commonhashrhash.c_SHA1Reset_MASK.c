
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* Message_Digest; scalar_t__ Corrupted; scalar_t__ Computed; scalar_t__ Message_Block_Index; scalar_t__ Length_High; scalar_t__ Length_Low; } ;
typedef TYPE_1__ SHA1Context ;



__attribute__((used)) static void FUNC_0(SHA1Context *VAR_0)
{
   if (!VAR_0)
      return;

   VAR_0->Length_Low = 0;
   VAR_0->Length_High = 0;
   VAR_0->Message_Block_Index = 0;

   VAR_0->Message_Digest[0] = 0x67452301;
   VAR_0->Message_Digest[1] = 0xEFCDAB89;
   VAR_0->Message_Digest[2] = 0x98BADCFE;
   VAR_0->Message_Digest[3] = 0x10325476;
   VAR_0->Message_Digest[4] = 0xC3D2E1F0;

   VAR_0->Computed = 0;
   VAR_0->Corrupted = 0;
}
