
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLong ;
typedef int FILE ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,int*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,unsigned long,unsigned long,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ,int ,int ,int ,int ,int ,int ,unsigned long,char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(FILE *VAR_1, const char *VAR_2)
{
   uLong VAR_3 = 0;
   uLong VAR_4 = FUNC_0(0, ((void*)0), 0);
   uLong VAR_5 = FUNC_1(0, ((void*)0), 0);
   Byte VAR_6[132];

   for (;;)
   {
      int VAR_7 = FUNC_3(VAR_1);
      Byte VAR_8;

      if (VAR_7 == VAR_0) break;

      VAR_8 = (Byte)VAR_7;

      if (VAR_3 < sizeof VAR_6)
         VAR_6[VAR_3] = VAR_8;

      ++VAR_3;
      VAR_4 = FUNC_0(VAR_4, &VAR_8, 1);
      VAR_5 = FUNC_1(VAR_5, &VAR_8, 1);
   }

   if (FUNC_2(VAR_1))
      return 0;


   FUNC_4("PNG_ICC_CHECKSUM(0x%8.8lx, 0x%8.8lx,\n   PNG_MD5("
      "0x%2.2x%2.2x%2.2x%2.2x, 0x%2.2x%2.2x%2.2x%2.2x, 0x%2.2x%2.2x%2.2x%2.2x,"
      " 0x%2.2x%2.2x%2.2x%2.2x), %d,\n"
      "   \"%4.4d/%2.2d/%2.2d %2.2d:%2.2d:%2.2d\", %lu, \"%s\")\n",
      (unsigned long)VAR_4, (unsigned long)VAR_5,
      VAR_6[84], VAR_6[85], VAR_6[86], VAR_6[87],
      VAR_6[88], VAR_6[89], VAR_6[90], VAR_6[91],
      VAR_6[92], VAR_6[93], VAR_6[94], VAR_6[95],
      VAR_6[96], VAR_6[97], VAR_6[98], VAR_6[99],


      ((VAR_6[64] * 256 + VAR_6[64 +1]) * 65536 + (VAR_6[64 +2] * 256 + VAR_6[64 +2 +1])), (VAR_6[24] * 256 + VAR_6[24 +1]), (VAR_6[26] * 256 + VAR_6[26 +1]), (VAR_6[28] * 256 + VAR_6[28 +1]), (VAR_6[30] * 256 + VAR_6[30 +1]), (VAR_6[32] * 256 + VAR_6[32 +1]), (VAR_6[34] * 256 + VAR_6[34 +1]),
      (unsigned long)VAR_3, VAR_2);

   return 1;
}
