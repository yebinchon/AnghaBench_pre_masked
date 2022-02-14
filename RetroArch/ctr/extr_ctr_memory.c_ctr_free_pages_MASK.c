
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void FUNC_4 (int) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (int*,int,int,int,int ,int) ;

void FUNC_7(u32 VAR_6)
{
   if(!VAR_6)
      return;

   u32 VAR_7 = FUNC_1() >> 12;

   if((FUNC_2() >> 12) > VAR_6 + 0x100)
      return FUNC_4(VAR_6);






   u32 VAR_8 = FUNC_3();
   u32 VAR_9 = VAR_5 > VAR_8? VAR_5 - VAR_8: 0;

   VAR_8 = VAR_8 > VAR_4 ? VAR_4 : VAR_8;

   u32 VAR_10 = VAR_8 >> 12;

   if(VAR_7 + (VAR_10 - (VAR_9 >> 12)) > VAR_6)
   {
      VAR_10 -= (VAR_9 >> 12);
      VAR_10 = VAR_10 > VAR_6 ? VAR_6 : VAR_10;
      VAR_7 = VAR_6 - VAR_10;
   }
   else if(VAR_7 + VAR_10 > VAR_6)
      VAR_10 = VAR_6 - VAR_7;
   else
      return;

   if(VAR_7)
      FUNC_4(VAR_7);

   if(VAR_10)
   {
      u32 VAR_11;
      FUNC_6(&VAR_11, VAR_3,
            0x0,
            VAR_10 << 12,
            VAR_0, VAR_1 | VAR_2);
      VAR_3 += VAR_10 << 12;
      VAR_4 -= VAR_10 << 12;
      VAR_5 -= VAR_10 << 12;





   }
}
