
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int lock; int cond_thread; int reply_cmd; int send_cmd; TYPE_2__ cmd_data; } ;
typedef TYPE_1__ thread_video_t ;
typedef TYPE_2__ thread_packet_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(thread_video_t *VAR_1,
      const thread_packet_t *VAR_2)
{
   FUNC_1(VAR_1->lock);

   VAR_1->cmd_data = *VAR_2;

   VAR_1->send_cmd = VAR_2->type;
   VAR_1->reply_cmd = VAR_0;

   FUNC_0(VAR_1->cond_thread);
   FUNC_2(VAR_1->lock);

}
