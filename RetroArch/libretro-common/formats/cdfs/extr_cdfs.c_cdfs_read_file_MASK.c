
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t int64_t ;
struct TYPE_4__ {scalar_t__ first_sector; size_t size; size_t pos; int sector_buffer_valid; int current_sector_offset; void* sector_buffer; scalar_t__ current_sector; TYPE_2__* track; } ;
typedef TYPE_1__ cdfs_file_t ;
struct TYPE_5__ {int stream; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (void*,void*,size_t) ;

int64_t FUNC_3(cdfs_file_t* VAR_0, void* VAR_1, uint64_t VAR_2)
{
   int VAR_3 = 0;

   if (!VAR_0 || VAR_0->first_sector < 0 || !VAR_1)
      return 0;

   if (VAR_2 > VAR_0->size - VAR_0->pos)
      VAR_2 = VAR_0->size - VAR_0->pos;

   if (VAR_2 == 0)
      return 0;

   if (VAR_0->sector_buffer_valid)
   {
      size_t VAR_4 = 2048 - VAR_0->current_sector_offset;
      if (VAR_4 > 0)
      {
         if (VAR_4 >= VAR_2)
         {
            FUNC_2(VAR_1, &VAR_0->sector_buffer[VAR_0->current_sector_offset], VAR_2);
            VAR_0->current_sector_offset += VAR_2;
            return VAR_2;
         }

         FUNC_2(VAR_1, &VAR_0->sector_buffer[VAR_0->current_sector_offset], VAR_4);
         VAR_1 = (char*)VAR_1 + VAR_4;
         VAR_3 += VAR_4;
         VAR_2 -= VAR_4;

         VAR_0->current_sector_offset += VAR_4;
      }

      ++VAR_0->current_sector;
      VAR_0->current_sector_offset = 0;
      VAR_0->sector_buffer_valid = 0;
   }
   else if (VAR_0->current_sector < VAR_0->first_sector)
   {
      VAR_0->current_sector = VAR_0->first_sector;
      VAR_0->current_sector_offset = 0;
   }

   while (VAR_2 >= 2048)
   {
      FUNC_0(VAR_0->track, VAR_0->current_sector);
      FUNC_1(VAR_0->track->stream, VAR_1, 2048);

      VAR_1 = (char*)VAR_1 + 2048;
      VAR_3 += 2048;
      ++VAR_0->current_sector;

      VAR_2 -= 2048;
   }

   if (VAR_2 > 0)
   {
      FUNC_0(VAR_0->track, VAR_0->current_sector);
      FUNC_1(VAR_0->track->stream, VAR_0->sector_buffer, 2048);
      FUNC_2(VAR_1, VAR_0->sector_buffer, VAR_2);
      VAR_0->current_sector_offset = VAR_2;
      VAR_0->sector_buffer_valid = 1;

      VAR_3 += VAR_2;
   }

   VAR_0->pos += VAR_3;
   return VAR_3;
}
