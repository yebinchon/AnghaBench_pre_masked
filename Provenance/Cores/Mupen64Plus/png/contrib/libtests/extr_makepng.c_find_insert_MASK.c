
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int* png_const_charp ;
typedef int png_charp ;
typedef int chunk_insert ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int ,int *,int) ;
 int FUNC_4 (int ,char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int*,int ,int,int *) ;
 int VAR_7 ;

__attribute__((used)) static chunk_insert *
FUNC_6(png_const_charp VAR_8, png_charp VAR_9)
{
   png_uint_32 VAR_10 = 0;
   png_charp VAR_11[1024];
   int VAR_12, VAR_13;


   for (VAR_12=0; VAR_12<4; ++VAR_12)
   {
      char VAR_14 = VAR_8[VAR_12];

      if ((VAR_14 >= 65 && VAR_14 <= 90) || (VAR_14 >= 97 && VAR_14 <= 122))
         VAR_10 = (VAR_10 << 8) + VAR_8[VAR_12];

      else
         break;
   }

   if (VAR_12 < 4 || VAR_8[4] != 0)
   {
      FUNC_4(VAR_7, "makepng --insert \"%s\": invalid chunk name\n", VAR_8);
      FUNC_2(1);
   }


   VAR_13 = FUNC_3(VAR_8, VAR_9, VAR_11, 1024);



   switch (VAR_10)
   {
      case (((105)<<24)+((67)<<16)+((67)<<8)+(80)):
         if (VAR_13 == 2)
            return FUNC_5(VAR_8, VAR_1, VAR_13, VAR_11);
         break;

      case (((116)<<24)+((69)<<16)+((88)<<8)+(116)):
         if (VAR_13 == 2)
            return FUNC_5(VAR_8, VAR_5, VAR_13, VAR_11);
         break;

      case (((122)<<24)+((84)<<16)+((88)<<8)+(116)):
         if (VAR_13 == 2)
            return FUNC_5(VAR_8, VAR_6, VAR_13, VAR_11);
         break;

      case (((105)<<24)+((84)<<16)+((88)<<8)+(116)):
         if (VAR_13 == 4)
            return FUNC_5(VAR_8, VAR_2, VAR_13, VAR_11);
         break;

      case (((104)<<24)+((73)<<16)+((83)<<8)+(84)):
         if (VAR_13 <= 256)
            return FUNC_5(VAR_8, VAR_0, VAR_13, VAR_11);
         break;

      case (((115)<<24)+((66)<<16)+((73)<<8)+(84)):
         if (VAR_13 <= 4)
            return FUNC_5(VAR_8, VAR_3, VAR_13, VAR_11);
         break;






      default:
         FUNC_4(VAR_7, "makepng --insert \"%s\": unrecognized chunk name\n",
            VAR_8);
         FUNC_2(1);
   }

   FUNC_1(VAR_8, VAR_13);
   return ((void*)0);
}
