
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int ssize_t ;
typedef int libretro_vfs_implementation_file ;
struct TYPE_5__ {TYPE_1__* track; } ;
typedef TYPE_2__ cdrom_toc_t ;
typedef int cdb ;
typedef int buf ;
struct TYPE_4__ {unsigned int lba_start; unsigned int track_size; unsigned int lba; unsigned int track_bytes; unsigned char mode; scalar_t__ audio; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned char*,int,unsigned char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int*,unsigned char*,int) ;
 int FUNC_3 (char*,unsigned int,...) ;
 int VAR_1 ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(libretro_vfs_implementation_file *VAR_2, unsigned char VAR_3, cdrom_toc_t *VAR_4)
{

   unsigned char VAR_5[] = {0x52, 0x1, 0, 0, 0, 0, 0, 0x1, 0x80, 0};
   unsigned char VAR_6[384] = {0};
   unsigned VAR_7 = 0;
   unsigned VAR_8 = 0;
   int VAR_9;
   ssize_t VAR_10;

   VAR_5[5] = VAR_3;

   VAR_9 = FUNC_0(VAR_2, VAR_0, VAR_6, sizeof(VAR_6), VAR_5, sizeof(VAR_5), 0);

   if (VAR_9)
     return 1;

   FUNC_2(&VAR_7, VAR_6 + 8, 4);
   FUNC_2(&VAR_8, VAR_6 + 24, 4);

   VAR_7 = FUNC_4(VAR_7);
   VAR_8 = FUNC_4(VAR_8);


   VAR_4->track[VAR_3 - 1].lba_start = VAR_7;
   VAR_4->track[VAR_3 - 1].track_size = VAR_8;

   VAR_10 = (VAR_4->track[VAR_3 - 1].audio ? 0 : (VAR_4->track[VAR_3 - 1].lba - VAR_4->track[VAR_3 - 1].lba_start));

   VAR_4->track[VAR_3 - 1].track_bytes = (VAR_8 - VAR_10) * 2352;
   VAR_4->track[VAR_3 - 1].mode = VAR_6[6] & 0xF;
   return 0;
}
