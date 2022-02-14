
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_video_t ;
struct TYPE_5__ {int type; char const* path; } ;
struct TYPE_6__ {int b; TYPE_1__ set_shader; } ;
struct TYPE_7__ {TYPE_2__ data; int member_0; } ;
typedef TYPE_3__ thread_packet_t ;
typedef enum rarch_shader_type { ____Placeholder_rarch_shader_type } rarch_shader_type ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1,
      enum rarch_shader_type VAR_2, const char *VAR_3)
{
   thread_video_t *VAR_4 = (thread_video_t*)VAR_1;
   thread_packet_t VAR_5 = {VAR_0};
   if (!VAR_4)
      return 0;

   VAR_5.data.set_shader.type = VAR_2;
   VAR_5.data.set_shader.path = VAR_3;

   FUNC_0(VAR_4, &VAR_5);

   return VAR_5.data.b;
}
