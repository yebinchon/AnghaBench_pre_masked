
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_shader {int dummy; } ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
typedef int config_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct video_shader*) ;
 int FUNC_5 (int,char const*,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int *,struct video_shader*) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (int *,struct video_shader*) ;

bool FUNC_10(struct video_shader *VAR_2,
      enum rarch_shader_type VAR_3, const char *VAR_4, bool VAR_5)
{
   config_file_t *VAR_6 = ((void*)0);
   bool VAR_7 = 0;
   bool VAR_8 = 0;

   if (VAR_5 && !FUNC_5(VAR_3, VAR_4, 1))
   {







      FUNC_4(VAR_2);
      FUNC_1(VAR_0, ((void*)0));
      return 0;
   }

   if (FUNC_6(VAR_4))
   {
      FUNC_4(VAR_2);
      FUNC_1(VAR_0, ((void*)0));
      return 1;
   }

   if (!VAR_2)
   {
      VAR_8 = 0;
      goto end;
   }





   if (!(VAR_6 = FUNC_8(VAR_4)))
   {
      VAR_8 = 0;
      goto end;
   }

   FUNC_0("Setting Menu shader: %s.\n", VAR_4);

   if (FUNC_7(VAR_6, VAR_2))
      FUNC_9(VAR_6, VAR_2);

   if (VAR_6)
      FUNC_2(VAR_6);

   VAR_8 = 1;

end:
   FUNC_1(VAR_0, ((void*)0));



   return VAR_8;
}
