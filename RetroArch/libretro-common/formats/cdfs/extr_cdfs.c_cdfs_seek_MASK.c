
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ first_sector; unsigned int pos; int size; int current_sector_offset; int current_sector; int sector_buffer_valid; } ;
typedef TYPE_1__ cdfs_file_t ;






int64_t FUNC_0(cdfs_file_t* VAR_0, int64_t VAR_1, int VAR_2)
{
   int64_t VAR_3;
   int VAR_4;

   if (!VAR_0 || VAR_0->first_sector < 0)
      return -1;

   switch (VAR_2)
   {
      case 128:
         VAR_3 = VAR_1;
         break;

      case 130:
         VAR_3 = VAR_0->pos + VAR_1;
         break;

      case 129:
         VAR_3 = VAR_0->size - VAR_1;
         break;

      default:
         return -1;
   }

   if (VAR_3 < 0)
      return -1;
   else if (VAR_3 > VAR_0->size)
      return -1;

   VAR_0->pos = (unsigned int)VAR_3;
   VAR_0->current_sector_offset = VAR_0->pos % 2048;

   VAR_4 = VAR_0->pos / 2048;
   if (VAR_4 != VAR_0->current_sector)
   {
      VAR_0->current_sector = VAR_4;
      VAR_0->sector_buffer_valid = 0;
   }

   return 0;
}
