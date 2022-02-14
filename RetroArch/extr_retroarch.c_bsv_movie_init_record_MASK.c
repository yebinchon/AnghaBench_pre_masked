
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__ retro_ctx_size_info_t ;
struct TYPE_8__ {int* data; int size; } ;
typedef TYPE_2__ retro_ctx_serialize_info_t ;
typedef int intfstream_t ;
typedef int header ;
struct TYPE_9__ {int min_file_pos; int state_size; int* state; int * file; } ;
typedef TYPE_3__ bsv_movie_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (int *,int*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(
      bsv_movie_t *VAR_6, const char *VAR_7)
{
   retro_ctx_size_info_t VAR_8;
   uint32_t VAR_9 = 0;
   uint32_t VAR_10 = 0;
   uint32_t VAR_11[4] = {0};
   intfstream_t *VAR_12 = FUNC_4(VAR_7,
         VAR_4,
         VAR_3);

   if (!VAR_12)
   {
      FUNC_0("Could not open BSV file for recording, path : \"%s\".\n", VAR_7);
      return 0;
   }

   VAR_6->file = VAR_12;

   VAR_10 = FUNC_1();



   VAR_11[VAR_2] = FUNC_8(VAR_0);
   VAR_11[VAR_1] = FUNC_7(VAR_10);

   FUNC_3(&VAR_8);

   VAR_9 = (unsigned)VAR_8.size;

   VAR_11[VAR_5] = FUNC_7(VAR_9);







   FUNC_5(VAR_6->file, VAR_11, 4 * sizeof(uint32_t));

   VAR_6->min_file_pos = sizeof(VAR_11) + VAR_9;
   VAR_6->state_size = VAR_9;

   if (VAR_9)
   {
      retro_ctx_serialize_info_t VAR_13;

      VAR_6->state = (uint8_t*)FUNC_6(VAR_9);
      if (!VAR_6->state)
         return 0;

      VAR_13.data = VAR_6->state;
      VAR_13.size = VAR_9;

      FUNC_2(&VAR_13);

      FUNC_5(VAR_6->file,
            VAR_6->state, VAR_9);
   }

   return 1;
}
