
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_video_t ;
struct TYPE_4__ {unsigned int i; } ;
struct TYPE_5__ {TYPE_1__ data; int member_0; } ;
typedef TYPE_2__ thread_packet_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned VAR_2)
{
   thread_video_t *VAR_3 = (thread_video_t*)VAR_1;
   thread_packet_t VAR_4 = { VAR_0 };

   if (!VAR_3)
      return;

   VAR_4.data.i = VAR_2;

   FUNC_0(VAR_3, &VAR_4);
}
