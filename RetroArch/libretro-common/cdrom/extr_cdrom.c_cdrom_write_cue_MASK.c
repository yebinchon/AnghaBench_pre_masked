
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int libretro_vfs_implementation_file ;
struct TYPE_6__ {unsigned char num_tracks; TYPE_1__* track; } ;
typedef TYPE_2__ cdrom_toc_t ;
typedef int buf ;
struct TYPE_5__ {unsigned char track_num; unsigned char min; unsigned char sec; unsigned char frame; unsigned int lba; int audio; int mode; unsigned int lba_start; } ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (unsigned int,unsigned char*,unsigned char*,unsigned char*) ;
 unsigned int FUNC_2 (unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char,TYPE_2__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,size_t,char*,...) ;
 int VAR_1 ;

int FUNC_9(libretro_vfs_implementation_file *VAR_2, char **VAR_3, size_t *VAR_4, char VAR_5, unsigned char *VAR_6, cdrom_toc_t *VAR_7)
{
   unsigned char VAR_8[2352] = {0};
   unsigned short VAR_9 = 0;
   size_t VAR_10 = 0;
   size_t VAR_11 = 0;
   int VAR_12 = 0;
   int VAR_13;

   if (!VAR_3 || !VAR_4 || !VAR_6 || !VAR_7)
   {




      return 1;
   }

   FUNC_5(VAR_2, 0xFFFFFFFF);

   VAR_12 = FUNC_3(VAR_2, VAR_8, sizeof(VAR_8));

   if (VAR_12)
      return VAR_12;

   VAR_9 = VAR_8[0] << 8 | VAR_8[1];

   for (VAR_13 = 0; VAR_13 < (VAR_9 - 2) / 11; VAR_13++)
   {
      unsigned char VAR_14 = (VAR_8[4 + (VAR_13 * 11) + 1] >> 4) & 0xF;
      unsigned char VAR_15 = VAR_8[4 + (VAR_13 * 11) + 2];
      unsigned char VAR_16 = VAR_8[4 + (VAR_13 * 11) + 3];
      unsigned char VAR_17 = VAR_8[4 + (VAR_13 * 11) + 8];

      if ( VAR_14 == 1 && VAR_15 == 0 && VAR_16 == 0xA1)
      {
         *VAR_6 = VAR_17;




         break;
      }
   }

   if (!*VAR_6 || *VAR_6 > 99)
   {




      return 1;
   }

   VAR_10 = VAR_0 * (*VAR_6);
   VAR_7->num_tracks = *VAR_6;
   *VAR_3 = (char*)FUNC_0(1, VAR_10);
   *VAR_4 = VAR_10;

   for (VAR_13 = 0; VAR_13 < (VAR_9 - 2) / 11; VAR_13++)
   {

      unsigned char VAR_18 = (VAR_8[4 + (VAR_13 * 11) + 1] >> 4) & 0xF;
      unsigned char VAR_19 = VAR_8[4 + (VAR_13 * 11) + 1] & 0xF;
      unsigned char VAR_20 = VAR_8[4 + (VAR_13 * 11) + 2];
      unsigned char VAR_21 = VAR_8[4 + (VAR_13 * 11) + 3];



      unsigned char VAR_22 = VAR_8[4 + (VAR_13 * 11) + 8];
      unsigned char VAR_23 = VAR_8[4 + (VAR_13 * 11) + 9];
      unsigned char VAR_24 = VAR_8[4 + (VAR_13 * 11) + 10];
      unsigned VAR_25 = FUNC_2(VAR_22, VAR_23, VAR_24);




      if ( VAR_18 == 1 && VAR_20 == 0 && VAR_21 >= 1 && VAR_21 <= 99)
      {
         bool VAR_26 = 0;
         const char *VAR_27 = "MODE1/2352";

         VAR_26 = (!(VAR_19 & 0x4) && !(VAR_19 & 0x5));






         VAR_7->track[VAR_21 - 1].track_num = VAR_21;
         VAR_7->track[VAR_21 - 1].min = VAR_22;
         VAR_7->track[VAR_21 - 1].sec = VAR_23;
         VAR_7->track[VAR_21 - 1].frame = VAR_24;
         VAR_7->track[VAR_21 - 1].lba = VAR_25;
         VAR_7->track[VAR_21 - 1].audio = VAR_26;

         FUNC_4(VAR_2, VAR_21, VAR_7);

         if (VAR_26)
            VAR_27 = "AUDIO";
         else if (VAR_7->track[VAR_21 - 1].mode == 1)
            VAR_27 = "MODE1/2352";
         else if (VAR_7->track[VAR_21 - 1].mode == 2)
            VAR_27 = "MODE2/2352";




         VAR_11 += FUNC_8(*VAR_3 + VAR_11, VAR_10 - VAR_11, "FILE \"cdrom://drive%c-track%02d.bin\" BINARY\n", VAR_5, VAR_21);

         VAR_11 += FUNC_8(*VAR_3 + VAR_11, VAR_10 - VAR_11, "  TRACK %02d %s\n", VAR_21, VAR_27);

         {
            unsigned VAR_28 = VAR_7->track[VAR_21 - 1].lba - VAR_7->track[VAR_21 - 1].lba_start;

            if (VAR_7->track[VAR_21 - 1].audio && VAR_28 > 0)
            {
               unsigned char VAR_29 = 0;
               unsigned char VAR_30 = 0;
               unsigned char VAR_31 = 0;

               FUNC_1(VAR_28, &VAR_29, &VAR_30, &VAR_31);

               VAR_11 += FUNC_8(*VAR_3 + VAR_11, VAR_10 - VAR_11, "    INDEX 00 00:00:00\n");
               VAR_11 += FUNC_8(*VAR_3 + VAR_11, VAR_10 - VAR_11, "    INDEX 01 %02u:%02u:%02u\n", (unsigned)VAR_29, (unsigned)VAR_30, (unsigned)VAR_31);
            }
            else
               VAR_11 += FUNC_8(*VAR_3 + VAR_11, VAR_10 - VAR_11, "    INDEX 01 00:00:00\n");
         }
      }
   }

   return 0;
}
