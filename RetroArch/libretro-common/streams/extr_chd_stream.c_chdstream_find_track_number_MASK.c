
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ track; scalar_t__ extra; scalar_t__ frames; scalar_t__ frame_offset; } ;
typedef TYPE_1__ metadata_t ;
typedef scalar_t__ int32_t ;
typedef int chd_file ;


 int FUNC_0 (int *,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(chd_file *VAR_0, int32_t VAR_1, metadata_t *VAR_2)
{
   uint32_t VAR_3;
   uint32_t VAR_4 = 0;

   for (VAR_3 = 0; 1; ++VAR_3)
   {
      if (!FUNC_0(VAR_0, VAR_3, VAR_2))
         return 0;

      if (VAR_1 == VAR_2->track)
      {
         VAR_2->frame_offset = VAR_4;
         return 1;
      }

      VAR_4 += VAR_2->frames + VAR_2->extra;
   }
}
