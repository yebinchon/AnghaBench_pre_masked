
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct display {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct display*,int ,char*,char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct display *VAR_4, const char *VAR_5)
{
   if (VAR_5 == ((void*)0))
      return 0;

   else if (VAR_5[0] == 0)
      return 1;

   else
   {
      struct stat VAR_6;
      int VAR_7 = FUNC_3(VAR_5, &VAR_6);

      if (VAR_7 == 0)
      {
         if (FUNC_0(VAR_6.st_mode))
            return 1;


         if (FUNC_1(VAR_5, VAR_2) != 0)
            FUNC_2(VAR_4, VAR_1, "%s: cannot be written (%s)", VAR_5,
                  FUNC_4(VAR_3));

         return 0;
      }

      else
      {

         if (VAR_3 != VAR_0)
            FUNC_2(VAR_4, VAR_1, "%s: invalid output name (%s)",
                  VAR_5, FUNC_4(VAR_3));

         return 0;
      }
   }
}
