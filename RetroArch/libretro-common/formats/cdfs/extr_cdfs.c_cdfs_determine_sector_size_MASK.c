
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {int pregap_sectors; int stream_sector_size; int stream_sector_header_size; int stream; } ;
typedef TYPE_1__ cdfs_track_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int const,int ) ;

__attribute__((used)) static void FUNC_3(cdfs_track_t* VAR_1)
{
   uint8_t VAR_2[32];
   int64_t VAR_3;
   const int VAR_4 = VAR_1->pregap_sectors + 16;
   FUNC_2(VAR_1->stream, VAR_4 * 2352, VAR_0);
   if (FUNC_1(VAR_1->stream, VAR_2, sizeof(VAR_2)) < sizeof(VAR_2))
      return;


   if (VAR_2[25] == 0x43 && VAR_2[26] == 0x44 &&
      VAR_2[27] == 0x30 && VAR_2[28] == 0x30 && VAR_2[29] == 0x31)
   {
      VAR_1->stream_sector_size = 2352;
      VAR_1->stream_sector_header_size = 24;
   }

   else if (VAR_2[17] == 0x43 && VAR_2[18] == 0x44 &&
      VAR_2[19] == 0x30 && VAR_2[20] == 0x30 && VAR_2[21] == 0x31)
   {
      VAR_1->stream_sector_size = 2352;
      VAR_1->stream_sector_header_size = 16;
   }
   else
   {

      if (VAR_2[0] == 0 && VAR_2[1] == 0xFF && VAR_2[2] == 0xFF && VAR_2[3] == 0xFF &&
         VAR_2[4] == 0xFF && VAR_2[5] == 0xFF && VAR_2[6] == 0xFF && VAR_2[7] == 0xFF &&
         VAR_2[8] == 0xFF && VAR_2[9] == 0xFF && VAR_2[10] == 0xFF && VAR_2[11] == 0)
      {



         VAR_1->stream_sector_size = 2352;
         VAR_1->stream_sector_header_size = 16;
      }
      else
      {

         VAR_3 = FUNC_0(VAR_1->stream);

         if ((VAR_3 % 2352) == 0)
         {

            VAR_1->stream_sector_size = 2352;
         }
         else if ((VAR_3 % 2048) == 0)
         {

            VAR_1->stream_sector_size = 2048;
         }
         else if ((VAR_3 % 2336) == 0)
         {

            VAR_1->stream_sector_size = 2336;
            VAR_1->stream_sector_header_size = 8;
         }
      }
   }
}
