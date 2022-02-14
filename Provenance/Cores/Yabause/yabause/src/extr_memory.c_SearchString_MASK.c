
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
typedef char u16 ;
typedef int result_struct ;


 int FUNC_0 (int,char,int,int *,int*) ;
 char FUNC_1 (int) ;
 char FUNC_2 (int) ;



 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_10(u32 VAR_0, u32 VAR_1, int VAR_2,
                        const char *VAR_3, result_struct *VAR_4,
                        u32 *VAR_5)
{
   u8 *VAR_6=((void*)0);
   u32 *VAR_7=((void*)0);
   u32 VAR_8=0;
   u32 VAR_9;
   u32 VAR_10;
   u32 VAR_11=0;

   VAR_8=(u32)FUNC_7(VAR_3);

   if ((VAR_7=(u32 *)FUNC_4(VAR_8*sizeof(u32))) == ((void*)0))
      return 0;

   VAR_6 = (u8 *)VAR_7;


   switch (VAR_2 & 0x70)
   {
      case 128:
         FUNC_5((char *)VAR_6, VAR_3);
         break;
      case 129:
      case 130:
      {
         char *VAR_12;
         char *VAR_13=FUNC_6(VAR_3);


         VAR_8 = 0;
         for (VAR_12=FUNC_8((char *)VAR_13, " ,"); VAR_12 != ((void*)0); VAR_12=FUNC_8(((void*)0), " ,"))
         {
            VAR_7[VAR_8] = FUNC_9(VAR_12, ((void*)0), 0);
            VAR_8++;
         }
         FUNC_3(VAR_13);

         break;
      }
   }

   VAR_10 = VAR_0;
   VAR_9 = 0;

   for (;;)
   {

      switch (VAR_2 & 0x70)
      {
         case 128:
         {
            u8 VAR_14 = FUNC_1(VAR_10);
            VAR_10++;

            if (VAR_14 == VAR_6[VAR_9])
            {
               VAR_9++;
               if (VAR_9 == VAR_8)
                  FUNC_0(VAR_10-VAR_8, VAR_14, VAR_2, VAR_4, &VAR_11);
            }
            else
               VAR_9 = 0;
            break;
         }
         case 129:
         {
            int VAR_15;
            u32 VAR_16;
            u8 VAR_17;
            u8 VAR_18 = FUNC_1(VAR_10);

            for (VAR_16 = 1; VAR_16 < VAR_8; VAR_16++)
            {

               VAR_17 = FUNC_1(VAR_10+VAR_16);


               VAR_15 = (int)VAR_17 - (int)VAR_18;


               if (((int)VAR_7[VAR_16] - (int)VAR_7[VAR_16-1]) != VAR_15)
                  break;

               if (VAR_16 == (VAR_8 - 1))
                  FUNC_0(VAR_10, VAR_18, VAR_2, VAR_4, &VAR_11);

               VAR_18 = VAR_17;
            }

            VAR_10++;

            break;
         }
         case 130:
         {
            int VAR_19;
            u32 VAR_20;
            u16 VAR_21;
            u16 VAR_22 = FUNC_2(VAR_10);

            for (VAR_20 = 1; VAR_20 < VAR_8; VAR_20++)
            {

               VAR_21 = FUNC_2(VAR_10+(VAR_20*2));


               VAR_19 = (int)VAR_21 - (int)VAR_22;


               if (((int)VAR_7[VAR_20] - (int)VAR_7[VAR_20-1]) != VAR_19)
                  break;

               if (VAR_20 == (VAR_8 - 1))
                  FUNC_0(VAR_10, VAR_22, VAR_2, VAR_4, &VAR_11);

               VAR_22 = VAR_21;
            }

            VAR_10+=2;
            break;
         }
      }

      if (VAR_10 > VAR_1 || VAR_11 >= VAR_5[0])
         break;
   }

   FUNC_3(VAR_6);
   VAR_5[0] = VAR_11;
   return 1;
}
