
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global {int errors; int warnings; int quiet; int verbose; int idat_max; scalar_t__ skip; int optimize_zlib; int status_code; } ;
typedef int png_uint_32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*,char const*,char const*,...) ;
 int FUNC_2 (struct global*) ;
 int FUNC_3 (struct global*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (struct global*,char const*,char const*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (char const*) ;

int
FUNC_10(int VAR_11, const char **VAR_12)
{
   char VAR_13[VAR_0+1];
   const char * VAR_14 = *VAR_12;
   const char * VAR_15 = ((void*)0);
   const char * VAR_16 = ((void*)0);
   const char * VAR_17 = ((void*)0);
   int VAR_18 = 0;
   struct global VAR_19;

   FUNC_3(&VAR_19);

   while (--VAR_11 > 0)
   {
      ++VAR_12;

      if (FUNC_6(*VAR_12, "--debug") == 0)
      {

         VAR_19.errors = VAR_19.warnings = 1;
         VAR_19.quiet = 0;
         VAR_19.verbose = 7;
      }

      else if (FUNC_8(*VAR_12, "--max=", 6) == 0)
      {
         VAR_19.idat_max = (png_uint_32)FUNC_0(6+*VAR_12);

         if (VAR_19.skip < VAR_6)
            VAR_19.skip = VAR_6;
      }

      else if (FUNC_6(*VAR_12, "--max") == 0)
      {
         VAR_19.idat_max = 0x7fffffff;

         if (VAR_19.skip < VAR_6)
            VAR_19.skip = VAR_6;
      }

      else if (FUNC_6(*VAR_12, "--optimize") == 0 || FUNC_6(*VAR_12, "-o") == 0)
         VAR_19.optimize_zlib = 1;

      else if (FUNC_8(*VAR_12, "--out=", 6) == 0)
         VAR_15 = 6+*VAR_12;

      else if (FUNC_8(*VAR_12, "--suffix=", 9) == 0)
         VAR_16 = 9+*VAR_12;

      else if (FUNC_8(*VAR_12, "--prefix=", 9) == 0)
         VAR_17 = 9+*VAR_12;

      else if (FUNC_6(*VAR_12, "--strip=none") == 0)
         VAR_19.skip = VAR_4;

      else if (FUNC_6(*VAR_12, "--strip=crc") == 0)
         VAR_19.skip = VAR_2;

      else if (FUNC_6(*VAR_12, "--strip=unsafe") == 0)
         VAR_19.skip = VAR_6;

      else if (FUNC_6(*VAR_12, "--strip=unused") == 0)
         VAR_19.skip = VAR_7;

      else if (FUNC_6(*VAR_12, "--strip=transform") == 0)
         VAR_19.skip = VAR_5;

      else if (FUNC_6(*VAR_12, "--strip=color") == 0)
         VAR_19.skip = VAR_3;

      else if (FUNC_6(*VAR_12, "--strip=all") == 0)
         VAR_19.skip = VAR_1;

      else if (FUNC_6(*VAR_12, "--errors") == 0 || FUNC_6(*VAR_12, "-e") == 0)
         VAR_19.errors = 1;

      else if (FUNC_6(*VAR_12, "--warnings") == 0 || FUNC_6(*VAR_12, "-w") == 0)
         VAR_19.warnings = 1;

      else if (FUNC_6(*VAR_12, "--quiet") == 0 || FUNC_6(*VAR_12, "-q") == 0)
      {
         if (VAR_19.quiet)
            VAR_19.quiet = 2;

         else
            VAR_19.quiet = 1;
      }

      else if (FUNC_6(*VAR_12, "--verbose") == 0 || FUNC_6(*VAR_12, "-v") == 0)
         ++VAR_19.verbose;
      else if ((*VAR_12)[0] == '-')
         FUNC_9(VAR_14);

      else
      {
         size_t VAR_20 = FUNC_7(*VAR_12);

         if (VAR_15 == ((void*)0))
         {

            if (VAR_17 != ((void*)0))
            {
               size_t VAR_21 = FUNC_7(VAR_17);

               if (VAR_21+VAR_20 > VAR_0)
               {
                  FUNC_1(VAR_10, "%s: output file name too long: %s%s%s\n",
                     VAR_14, VAR_17, *VAR_12, VAR_16 ? VAR_16 : "");
                  VAR_19.status_code |= VAR_8;
                  continue;
               }

               FUNC_4(VAR_13, VAR_17, VAR_21);
               FUNC_4(VAR_13+VAR_21, *VAR_12, VAR_20);
               VAR_20 += VAR_21;
               VAR_15 = VAR_13;
            }

            else if (VAR_16 != ((void*)0))
               FUNC_4(VAR_13, *VAR_12, VAR_20);

            VAR_13[VAR_20] = 0;

            if (VAR_16 != ((void*)0))
            {
               size_t VAR_22 = FUNC_7(VAR_16);

               if (VAR_20+VAR_22 > VAR_0)
               {
                  FUNC_1(VAR_10, "%s: output file name too long: %s%s\n",
                     VAR_14, *VAR_12, VAR_16);
                  VAR_19.status_code |= VAR_8;
                  continue;
               }

               FUNC_4(VAR_13+VAR_20, VAR_16, VAR_22);
               VAR_20 += VAR_22;
               VAR_13[VAR_20] = 0;
               VAR_15 = VAR_13;
            }
         }

         (void)FUNC_5(&VAR_19, *VAR_12, VAR_15);
         ++VAR_18;
         VAR_15 = ((void*)0);
      }
   }

   if (!VAR_18)
      FUNC_9(VAR_14);

   return FUNC_2(&VAR_19);
}
