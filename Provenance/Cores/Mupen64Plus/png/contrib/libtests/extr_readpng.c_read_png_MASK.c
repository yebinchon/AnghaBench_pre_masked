
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int * png_structp ;
typedef int png_size_t ;
typedef int * png_infop ;
typedef int * png_bytep ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int **,int **,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int *,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(FILE *VAR_4)
{
   png_structp VAR_5 = FUNC_4(VAR_3,0,0,0);
   png_infop VAR_6 = ((void*)0);
   png_bytep VAR_7 = ((void*)0), VAR_8 = ((void*)0);

   if (VAR_5 == ((void*)0))
      return 0;

   if (FUNC_18(FUNC_11(VAR_5)))
   {
      FUNC_5(&VAR_5, &VAR_6, ((void*)0));
      if (VAR_7 != ((void*)0)) FUNC_1(VAR_7);
      if (VAR_8 != ((void*)0)) FUNC_1(VAR_8);
      return 0;
   }

   FUNC_10(VAR_5, VAR_4);

   VAR_6 = FUNC_3(VAR_5);
   if (VAR_6 == ((void*)0))
      FUNC_6(VAR_5, "OOM allocating info structure");

   FUNC_16(VAR_5, VAR_0, ((void*)0), 0);

   FUNC_13(VAR_5, VAR_6);

   {
      png_size_t VAR_9 = FUNC_9(VAR_5, VAR_6);


      VAR_7 = FUNC_2(VAR_9);
      VAR_8 = FUNC_2(VAR_9);

      if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
         FUNC_6(VAR_5, "OOM allocating row buffers");

      {
         png_uint_32 VAR_10 = FUNC_7(VAR_5, VAR_6);



            int VAR_11 = FUNC_8(VAR_5, VAR_6) ==
               VAR_1 ? VAR_2 : 1;

         int VAR_12;

         FUNC_17(VAR_5);

         for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12)
         {
            png_uint_32 VAR_13 = VAR_10;


               if (VAR_11 == VAR_2)
                  VAR_13 = FUNC_0(VAR_13, VAR_12);





            while (VAR_13-- > 0)
               FUNC_14(VAR_5, VAR_7, VAR_8);
         }
      }
   }


   FUNC_12(VAR_5, VAR_6);
   FUNC_5(&VAR_5, &VAR_6, ((void*)0));
   FUNC_1(VAR_7);
   FUNC_1(VAR_8);
   return 1;
}
