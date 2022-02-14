
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int output; TYPE_1__* buffers; int is_paused; } ;
typedef TYPE_2__ switch_audio_t ;
struct TYPE_4__ {TYPE_2__* buffer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
   switch_audio_t *VAR_2 = (switch_audio_t*) VAR_1;

   if (!VAR_2)
      return;
   FUNC_1(&VAR_2->output);
   FUNC_0();

   FUNC_4(VAR_2);
}
