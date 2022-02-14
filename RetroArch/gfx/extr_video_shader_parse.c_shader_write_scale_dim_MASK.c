
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef enum gfx_scale_type { ____Placeholder_gfx_scale_type } gfx_scale_type ;
typedef int config_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,float) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_5(config_file_t *VAR_1,
      const char *VAR_2,
      enum gfx_scale_type VAR_3, float VAR_4,
      unsigned VAR_5, unsigned VAR_6)
{
   char VAR_7[64];

   VAR_7[0] = '\0';

   FUNC_4(VAR_7, sizeof(VAR_7), "scale_type_%s%u", VAR_2, VAR_6);
   FUNC_2(VAR_1, VAR_7, FUNC_3(VAR_3));

   FUNC_4(VAR_7, sizeof(VAR_7), "scale_%s%u", VAR_2, VAR_6);
   if (VAR_3 == VAR_0)
      FUNC_1(VAR_1, VAR_7, VAR_5);
   else
      FUNC_0(VAR_1, VAR_7, VAR_4);
}
