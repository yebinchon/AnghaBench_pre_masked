
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int quit_thread; int cond; int cond_lock; int lock; int buffer; int audio_port; int thread; } ;
typedef TYPE_1__ ps3_audio_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_0)
{
   uint64_t VAR_1;
   ps3_audio_t *VAR_2 = VAR_0;

   VAR_2->quit_thread = 1;
   FUNC_4(VAR_2, 0);
   FUNC_8(VAR_2->thread, &VAR_1);

   FUNC_5(VAR_2);
   FUNC_0(VAR_2->audio_port);
   FUNC_1();
   FUNC_2(VAR_2->buffer);

   FUNC_7(&VAR_2->lock);
   FUNC_7(&VAR_2->cond_lock);
   FUNC_6(&VAR_2->cond);

   FUNC_3(VAR_0);
}
