
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int size; int data; } ;
typedef TYPE_1__ retro_ctx_serialize_info_t ;
struct TYPE_6__ {int did_rewind; int frame_ptr; scalar_t__* frame_pos; scalar_t__ min_file_pos; int frame_mask; int file; int state_size; int state; int playback; scalar_t__ first_rewind; } ;
typedef TYPE_2__ bsv_movie_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int ) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(void)
{
   bsv_movie_t *VAR_2 = VAR_1;

   if (!VAR_2)
      return;

   VAR_2->did_rewind = 1;

   if ( (VAR_2->frame_ptr <= 1)
         && (VAR_2->frame_pos[0] == VAR_2->min_file_pos))
   {

      VAR_2->frame_ptr = 0;
      FUNC_1(VAR_2->file, (int)VAR_2->min_file_pos, VAR_0);
   }
   else
   {






      VAR_2->frame_ptr = (VAR_2->frame_ptr -
            (VAR_2->first_rewind ? 1 : 2)) & VAR_2->frame_mask;
      FUNC_1(VAR_2->file,
            (int)VAR_2->frame_pos[VAR_2->frame_ptr], VAR_0);
   }

   if (FUNC_2(VAR_2->file) <= (long)VAR_2->min_file_pos)
   {


      if (!VAR_2->playback)
      {
         retro_ctx_serialize_info_t VAR_3;




         FUNC_1(VAR_2->file, 4 * sizeof(uint32_t), VAR_0);

         VAR_3.data = VAR_2->state;
         VAR_3.size = VAR_2->state_size;

         FUNC_0(&VAR_3);

         FUNC_3(VAR_2->file, VAR_2->state, VAR_2->state_size);
      }
      else
         FUNC_1(VAR_2->file, (int)VAR_2->min_file_pos, VAR_0);
   }
}
