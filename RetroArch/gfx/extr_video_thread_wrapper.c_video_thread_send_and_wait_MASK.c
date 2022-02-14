
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* send_and_wait ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ thread_video_t ;
typedef int thread_packet_t ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(thread_video_t *VAR_0,
      thread_packet_t *VAR_1)
{
   if (!VAR_0 || !VAR_1)
      return;
   VAR_0->send_and_wait(VAR_0, VAR_1);
}
