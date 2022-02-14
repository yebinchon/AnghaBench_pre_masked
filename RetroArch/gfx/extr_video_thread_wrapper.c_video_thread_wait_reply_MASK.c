
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ reply_cmd; int lock; TYPE_2__ cmd_data; int cond_cmd; } ;
typedef TYPE_1__ thread_video_t ;
typedef TYPE_2__ thread_packet_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(thread_video_t *VAR_1, thread_packet_t *VAR_2)
{
   FUNC_1(VAR_1->lock);

   while (VAR_2->type != VAR_1->reply_cmd)
      FUNC_0(VAR_1->cond_cmd, VAR_1->lock);

   *VAR_2 = VAR_1->cmd_data;
   VAR_1->cmd_data.type = VAR_0;

   FUNC_2(VAR_1->lock);
}
