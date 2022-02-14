
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long tv_sec; long tv_nsec; } ;
typedef int png_int_32 ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (struct timespec*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned long,long) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_8(FILE *VAR_2, int VAR_3, png_int_32 VAR_4)
{
   int VAR_5;
   struct timespec VAR_6, VAR_7;


   FUNC_7(VAR_2);

   if (FUNC_3(&VAR_6))
   {
      for (VAR_5=0; VAR_5<VAR_3; ++VAR_5)
      {
         if (FUNC_6(VAR_2, VAR_4, ((void*)0) ))
         {
            if (FUNC_0(VAR_2))
            {
               FUNC_4("temporary file");
               FUNC_2(VAR_0, "file %d: error reading PNG data\n", VAR_5);
               return 0;
            }
         }

         else
         {
            FUNC_4("temporary file");
            FUNC_2(VAR_0, "file %d: error from libpng\n", VAR_5);
            return 0;
         }
      }
   }

   else
      return 0;

   if (FUNC_3(&VAR_7))
   {



      unsigned long VAR_8 = VAR_7.tv_sec - VAR_6.tv_sec;
      long VAR_9 = VAR_7.tv_nsec - VAR_6.tv_nsec;

      if (VAR_9 < 0)
      {
         --VAR_8;
         VAR_9 += 1000000000;

         if (VAR_9 < 0)
         {
            FUNC_2(VAR_0, "timepng: bad clock from kernel\n");
            return 0;
         }
      }

      FUNC_5("%lu.%.9ld\n", VAR_8, VAR_9);
      FUNC_1(VAR_1);
      if (FUNC_0(VAR_1))
      {
         FUNC_2(VAR_0, "timepng: error writing output\n");
         return 0;
      }


      return 1;
   }

   else
      return 0;
}
