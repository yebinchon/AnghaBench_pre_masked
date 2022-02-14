
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stopped; int stopped_ack; int lock; int cond; } ;
typedef TYPE_1__ audio_thread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(audio_thread_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->stopped)
      return;

   FUNC_2(VAR_0->lock);
   VAR_0->stopped_ack = 0;
   VAR_0->stopped = 1;
   FUNC_0(VAR_0->cond);


   while (!VAR_0->stopped_ack)
      FUNC_1(VAR_0->cond, VAR_0->lock);

   FUNC_3(VAR_0->lock);
}
