
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct drive_info TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct block_device {int bd_dev; } ;
typedef int sector_t ;
struct drive_info {unsigned short cylinders; unsigned char heads; unsigned char sectors; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_4 (char*) ;
 unsigned char* FUNC_5 (struct block_device*) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_5,
  struct block_device *VAR_6,
  sector_t VAR_7, int *VAR_8)
{
   int VAR_9;
   int VAR_10 = VAR_7;
   unsigned long VAR_11;
   struct drive_info {
      unsigned short cylinders;
      unsigned char heads;
      unsigned char sectors;
   } VAR_12;
   if (FUNC_0(VAR_6->bd_dev) != VAR_1) {
      FUNC_4("scsi: <fdomain> fdomain_16x0_biosparam: too many disks");
      return 0;
   }
   VAR_9 = FUNC_1(VAR_6->bd_dev) >> 4;

   if (VAR_2 == 2) {
      switch (VAR_0) {
      case 2:


  VAR_11 = 0x1f33 + VAR_9 * 25;
  break;
      case 3:
  VAR_11 = 0x1f36 + VAR_9 * 15;
  break;
      case 4:
  VAR_11 = 0x1f34 + VAR_9 * 15;
  break;
      default:
  VAR_11 = 0x1f31 + VAR_9 * 25;
  break;
      }
      FUNC_3( &VAR_12, VAR_3 + VAR_11, sizeof( struct drive_info ) );
      VAR_8[0] = VAR_12.heads;
      VAR_8[1] = VAR_12.sectors;
      VAR_8[2] = VAR_12.cylinders;
   } else if (VAR_2 == 3
       && VAR_4 >= 0
       && VAR_4 < 4) {
      FUNC_3( &VAR_12, VAR_3 + 0x1f71 + VAR_9 * 10,
       sizeof( struct drive_info ) );
      VAR_8[0] = VAR_12.heads + 1;
      VAR_8[1] = VAR_12.sectors;
      VAR_8[2] = VAR_12.cylinders;
   } else {

      unsigned char *VAR_13 = FUNC_5(VAR_6);

      if (VAR_13 && VAR_13[65] == 0xaa && VAR_13[64] == 0x55
   && VAR_13[4]) {
  VAR_8[0] = VAR_13[5] + 1;
  VAR_8[1] = VAR_13[6] & 0x3f;
      } else {





  if ((unsigned int)VAR_10 >= 0x7e0000U) {
     VAR_8[0] = 0xff;
     VAR_8[1] = 0x3f;
  } else if ((unsigned int)VAR_10 >= 0x200000U) {
     VAR_8[0] = 0x80;
     VAR_8[1] = 0x3f;
  } else {
     VAR_8[0] = 0x40;
     VAR_8[1] = 0x20;
  }
      }

      VAR_8[2] = (unsigned int)VAR_10 / (VAR_8[0] * VAR_8[1] );
      FUNC_2(VAR_13);
   }

   return 0;
}
