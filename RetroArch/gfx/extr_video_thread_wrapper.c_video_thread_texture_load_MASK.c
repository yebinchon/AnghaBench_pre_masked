
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_video_t ;
struct TYPE_5__ {int return_value; void* data; int method; } ;
struct TYPE_6__ {TYPE_1__ custom_command; } ;
struct TYPE_7__ {TYPE_2__ data; int member_0; } ;
typedef TYPE_3__ thread_packet_t ;
typedef int custom_command_method_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*) ;

unsigned FUNC_2(void *VAR_1,
      custom_command_method_t VAR_2)
{
   thread_video_t *VAR_3 = (thread_video_t*)FUNC_0(1);
   thread_packet_t VAR_4 = { VAR_0 };

   if (!VAR_3)
      return 0;

   VAR_4.data.custom_command.method = VAR_2;
   VAR_4.data.custom_command.data = (void*)VAR_1;

   FUNC_1(VAR_3, &VAR_4);

   return VAR_4.data.custom_command.return_value;
}
