
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_shader {size_t passes; TYPE_2__* pass; int path; } ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;
struct TYPE_3__ {int path; } ;
struct TYPE_4__ {TYPE_1__ source; } ;




 int VAR_0 ;

 int FUNC_0 (int ) ;

enum rarch_shader_type FUNC_1(
      const struct video_shader *VAR_1)
{
   enum rarch_shader_type VAR_2 = VAR_0;

   size_t VAR_3 = 0;

   if (!VAR_1)
      return VAR_0;

   VAR_2 = FUNC_0(VAR_1->path);

   if (!VAR_1->passes)
      return VAR_2;

   if (VAR_2 == VAR_0)
   {
      VAR_2 = FUNC_0(VAR_1->pass[0].source.path);
      VAR_3 = 1;
   }

   for (; VAR_3 < VAR_1->passes; VAR_3++)
   {
      enum rarch_shader_type VAR_4 =
         FUNC_0(VAR_1->pass[VAR_3].source.path);

      switch (VAR_4)
      {
         case 130:
         case 129:
         case 128:
            if (VAR_2 != VAR_4)
               return VAR_0;
            break;
         default:
            break;
      }
   }

   return VAR_2;
}
