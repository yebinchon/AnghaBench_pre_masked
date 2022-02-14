
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ first_sector; unsigned int current_sector; int pos; scalar_t__ current_sector_offset; scalar_t__ sector_buffer_valid; } ;
typedef TYPE_1__ cdfs_file_t ;



void FUNC_0(cdfs_file_t* VAR_0, unsigned int VAR_1)
{

   if (VAR_0->first_sector == 0)
   {
      if (VAR_1 != VAR_0->current_sector)
      {
         VAR_0->current_sector = VAR_1;
         VAR_0->sector_buffer_valid = 0;
      }

      VAR_0->pos = VAR_0->current_sector * 2048;
      VAR_0->current_sector_offset = 0;
   }
}
