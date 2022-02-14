
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {char* namebuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct display*,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct display*,char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct display *VAR_2, const char *VAR_3, const char *VAR_4)
{

   VAR_2->namebuf[0] = 0;

   if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
      FUNC_0(VAR_2, VAR_0, "NULL name to makename");

   else
   {
      size_t VAR_5 = FUNC_3(VAR_3);

      if (VAR_5 <= (sizeof VAR_2->namebuf)-2)
      {
         size_t VAR_6 = FUNC_3(VAR_4);
         size_t VAR_7 = VAR_6-1;


         if (VAR_4[VAR_7] == '/')
            FUNC_0(VAR_2, VAR_0, "infile with trailing /");

         FUNC_2(VAR_2->namebuf, VAR_3, VAR_5);
         if (VAR_5 > 0 && VAR_2->namebuf[VAR_5-1] != '/')
            VAR_2->namebuf[VAR_5++] = '/';


         while (VAR_7 > 0 && VAR_4[VAR_7-1] != '/')
            --VAR_7;

         VAR_6 -= VAR_7;
         VAR_4 += VAR_7;

         if (VAR_5+VAR_6 < (sizeof VAR_2->namebuf))
         {
            FUNC_2(VAR_2->namebuf+VAR_5, VAR_4, VAR_6+1);

            if (FUNC_1(VAR_2, VAR_2->namebuf))
               FUNC_0(VAR_2, VAR_1, "%s: output file is a directory",
                     VAR_2->namebuf);
         }

         else
         {
            VAR_2->namebuf[VAR_5] = 0;
            FUNC_0(VAR_2, VAR_1, "%s%s: output file name too long",
                  VAR_2->namebuf, VAR_4);
         }
      }

      else
         FUNC_0(VAR_2, VAR_1, "%s: output directory name too long", VAR_3);
   }
}
