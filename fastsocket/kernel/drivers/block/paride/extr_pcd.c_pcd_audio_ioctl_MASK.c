
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcd_unit {int dummy; } ;
struct cdrom_tochdr {char cdth_trk0; char cdth_trk1; } ;
struct TYPE_3__ {unsigned char minute; unsigned char second; unsigned char frame; } ;
struct TYPE_4__ {unsigned char lba; TYPE_1__ msf; } ;
struct cdrom_tocentry {char cdte_track; unsigned char cdte_ctrl; unsigned char cdte_adr; int cdte_datamode; TYPE_2__ cdte_addr; int cdte_format; } ;
struct cdrom_device_info {struct pcd_unit* handle; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcd_unit*,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_4, unsigned int VAR_5, void *VAR_6)
{
 struct pcd_unit *VAR_7 = VAR_4->handle;

 switch (VAR_5) {

 case 128:

  {
   char VAR_8[12] =
       { VAR_3, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0 };
   struct cdrom_tochdr *VAR_9 =
       (struct cdrom_tochdr *) VAR_6;
   char VAR_10[32];
   int VAR_11;

   VAR_11 = FUNC_0(VAR_7, VAR_8, 12, VAR_10, "read toc header");

   VAR_9->cdth_trk0 = VAR_10[2];
   VAR_9->cdth_trk1 = VAR_10[3];

   return VAR_11 ? -VAR_1 : 0;
  }

 case 129:

  {
   char VAR_12[12] =
       { VAR_3, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0 };

   struct cdrom_tocentry *VAR_13 =
       (struct cdrom_tocentry *) VAR_6;
   unsigned char VAR_14[32];
   int VAR_15;

   VAR_12[1] =
       (VAR_13->cdte_format == VAR_0 ? 0x02 : 0);
   VAR_12[6] = VAR_13->cdte_track;

   VAR_15 = FUNC_0(VAR_7, VAR_12, 12, VAR_14, "read toc entry");

   VAR_13->cdte_ctrl = VAR_14[5] & 0xf;
   VAR_13->cdte_adr = VAR_14[5] >> 4;
   VAR_13->cdte_datamode =
       (VAR_13->cdte_ctrl & 0x04) ? 1 : 0;
   if (VAR_13->cdte_format == VAR_0) {
    VAR_13->cdte_addr.msf.minute = VAR_14[9];
    VAR_13->cdte_addr.msf.second = VAR_14[10];
    VAR_13->cdte_addr.msf.frame = VAR_14[11];
   } else
    VAR_13->cdte_addr.lba =
        (((((VAR_14[8] << 8) + VAR_14[9]) << 8)
          + VAR_14[10]) << 8) + VAR_14[11];

   return VAR_15 ? -VAR_1 : 0;
  }

 default:

  return -VAR_2;
 }
}
