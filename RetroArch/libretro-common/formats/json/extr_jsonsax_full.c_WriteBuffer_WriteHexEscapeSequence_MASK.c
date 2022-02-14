
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int escapeSequence ;
typedef char byte ;
typedef int WriteBuffer ;
typedef int JSON_Writer ;
typedef int JSON_Status ;
typedef int Codepoint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char) ;

__attribute__((used)) static JSON_Status FUNC_2(WriteBuffer VAR_3, JSON_Writer VAR_4, Codepoint VAR_5)
{
   if (VAR_5 >= VAR_0)
   {





      VAR_5 = FUNC_0(VAR_5);
      VAR_5 = (VAR_5 << 16) | (VAR_5 >> 16);
   }
   do
   {
      static const byte VAR_6[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
      byte VAR_7[6];
      int VAR_8;
      VAR_7[0] = '\\';
      VAR_7[1] = 'u';
      VAR_7[2] = VAR_6[(VAR_5 >> 12) & 0xF];
      VAR_7[3] = VAR_6[(VAR_5 >> 8) & 0xF];
      VAR_7[4] = VAR_6[(VAR_5 >> 4) & 0xF];
      VAR_7[5] = VAR_6[VAR_5 & 0xF];
      for (VAR_8 = 0; VAR_8 < sizeof(VAR_7); VAR_8++)
      {
         if (!FUNC_1(VAR_3, VAR_4, VAR_7[VAR_8]))
            return VAR_1;
      }
      VAR_5 >>= 16;
   } while (VAR_5);
   return VAR_2;
}
