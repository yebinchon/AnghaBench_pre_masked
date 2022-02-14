
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_disk {int capacity; unsigned int physical_block_size; } ;
struct scsi_device {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct scsi_disk*,struct scsi_device*,struct scsi_sense_hdr*,int,int) ;
 int FUNC_4 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_5 (struct scsi_sense_hdr*) ;
 int FUNC_6 (int ,struct scsi_disk*,char*) ;

__attribute__((used)) static int FUNC_7(struct scsi_disk *VAR_11, struct scsi_device *VAR_12,
      unsigned char *VAR_13)
{
 unsigned char VAR_14[16];
 struct scsi_sense_hdr VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18 = 3, VAR_19 = VAR_7;
 sector_t VAR_20;
 unsigned VAR_21;

 do {
  VAR_14[0] = VAR_6;
  FUNC_2(&VAR_14[1], 0, 9);
  FUNC_2(VAR_13, 0, 8);

  VAR_17 = FUNC_4(VAR_12, VAR_14, VAR_0,
     VAR_13, 8, &VAR_15,
     VAR_9, VAR_8, ((void*)0));

  if (FUNC_1(VAR_11, &VAR_15))
   return -VAR_2;

  if (VAR_17) {
   VAR_16 = FUNC_5(&VAR_15);
   if (VAR_16 &&
       VAR_15.sense_key == VAR_10 &&
       VAR_15.asc == 0x29 && VAR_15.ascq == 0x00)


    if (--VAR_19 > 0)
     continue;
  }
  VAR_18--;

 } while (VAR_17 && VAR_18);

 if (VAR_17) {
  FUNC_6(VAR_5, VAR_11, "READ CAPACITY failed\n");
  FUNC_3(VAR_11, VAR_12, &VAR_15, VAR_16, VAR_17);
  return -VAR_1;
 }

 VAR_21 = FUNC_0(&VAR_13[4]);
 VAR_20 = FUNC_0(&VAR_13[0]);

 if ((sizeof(VAR_11->capacity) == 4) && (VAR_20 == 0xffffffff)) {
  FUNC_6(VAR_4, VAR_11, "Too big for this kernel. Use a "
   "kernel compiled with support for large block "
   "devices.\n");
  VAR_11->capacity = 0;
  return -VAR_3;
 }

 VAR_11->capacity = VAR_20 + 1;
 VAR_11->physical_block_size = VAR_21;
 return VAR_21;
}
