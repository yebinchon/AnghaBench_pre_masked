
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * png_structp ;
typedef int png_int_32 ;
typedef int * png_infop ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int **,int **,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(FILE *VAR_2, png_int_32 VAR_3, FILE *VAR_4)
{
   png_structp VAR_5 = FUNC_1(VAR_0,0,0,
         VAR_1);
   png_infop VAR_6 = ((void*)0);

   if (VAR_5 == ((void*)0))
      return 0;

   if (FUNC_9(FUNC_5(VAR_5)))
   {
      FUNC_2(&VAR_5, &VAR_6, ((void*)0));
      return 0;
   }




   FUNC_4(VAR_5, VAR_2);

   VAR_6 = FUNC_0(VAR_5);

   if (VAR_6 == ((void*)0))
      FUNC_3(VAR_5, "OOM allocating info structure");

   if (VAR_3 < 0)
      FUNC_8(VAR_5, VAR_6, VAR_4, VAR_2);

   else
      FUNC_6(VAR_5, VAR_6, VAR_3, ((void*)0) );

   FUNC_2(&VAR_5, &VAR_6, ((void*)0));
   return 1;
}
