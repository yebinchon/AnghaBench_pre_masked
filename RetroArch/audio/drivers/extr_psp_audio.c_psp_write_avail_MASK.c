
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {int fifo_lock; scalar_t__ read_pos; scalar_t__ write_pos; int running; } ;
typedef TYPE_1__ psp_audio_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_2)
{
   size_t VAR_3;
   psp_audio_t* VAR_4 = (psp_audio_t*)VAR_2;

   if (!VAR_4||!VAR_4->running)
      return 0;
   FUNC_0(VAR_4->fifo_lock);
   VAR_3 = VAR_0 - ((uint16_t)
         (VAR_4->write_pos - VAR_4->read_pos) & VAR_1);
   FUNC_1(VAR_4->fifo_lock);
   return VAR_3;
}
