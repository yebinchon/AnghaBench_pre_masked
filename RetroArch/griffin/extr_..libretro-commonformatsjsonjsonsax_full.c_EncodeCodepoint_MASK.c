
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int byte ;
typedef int Encoding ;
typedef int Codepoint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(Codepoint VAR_4, Encoding VAR_5, byte* VAR_6)
{
   size_t VAR_7 = 0;
   switch (VAR_5)
   {
      case 128:
         if (VAR_4 < VAR_0)
         {
            VAR_6[0] = (byte)VAR_4;
            VAR_7 = 1;
         }
         else if (VAR_4 < VAR_1)
         {
            VAR_6[0] = (byte)(0xC0 | (VAR_4 >> 6));
            VAR_6[1] = (byte)(0x80 | FUNC_0(VAR_4));
            VAR_7 = 2;
         }
         else if (VAR_4 < VAR_2)
         {
            VAR_6[0] = (byte)(0xE0 | (VAR_4 >> 12));
            VAR_6[1] = (byte)(0x80 | FUNC_0(VAR_4 >> 6));
            VAR_6[2] = (byte)(0x80 | FUNC_0(VAR_4));
            VAR_7 = 3;
         }
         else
         {
            VAR_6[0] = (byte)(0xF0 | (VAR_4 >> 18));
            VAR_6[1] = (byte)(0x80 | FUNC_0(VAR_4 >> 12));
            VAR_6[2] = (byte)(0x80 | FUNC_0(VAR_4 >> 6));
            VAR_6[3] = (byte)(0x80 | FUNC_0(VAR_4));
            VAR_7 = 4;
         }
         break;

      case 131:
         if (VAR_4 < VAR_3)
         {
            VAR_6[0] = (byte)(VAR_4);
            VAR_6[1] = (byte)(VAR_4 >> 8);
            VAR_7 = 2;
         }
         else
         {
            uint32_t VAR_8 = FUNC_1(VAR_4);


            VAR_6[0] = (byte)(VAR_8 >> 16);
            VAR_6[1] = (byte)(VAR_8 >> 24);


            VAR_6[2] = (byte)(VAR_8);
            VAR_6[3] = (byte)(VAR_8 >> 8);
            VAR_7 = 4;
         }
         break;

      case 132:
         if (VAR_4 < VAR_3)
         {
            VAR_6[1] = (byte)(VAR_4);
            VAR_6[0] = (byte)(VAR_4 >> 8);
            VAR_7 = 2;
         }
         else
         {

            uint32_t VAR_9 = FUNC_1(VAR_4);


            VAR_6[1] = (byte)(VAR_9 >> 16);
            VAR_6[0] = (byte)(VAR_9 >> 24);


            VAR_6[3] = (byte)(VAR_9);
            VAR_6[2] = (byte)(VAR_9 >> 8);
            VAR_7 = 4;
         }
         break;

      case 129:
         VAR_6[0] = (byte)(VAR_4);
         VAR_6[1] = (byte)(VAR_4 >> 8);
         VAR_6[2] = (byte)(VAR_4 >> 16);
         VAR_6[3] = (byte)(VAR_4 >> 24);
         VAR_7 = 4;
         break;

      case 130:
         VAR_6[3] = (byte)(VAR_4);
         VAR_6[2] = (byte)(VAR_4 >> 8);
         VAR_6[1] = (byte)(VAR_4 >> 16);
         VAR_6[0] = (byte)(VAR_4 >> 24);
         VAR_7 = 4;
         break;
   }
   return VAR_7;
}
