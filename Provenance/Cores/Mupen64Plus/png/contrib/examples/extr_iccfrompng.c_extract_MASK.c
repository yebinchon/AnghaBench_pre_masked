
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int * png_structp ;
typedef int * png_infop ;
typedef int png_charp ;
typedef int * png_bytep ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int * VAR_2 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int **,int **,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,int *,int*,int **,scalar_t__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_3 ;

__attribute__((used)) static png_bytep
FUNC_12(FILE *VAR_4, png_uint_32 *VAR_5)
{
   png_structp VAR_6 = FUNC_4(VAR_1,0,0,0);
   png_infop VAR_7 = ((void*)0);
   png_bytep VAR_8 = ((void*)0);


   *VAR_5 = 0;

   if (VAR_6 == ((void*)0))
   {
      FUNC_0(VAR_3, "iccfrompng: version library mismatch?\n");
      return 0;
   }

   if (FUNC_11(FUNC_9(VAR_6)))
   {
      FUNC_5(&VAR_6, &VAR_7, ((void*)0));
      return 0;
   }

   FUNC_8(VAR_6, VAR_4);

   VAR_7 = FUNC_3(VAR_6);
   if (VAR_7 == ((void*)0))
      FUNC_6(VAR_6, "OOM allocating info structure");

   FUNC_10(VAR_6, VAR_7);

   {
      png_charp VAR_9;
      int VAR_10;
      png_bytep VAR_11;

      if (FUNC_7(VAR_6, VAR_7, &VAR_9, &VAR_10, &VAR_11,
         VAR_5) & VAR_0)
      {
         VAR_8 = FUNC_1(*VAR_5);
         if (VAR_8 != ((void*)0))
            FUNC_2(VAR_8, VAR_11, *VAR_5);

         else
            FUNC_6(VAR_6, "OOM allocating profile buffer");
      }

      else
 VAR_8 = VAR_2;
   }

   FUNC_5(&VAR_6, &VAR_7, ((void*)0));
   return VAR_8;
}
