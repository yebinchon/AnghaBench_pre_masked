
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* data; int member_0; } ;
typedef TYPE_4__ video_shader_ctx_t ;
struct video_shader {int passes; TYPE_3__* pass; } ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
typedef int config_file_t ;
struct TYPE_7__ {int path; } ;
struct TYPE_8__ {TYPE_2__ source; } ;
struct TYPE_6__ {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct video_shader* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,struct video_shader*) ;
 int * FUNC_12 (char const*) ;
 int FUNC_13 (int *,struct video_shader*) ;

bool FUNC_14(void)
{
   enum rarch_shader_type VAR_4 = VAR_1;
   bool VAR_5 = 1;
   bool VAR_6 = 0;
   const char *VAR_7 = ((void*)0);
   struct video_shader *VAR_8 = ((void*)0);





   video_shader_ctx_t VAR_9 = {0};

   FUNC_8(&VAR_9);

   if (VAR_9.data)
      VAR_7 = VAR_9.data->path;
   else
      VAR_7 = FUNC_5();

   FUNC_3();

   VAR_8 = (struct video_shader*)
      FUNC_0(1, sizeof(*VAR_8));

   if (!VAR_8)
   {
      VAR_5 = 0;
      goto end;
   }

   if (FUNC_6(VAR_7))
      goto end;

   VAR_4 = FUNC_9(FUNC_4(VAR_7),
         &VAR_6);

   if (!FUNC_10(VAR_4))
   {
      VAR_5 = 0;
      goto end;
   }

   if (VAR_6)
   {
      config_file_t *VAR_10 = ((void*)0);

      VAR_10 = FUNC_12(VAR_7);

      if (!VAR_10)
      {
         VAR_5 = 0;
         goto end;
      }

      if (FUNC_11(VAR_10, VAR_8))
         FUNC_13(VAR_10, VAR_8);

      VAR_3 = 0;

      FUNC_2(VAR_10);
   }
   else
   {
      FUNC_7(VAR_8->pass[0].source.path, VAR_7,
            sizeof(VAR_8->pass[0].source.path));
      VAR_8->passes = 1;
   }

end:
   VAR_2 = VAR_8;
   FUNC_1(VAR_0, ((void*)0));
   return VAR_5;
}
