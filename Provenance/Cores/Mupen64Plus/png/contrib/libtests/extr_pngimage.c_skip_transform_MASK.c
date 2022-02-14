
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int options; char* filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct display*,int ,char*,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct display *VAR_3, int VAR_4)

{
   if ((VAR_3->options & VAR_2) != 0 && FUNC_2(VAR_4))
   {



      if ((VAR_3->options & VAR_1) != 0)
      {
         FUNC_3("SKIP: %s transforms ", VAR_3->filename);

         while (VAR_4 != 0)
         {
            int VAR_5 = FUNC_1(VAR_4);
            VAR_4 &= ~VAR_5;

            FUNC_3("%s", FUNC_5(VAR_5));
            if (VAR_4 != 0)
               FUNC_4('+');
         }

         FUNC_4('\n');
      }

      else
         FUNC_0(VAR_3, VAR_0, "%s: skipped known bad combo 0x%x",
            VAR_3->filename, VAR_4);

      return 1;
   }

   return 0;
}
