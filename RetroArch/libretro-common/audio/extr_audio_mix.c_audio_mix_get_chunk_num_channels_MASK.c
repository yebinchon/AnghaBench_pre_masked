
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rwav; } ;
typedef TYPE_2__ audio_chunk_t ;
struct TYPE_4__ {int numchannels; } ;



int FUNC_0(audio_chunk_t *VAR_0)
{
   if (!VAR_0)
      return 0;

   if (VAR_0->rwav)
      return VAR_0->rwav->numchannels;


   return 0;
}
