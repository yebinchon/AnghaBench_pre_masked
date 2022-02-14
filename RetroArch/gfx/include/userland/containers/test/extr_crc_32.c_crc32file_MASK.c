
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FILE ;
typedef int Boolean_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

Boolean_T FUNC_6(char *VAR_3, uint32_t *VAR_4, long *VAR_5)
{
      register FILE *VAR_6;
      register uint32_t VAR_7;
      register int VAR_8;

      VAR_7 = 0xFFFFFFFF; *VAR_5 = 0;



      if ((VAR_6=FUNC_3(VAR_3, "r"))==((void*)0))

      {
            FUNC_5(VAR_3);
            return VAR_1;
      }
      while ((VAR_8=FUNC_4(VAR_6))!=VAR_0)
      {
            ++*VAR_5;
            VAR_7 = FUNC_0(VAR_8, VAR_7);
      }

      if (FUNC_2(VAR_6))
      {
            FUNC_5(VAR_3);
            *VAR_5 = -1;
      }
      FUNC_1(VAR_6);

      *VAR_4 = VAR_7 = ~VAR_7;

      return VAR_2;
}
