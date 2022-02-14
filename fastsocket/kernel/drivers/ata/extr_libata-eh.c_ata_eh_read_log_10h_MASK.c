
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ata_taskfile {int command; int feature; int lbal; int lbam; int lbah; int device; int hob_lbal; int hob_lbam; int hob_lbah; int nsect; int hob_nsect; } ;
struct ata_device {TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {int* sector_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_device*,int ,char*,int) ;
 unsigned int FUNC_1 (struct ata_device*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct ata_device *VAR_5,
          int *VAR_6, struct ata_taskfile *VAR_7)
{
 u8 *VAR_8 = VAR_5->link->ap->sector_buf;
 unsigned int VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_5, VAR_0, VAR_8, 1);
 if (VAR_9)
  return -VAR_2;

 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_10 += VAR_8[VAR_11];
 if (VAR_10)
  FUNC_0(VAR_5, VAR_4,
          "invalid checksum 0x%x on log page 10h\n", VAR_10);

 if (VAR_8[0] & 0x80)
  return -VAR_3;

 *VAR_6 = VAR_8[0] & 0x1f;

 VAR_7->command = VAR_8[2];
 VAR_7->feature = VAR_8[3];
 VAR_7->lbal = VAR_8[4];
 VAR_7->lbam = VAR_8[5];
 VAR_7->lbah = VAR_8[6];
 VAR_7->device = VAR_8[7];
 VAR_7->hob_lbal = VAR_8[8];
 VAR_7->hob_lbam = VAR_8[9];
 VAR_7->hob_lbah = VAR_8[10];
 VAR_7->nsect = VAR_8[12];
 VAR_7->hob_nsect = VAR_8[13];

 return 0;
}
