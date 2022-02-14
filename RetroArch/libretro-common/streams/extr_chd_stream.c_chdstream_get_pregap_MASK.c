
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ pregap; scalar_t__ frames; scalar_t__ extra; } ;
typedef TYPE_1__ metadata_t ;
struct TYPE_6__ {scalar_t__ track_frame; int chd; } ;
typedef TYPE_2__ chdstream_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__,TYPE_1__*) ;

uint32_t FUNC_1(chdstream_t *VAR_0)
{
   metadata_t VAR_1;
   uint32_t VAR_2 = 0;
   uint32_t VAR_3;

   for (VAR_3 = 0; FUNC_0(VAR_0->chd, VAR_3, &VAR_1); ++VAR_3)
   {
      if (VAR_0->track_frame == VAR_2)
         return VAR_1.pregap;

      VAR_2 += VAR_1.frames + VAR_1.extra;
   }

   return 0;
}
