
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wavefront_model_loading_s {int dummy; } ;
typedef int WAVEFRONT_MODEL_T ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct wavefront_model_loading_s*,int,int const,int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, WAVEFRONT_MODEL_T *VAR_2, struct wavefront_model_loading_s *VAR_3)
{
   FILE *VAR_4;
   int VAR_5;
   const int VAR_6 = sizeof *VAR_3 +
      sizeof(float)*(3+2+3)*VAR_0 +
      sizeof(unsigned short)*3*VAR_0;

   VAR_4 = FUNC_1(VAR_1, "r");
   if (!VAR_4) return -1;
   VAR_5 = FUNC_2(VAR_3, 1, VAR_6, VAR_4);
   if (VAR_5 < 0) return -1;
   FUNC_0(VAR_4);
   return 0;
}
