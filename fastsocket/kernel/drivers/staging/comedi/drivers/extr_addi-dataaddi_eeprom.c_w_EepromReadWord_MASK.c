
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned char,unsigned short) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned short,unsigned short,unsigned short*) ;
 int FUNC_4 (unsigned short) ;

unsigned short FUNC_5(unsigned short VAR_3, char *VAR_4,
 unsigned short VAR_5)
{

 unsigned char VAR_6 = 0;

 unsigned char VAR_7 = 0;

 unsigned char VAR_8 = 0;

 unsigned char VAR_9 = 0;

 unsigned char VAR_10 = 0;

 unsigned char VAR_11 = 0;

 unsigned short VAR_12 = 0;







 if ((!FUNC_2(VAR_4, "S5920")) ||
  (!FUNC_2(VAR_4, "S5933")))
 {

  for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
  {

   VAR_10 = (VAR_5 + VAR_6) % 256;

   VAR_11 = (VAR_5 + VAR_6) / 256;







   FUNC_1(VAR_2, VAR_3 + 0x3F);







   FUNC_4(VAR_3);







   FUNC_1(VAR_10,
    VAR_3 + 0x3E);







   FUNC_4(VAR_3);







   FUNC_1(VAR_1, VAR_3 + 0x3F);







   FUNC_4(VAR_3);







   FUNC_1(VAR_11,
    VAR_3 + 0x3E);







   FUNC_4(VAR_3);







   FUNC_1(VAR_0, VAR_3 + 0x3F);







   FUNC_4(VAR_3);







   VAR_7 = FUNC_0(VAR_3 + 0x3E);







   FUNC_4(VAR_3);







   if (VAR_6 == 0)
   {

    VAR_8 = VAR_7;

   }

   else
   {

    VAR_9 = VAR_7;

   }

  }

  VAR_12 = (VAR_8 | (((unsigned short) VAR_9) * 256));

 }

 if (!FUNC_2(VAR_4, "93C76"))
 {







  FUNC_3(VAR_3, VAR_5,
   &VAR_12);

 }

 return VAR_12;

}
