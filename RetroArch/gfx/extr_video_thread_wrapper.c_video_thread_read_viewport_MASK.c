
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int is_idle; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_6__ {int b; int * v; } ;
struct TYPE_8__ {TYPE_1__ data; int member_0; } ;
typedef TYPE_3__ thread_packet_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_1, uint8_t *VAR_2, bool VAR_3)
{
   thread_video_t *VAR_4 = (thread_video_t*)VAR_1;
   thread_packet_t VAR_5 = { VAR_0 };

   if (!VAR_4)
      return 0;

   VAR_5.data.v = VAR_2;
   VAR_4->is_idle = VAR_3;

   FUNC_0(VAR_4, &VAR_5);

   return VAR_5.data.b;
}
