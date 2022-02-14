
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int alive; int lock; } ;
typedef TYPE_2__ thread_video_t ;
struct TYPE_6__ {int b; } ;
struct TYPE_8__ {TYPE_1__ data; int member_0; } ;
typedef TYPE_3__ thread_packet_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_2)
{
   bool VAR_3;
   thread_video_t *VAR_4 = (thread_video_t*)VAR_2;

   if (FUNC_0(VAR_1, ((void*)0)))
   {
      thread_packet_t VAR_5 = { VAR_0 };

      FUNC_3(VAR_4, &VAR_5);
      return VAR_5.data.b;
   }

   FUNC_1(VAR_4->lock);
   VAR_3 = VAR_4->alive;
   FUNC_2(VAR_4->lock);

   return VAR_3;
}
