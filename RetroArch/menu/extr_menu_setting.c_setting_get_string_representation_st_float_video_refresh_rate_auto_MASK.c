
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rarch_setting_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,double,double,unsigned int) ;
 int FUNC_3 (char*,int ,size_t) ;
 scalar_t__ FUNC_4 (double*,double*,unsigned int*) ;

__attribute__((used)) static void
FUNC_5(
      rarch_setting_t *VAR_2, char *VAR_3, size_t VAR_4)
{
   double VAR_5 = 0.0;
   double VAR_6 = 0.0;
   unsigned VAR_7 = 0;
   if (!VAR_2)
      return;

   if (FUNC_4(&VAR_5,
            &VAR_6, &VAR_7))
   {
      FUNC_2(VAR_3, VAR_4, "%.3f Hz (%.1f%% dev, %u samples)",
            VAR_5, 100.0 * VAR_6, VAR_7);
      FUNC_0(VAR_0, ((void*)0));
   }
   else
      FUNC_3(VAR_3, FUNC_1(VAR_1), VAR_4);
}
