
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__ retro_ctx_size_info_t ;
struct TYPE_8__ {scalar_t__* data_const; scalar_t__ size; } ;
typedef TYPE_2__ retro_ctx_serialize_info_t ;
typedef int intfstream_t ;
typedef int header ;
struct TYPE_9__ {int playback; scalar_t__* state; int min_file_pos; int * file; scalar_t__ state_size; } ;
typedef TYPE_3__ bsv_movie_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (char const*,int ,int ) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static bool FUNC_11(
      bsv_movie_t *VAR_10, const char *VAR_11)
{
   uint32_t VAR_12 = 0;
   uint32_t VAR_13 = 0;
   uint32_t VAR_14[4] = {0};
   intfstream_t *VAR_15 = FUNC_5(VAR_11,
         VAR_8,
         VAR_7);

   if (!VAR_15)
   {
      FUNC_0("Could not open BSV file for playback, path : \"%s\".\n", VAR_11);
      return 0;
   }

   VAR_10->file = VAR_15;
   VAR_10->playback = 1;

   FUNC_6(VAR_10->file, VAR_14, sizeof(uint32_t) * 4);


   if (FUNC_10(VAR_14[VAR_2]) != VAR_0
         && FUNC_9(VAR_14[VAR_2]) != VAR_0)
   {
      FUNC_0("%s\n", FUNC_8(VAR_5));
      return 0;
   }

   VAR_13 = FUNC_2();

   if (VAR_13 != 0)
      if (FUNC_9(VAR_14[VAR_1]) != VAR_13)
         FUNC_1("%s.\n", FUNC_8(VAR_4));

   VAR_12 = FUNC_9(VAR_14[VAR_9]);
   if (VAR_12)
   {
      retro_ctx_size_info_t VAR_16;
      retro_ctx_serialize_info_t VAR_17;
      uint8_t *VAR_18 = (uint8_t*)FUNC_7(VAR_12);

      if (!VAR_18)
         return 0;

      VAR_10->state = VAR_18;
      VAR_10->state_size = VAR_12;
      if (FUNC_6(VAR_10->file,
               VAR_10->state, VAR_12) != VAR_12)
      {
         FUNC_0("%s\n", FUNC_8(VAR_3));
         return 0;
      }

      FUNC_3( &VAR_16);

      if (VAR_16.size == VAR_12)
      {
         VAR_17.data_const = VAR_10->state;
         VAR_17.size = VAR_12;
         FUNC_4(&VAR_17);
      }
      else
         FUNC_1("%s\n",
               FUNC_8(VAR_6));
   }

   VAR_10->min_file_pos = sizeof(VAR_14) + VAR_12;

   return 1;
}
