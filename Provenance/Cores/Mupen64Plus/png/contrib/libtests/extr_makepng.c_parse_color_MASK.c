
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 unsigned long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, unsigned int *VAR_2)
{
   unsigned int VAR_3 = 0;

   while (*VAR_1 && VAR_3 < 4)
   {
      char *VAR_4 = VAR_1;

      unsigned long VAR_5 = FUNC_2(VAR_1, &VAR_4, 0);

      if (VAR_5 > 65535)
      {
         FUNC_1(VAR_0, "makepng --color=...'%s': too big\n", VAR_1);
         FUNC_0(1);
      }

      if (VAR_4 == VAR_1)
      {
         FUNC_1(VAR_0, "makepng --color=...'%s': not a valid color\n", VAR_1);
         FUNC_0(1);
      }

      if (*VAR_4) ++VAR_4;
      VAR_1 = VAR_4;

      VAR_2[++VAR_3] = (unsigned int)VAR_5;
   }

   if (*VAR_1)
   {
      FUNC_1(VAR_0, "makepng --color=...'%s': too many values\n", VAR_1);
      FUNC_0(1);
   }

   *VAR_2 = VAR_3;
}
