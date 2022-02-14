
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int cpu_ticks_last; int playpos; } ;
typedef TYPE_1__ ctr_csnd_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(ctr_csnd_audio_t* VAR_2)
{
   uint64_t VAR_3 = FUNC_0();
   uint32_t VAR_4 = (VAR_3 - VAR_2->cpu_ticks_last)
      / VAR_1;

   VAR_2->playpos = (VAR_2->playpos + VAR_4) & VAR_0;
   VAR_2->cpu_ticks_last += VAR_4 * VAR_1;
}
