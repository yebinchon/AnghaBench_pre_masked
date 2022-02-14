
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ fad_start; scalar_t__ fad_end; int file_offset; scalar_t__ sector_size; scalar_t__ fp; scalar_t__ sub_fp; int interleaved_sub; } ;
typedef TYPE_1__ track_info_struct ;
struct TYPE_6__ {int track_num; TYPE_1__* track; } ;
struct TYPE_5__ {int session_num; TYPE_3__* session; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__ VAR_2 ;
 size_t FUNC_2 (char*,int,int,scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (void*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(u32 VAR_4, void *VAR_5) {
   int VAR_6,VAR_7;
   size_t VAR_8 = 0;
   track_info_struct *VAR_9=((void*)0);

   FUNC_1(VAR_2.session);

   FUNC_5(VAR_5, 0, 2448);

   for (VAR_6 = 0; VAR_6 < VAR_2.session_num; VAR_6++)
   {
      for (VAR_7 = 0; VAR_7 < VAR_2.session[VAR_6].track_num; VAR_7++)
      {
         if (VAR_4 >= VAR_2.session[VAR_6].track[VAR_7].fad_start &&
             VAR_4 <= VAR_2.session[VAR_6].track[VAR_7].fad_end)
         {
            VAR_9 = &VAR_2.session[VAR_6].track[VAR_7];
            break;
         }
      }
   }

   if (VAR_9 == ((void*)0))
   {
      FUNC_0("Warning: Sector not found in track list");
      return 0;
   }

   FUNC_3(VAR_9->fp, VAR_9->file_offset + (VAR_4-VAR_9->fad_start) * VAR_9->sector_size, VAR_1);
 if (VAR_9->sub_fp)
  FUNC_3(VAR_9->sub_fp, VAR_9->file_offset + (VAR_4-VAR_9->fad_start) * 96, VAR_1);
   if (VAR_9->sector_size == 2448)
   {
      if (!VAR_9->interleaved_sub)
  {
   if (VAR_9->sub_fp)
   {
            VAR_8 = FUNC_2(VAR_5, 2352, 1, VAR_9->fp);
            VAR_8 = FUNC_2((char *)VAR_5 + 2352, 96, 1, VAR_9->sub_fp);
   }
   else
            VAR_8 = FUNC_2(VAR_5, 2448, 1, VAR_9->fp);
  }
      else
      {
         const u16 VAR_10[] = {
            0, 66, 125, 191, 100, 50, 150, 175, 8, 33, 58, 83,
            108, 133, 158, 183, 16, 41, 25, 91, 116, 141, 166, 75,
            24, 90, 149, 215, 124, 74, 174, 199, 32, 57, 82, 107,
            132, 157, 182, 207, 40, 65, 49, 115, 140, 165, 190, 99,
            48, 114, 173, 239, 148, 98, 198, 223, 56, 81, 106, 131,
            156, 181, 206, 231, 64, 89, 73, 139, 164, 189, 214, 123,
            72, 138, 197, 263, 172, 122, 222, 247, 80, 105, 130, 155,
            180, 205, 230, 255, 88, 113, 97, 163, 188, 213, 238, 147
         };
         u8 VAR_11[96 * 3];

         VAR_8 = FUNC_2(VAR_5, 2352, 1, VAR_9->fp);

         VAR_8 = FUNC_2(VAR_11, 96, 1, VAR_9->fp);
         FUNC_3(VAR_9->fp, 2352, VAR_0);
         VAR_8 = FUNC_2(VAR_11 + 96, 96, 1, VAR_9->fp);
         FUNC_3(VAR_9->fp, 2352, VAR_0);
         VAR_8 = FUNC_2(VAR_11 + 192, 96, 1, VAR_9->fp);
         for (VAR_6 = 0; VAR_6 < 96; VAR_6++)
            ((u8 *)VAR_5)[2352+VAR_6] = VAR_11[VAR_10[VAR_6]];
      }
   }
   else if (VAR_9->sector_size == 2352)
   {

      VAR_8 = FUNC_2(VAR_5, 2352, 1, VAR_9->fp);
   }
   else if (VAR_9->sector_size == 2048)
   {
      FUNC_4(VAR_5, VAR_3, 12);
      VAR_8 = FUNC_2((char *)VAR_5 + 0x10, 2048, 1, VAR_9->fp);
   }
 return 1;
}
