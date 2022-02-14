
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 size_t VAR_0 ;
 int FUNC_2 (struct option const*,char**) ;
 int FUNC_3 (char const*,char**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char**,char**,char**) ;

int FUNC_6(int VAR_1, char *VAR_2[],
      const char *VAR_3, const struct option *VAR_4, int *VAR_5)
{
   int VAR_6, VAR_7;

   (void)VAR_5;

   if (VAR_0 == 0)
      VAR_0 = 1;

   if (VAR_1 < 2)
      return -1;

   VAR_6 = FUNC_1(&VAR_2[VAR_0]);
   VAR_7 = FUNC_0(&VAR_2[VAR_0]);


   if (VAR_6 == -1 && VAR_7 == -1)
      return -1;



   if ((VAR_6 > 0) && ((VAR_6 < VAR_7) || (VAR_7 == -1)))
   {
      FUNC_5(&VAR_2[VAR_0], &VAR_2[VAR_0 + VAR_6], &VAR_2[VAR_1]);
      VAR_6 = 0;
   }
   else if ((VAR_7 > 0) && ((VAR_7 < VAR_6)
            || (VAR_6 == -1)))
   {
      FUNC_5(&VAR_2[VAR_0], &VAR_2[VAR_0 + VAR_7], &VAR_2[VAR_1]);
      VAR_7 = 0;
   }

   FUNC_4(VAR_6 == 0 || VAR_7 == 0);

   if (VAR_6 == 0)
      return FUNC_3(VAR_3, &VAR_2[VAR_0]);
   if (VAR_7 == 0)
      return FUNC_2(VAR_4, &VAR_2[VAR_0]);

   return '?';
}
