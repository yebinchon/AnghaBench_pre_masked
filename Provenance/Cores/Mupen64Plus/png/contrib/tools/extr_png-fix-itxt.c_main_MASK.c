
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
typedef scalar_t__ length ;
typedef unsigned char crc ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned long FUNC_0 (unsigned long,unsigned char*,int) ;
 int FUNC_1 (unsigned char) ;

int
FUNC_2(void)
{
   unsigned int VAR_3;
   unsigned char VAR_4[VAR_1];
   unsigned long VAR_5;
   unsigned char VAR_6;
   int VAR_7;


   for (VAR_3=8; VAR_3; VAR_3--)
   {
      VAR_0;
      FUNC_1(VAR_6);
   }

if (VAR_7 == VAR_6)
for (;;)
 {

   unsigned long VAR_8;
   VAR_0; VAR_4[0] = VAR_6; VAR_8 = VAR_6; VAR_8 <<= 8;
   VAR_0; VAR_4[1] = VAR_6; VAR_8 += VAR_6; VAR_8 <<= 8;
   VAR_0; VAR_4[2] = VAR_6; VAR_8 += VAR_6; VAR_8 <<= 8;
   VAR_0; VAR_4[3] = VAR_6; VAR_8 += VAR_6;


   VAR_0; VAR_4[4] = VAR_6;
   VAR_0; VAR_4[5] = VAR_6;
   VAR_0; VAR_4[6] = VAR_6;
   VAR_0; VAR_4[7] = VAR_6;



   if (VAR_4[4] == 105 && VAR_4[5] == 84 && VAR_4[6] == 88 && VAR_4[7] == 116)
   {
      if (VAR_8 >= VAR_1-12)
         break;


      VAR_5 = FUNC_0(0, VAR_2, 0);


      for (VAR_3=8; VAR_3 < VAR_8 + 12; VAR_3++)
      {
         VAR_0; VAR_4[VAR_3] = VAR_6;
      }

      if (VAR_7 != VAR_6)
         break;


      VAR_5 = FUNC_0(VAR_5, VAR_4+4, (uInt)VAR_8+4);

      for (;;)
      {

        if (((VAR_5 >> 24) & 0xffU) == VAR_4[VAR_8+8] &&
            ((VAR_5 >> 16) & 0xffU) == VAR_4[VAR_8+9] &&
            ((VAR_5 >> 8) & 0xffU) == VAR_4[VAR_8+10] &&
            ((VAR_5 ) & 0xffU) == VAR_4[VAR_8+11])
           break;

        VAR_8++;

        if (VAR_8 >= VAR_1-12)
           break;

        VAR_0;
        VAR_4[VAR_8+11] = VAR_6;


        VAR_5 = FUNC_0(VAR_5, VAR_4+7+VAR_8, 1);
      }

      if (VAR_7 != VAR_6)
         break;


      VAR_4[0] = (unsigned char)((VAR_8 >> 24) & 0xffU);
      VAR_4[1] = (unsigned char)((VAR_8 >> 16) & 0xffU);
      VAR_4[2] = (unsigned char)((VAR_8 >> 8) & 0xffU);
      VAR_4[3] = (unsigned char)((VAR_8 ) & 0xffU);


      for (VAR_3=0; VAR_3<VAR_8+12; VAR_3++)
         FUNC_1(VAR_4[VAR_3]);
   }

   else
   {
      if (VAR_7 != VAR_6)
         break;


      for (VAR_3=0; VAR_3<8; VAR_3++)
         FUNC_1(VAR_4[VAR_3]);


      for (VAR_3=8; VAR_3< VAR_8+12; VAR_3++)
      {
         VAR_0;
         FUNC_1(VAR_6);
      }

      if (VAR_7 != VAR_6)
      {
         break;
      }


      if (VAR_4[4] == 73 && VAR_4[5] == 69 && VAR_4[6] == 78 && VAR_4[7] == 68)
         break;
   }

   if (VAR_7 != VAR_6)
      break;

   if (VAR_4[4] == 73 && VAR_4[5] == 69 && VAR_4[6] == 78 && VAR_4[7] == 68)
     break;
 }

 return 0;
}
