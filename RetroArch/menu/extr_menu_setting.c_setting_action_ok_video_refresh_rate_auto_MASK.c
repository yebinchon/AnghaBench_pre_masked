
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,float*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (double*,double*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(
      rarch_setting_t *VAR_2, bool VAR_3)
{
   double VAR_4 = 0.0;
   double VAR_5 = 0.0;
   unsigned VAR_6 = 0;

   if (!VAR_2)
      return -1;

   if (FUNC_3(&VAR_4,
            &VAR_5, &VAR_6))
   {
      float VAR_7 = (float)VAR_4;
      FUNC_1(VAR_1, &VAR_7);

      FUNC_0(VAR_0, ((void*)0));
   }

   if (FUNC_2(VAR_2, VAR_3) != 0)
      return -1;

   return 0;
}
