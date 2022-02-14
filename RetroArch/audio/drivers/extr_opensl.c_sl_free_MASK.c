
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* buffer_chunk; struct TYPE_3__* buffer; scalar_t__ cond; scalar_t__ lock; scalar_t__ engine_object; scalar_t__ output_mix; scalar_t__ buffer_queue_object; scalar_t__ player; } ;
typedef TYPE_1__ sl_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
   sl_t *VAR_2 = (sl_t*)VAR_1;
   if (!VAR_2)
      return;

   if (VAR_2->player)
      FUNC_1(VAR_2->player, VAR_0);

   if (VAR_2->buffer_queue_object)
      FUNC_0(VAR_2->buffer_queue_object);

   if (VAR_2->output_mix)
      FUNC_0(VAR_2->output_mix);

   if (VAR_2->engine_object)
      FUNC_0(VAR_2->engine_object);

   if (VAR_2->lock)
      FUNC_4(VAR_2->lock);
   if (VAR_2->cond)
      FUNC_3(VAR_2->cond);

   FUNC_2(VAR_2->buffer);
   FUNC_2(VAR_2->buffer_chunk);
   FUNC_2(VAR_2);
}
