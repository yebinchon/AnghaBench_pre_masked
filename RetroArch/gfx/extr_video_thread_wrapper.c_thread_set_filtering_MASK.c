
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_video_t ;
struct TYPE_5__ {unsigned int index; int smooth; } ;
struct TYPE_6__ {TYPE_1__ filtering; } ;
struct TYPE_7__ {TYPE_2__ data; int member_0; } ;
typedef TYPE_3__ thread_packet_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned VAR_2, bool VAR_3)
{
   thread_video_t *VAR_4 = (thread_video_t*)VAR_1;
   thread_packet_t VAR_5 = { VAR_0 };

   if (!VAR_4)
      return;
   VAR_5.data.filtering.index = VAR_2;
   VAR_5.data.filtering.smooth = VAR_3;

   FUNC_0(VAR_4, &VAR_5);
}
