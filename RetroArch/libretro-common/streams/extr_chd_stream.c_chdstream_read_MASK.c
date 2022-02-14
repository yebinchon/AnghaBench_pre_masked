
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int ssize_t ;
struct TYPE_6__ {size_t track_end; size_t offset; size_t frame_size; size_t track_start; size_t frames_per_hunk; scalar_t__ frame_offset; scalar_t__ hunkmem; scalar_t__ track_frame; int chd; } ;
typedef TYPE_1__ chdstream_t ;
struct TYPE_7__ {size_t unitbytes; } ;
typedef TYPE_2__ chd_header ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int *,scalar_t__,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;

ssize_t FUNC_4(chdstream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
   size_t VAR_3;
   uint32_t VAR_4;
   uint32_t VAR_5;
   uint32_t VAR_6;
   uint32_t VAR_7;
   uint32_t VAR_8;
   size_t VAR_9 = 0;
   const chd_header *VAR_10 = FUNC_0(VAR_0->chd);
   uint8_t *VAR_11 = (uint8_t*)VAR_1;

   if (VAR_0->track_end - VAR_0->offset < VAR_2)
      VAR_2 = VAR_0->track_end - VAR_0->offset;

   VAR_3 = VAR_0->offset + VAR_2;
   while (VAR_0->offset < VAR_3)
   {
      VAR_4 = VAR_0->offset % VAR_0->frame_size;
      VAR_8 = VAR_0->frame_size - VAR_4;
      if (VAR_8 > VAR_3 - VAR_0->offset)
         VAR_8 = (uint32_t)(VAR_3 - VAR_0->offset);


      if (VAR_0->offset < VAR_0->track_start)
         FUNC_3(VAR_11 + VAR_9, 0, VAR_8);
      else
      {
         VAR_6 = (uint32_t)(VAR_0->track_frame +
            (VAR_0->offset - VAR_0->track_start) / VAR_0->frame_size);
         VAR_7 = VAR_6 / VAR_0->frames_per_hunk;
         VAR_5 = (VAR_6 % VAR_0->frames_per_hunk) * VAR_10->unitbytes;

         if (!FUNC_1(VAR_0, VAR_7))
         {
            return -1;
         }
         FUNC_2(VAR_11 + VAR_9,
                VAR_0->hunkmem + VAR_4
                + VAR_5 + VAR_0->frame_offset, VAR_8);
      }

      VAR_9 += VAR_8;
      VAR_0->offset += VAR_8;
   }

   return VAR_2;
}
