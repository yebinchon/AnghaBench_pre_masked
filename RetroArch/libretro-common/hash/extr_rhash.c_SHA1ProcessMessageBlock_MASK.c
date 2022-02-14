
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* Message_Digest; scalar_t__ Message_Block_Index; scalar_t__* Message_Block; } ;
typedef TYPE_1__ SHA1Context ;


 unsigned int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(SHA1Context *VAR_0)
{
   const unsigned VAR_1[] =
   {
      0x5A827999,
      0x6ED9EBA1,
      0x8F1BBCDC,
      0xCA62C1D6
   };
   int VAR_2;
   unsigned VAR_3;
   unsigned VAR_4[80];
   unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;


   for(VAR_2 = 0; VAR_2 < 16; VAR_2++)
   {
      VAR_4[VAR_2] = ((unsigned) VAR_0->Message_Block[VAR_2 * 4]) << 24;
      VAR_4[VAR_2] |= ((unsigned) VAR_0->Message_Block[VAR_2 * 4 + 1]) << 16;
      VAR_4[VAR_2] |= ((unsigned) VAR_0->Message_Block[VAR_2 * 4 + 2]) << 8;
      VAR_4[VAR_2] |= ((unsigned) VAR_0->Message_Block[VAR_2 * 4 + 3]);
   }

   for(VAR_2 = 16; VAR_2 < 80; VAR_2++)
      VAR_4[VAR_2] = FUNC_0(1,VAR_4[VAR_2-3] ^ VAR_4[VAR_2-8] ^ VAR_4[VAR_2-14] ^ VAR_4[VAR_2-16]);

   VAR_5 = VAR_0->Message_Digest[0];
   VAR_6 = VAR_0->Message_Digest[1];
   VAR_7 = VAR_0->Message_Digest[2];
   VAR_8 = VAR_0->Message_Digest[3];
   VAR_9 = VAR_0->Message_Digest[4];

   for(VAR_2 = 0; VAR_2 < 20; VAR_2++)
   {
      VAR_3 = FUNC_0(5,VAR_5) +
         ((VAR_6 & VAR_7) | ((~VAR_6) & VAR_8)) + VAR_9 + VAR_4[VAR_2] + VAR_1[0];
      VAR_3 &= 0xFFFFFFFF;
      VAR_9 = VAR_8;
      VAR_8 = VAR_7;
      VAR_7 = FUNC_0(30,VAR_6);
      VAR_6 = VAR_5;
      VAR_5 = VAR_3;
   }

   for(VAR_2 = 20; VAR_2 < 40; VAR_2++)
   {
      VAR_3 = FUNC_0(5,VAR_5) + (VAR_6 ^ VAR_7 ^ VAR_8) + VAR_9 + VAR_4[VAR_2] + VAR_1[1];
      VAR_3 &= 0xFFFFFFFF;
      VAR_9 = VAR_8;
      VAR_8 = VAR_7;
      VAR_7 = FUNC_0(30,VAR_6);
      VAR_6 = VAR_5;
      VAR_5 = VAR_3;
   }

   for(VAR_2 = 40; VAR_2 < 60; VAR_2++)
   {
      VAR_3 = FUNC_0(5,VAR_5) +
         ((VAR_6 & VAR_7) | (VAR_6 & VAR_8) | (VAR_7 & VAR_8)) + VAR_9 + VAR_4[VAR_2] + VAR_1[2];
      VAR_3 &= 0xFFFFFFFF;
      VAR_9 = VAR_8;
      VAR_8 = VAR_7;
      VAR_7 = FUNC_0(30,VAR_6);
      VAR_6 = VAR_5;
      VAR_5 = VAR_3;
   }

   for(VAR_2 = 60; VAR_2 < 80; VAR_2++)
   {
      VAR_3 = FUNC_0(5,VAR_5) + (VAR_6 ^ VAR_7 ^ VAR_8) + VAR_9 + VAR_4[VAR_2] + VAR_1[3];
      VAR_3 &= 0xFFFFFFFF;
      VAR_9 = VAR_8;
      VAR_8 = VAR_7;
      VAR_7 = FUNC_0(30,VAR_6);
      VAR_6 = VAR_5;
      VAR_5 = VAR_3;
   }

   VAR_0->Message_Digest[0] =
      (VAR_0->Message_Digest[0] + VAR_5) & 0xFFFFFFFF;
   VAR_0->Message_Digest[1] =
      (VAR_0->Message_Digest[1] + VAR_6) & 0xFFFFFFFF;
   VAR_0->Message_Digest[2] =
      (VAR_0->Message_Digest[2] + VAR_7) & 0xFFFFFFFF;
   VAR_0->Message_Digest[3] =
      (VAR_0->Message_Digest[3] + VAR_8) & 0xFFFFFFFF;
   VAR_0->Message_Digest[4] =
      (VAR_0->Message_Digest[4] + VAR_9) & 0xFFFFFFFF;

   VAR_0->Message_Block_Index = 0;
}
