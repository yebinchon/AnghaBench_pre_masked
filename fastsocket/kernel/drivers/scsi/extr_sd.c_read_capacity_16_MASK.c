
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_disk {unsigned long long capacity; int physical_block_size; int lbpme; int lbprz; scalar_t__ first_scan; } ;
struct scsi_device {int request_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 unsigned long long FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (struct scsi_disk*,struct scsi_device*,struct scsi_sense_hdr*,int,int) ;
 int FUNC_6 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_7 (struct scsi_sense_hdr*) ;
 int FUNC_8 (struct scsi_disk*,int ) ;
 int FUNC_9 (int ,struct scsi_disk*,char*,...) ;
 scalar_t__ FUNC_10 (struct scsi_disk*,unsigned char*) ;

__attribute__((used)) static int FUNC_11(struct scsi_disk *VAR_15, struct scsi_device *VAR_16,
      unsigned char *VAR_17)
{
 unsigned char VAR_18[16];
 struct scsi_sense_hdr VAR_19;
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22 = 3, VAR_23 = VAR_8;
 unsigned int VAR_24;
 unsigned long long VAR_25;
 unsigned VAR_26;

 do {
  FUNC_4(VAR_18, 0, 16);
  VAR_18[0] = VAR_13;
  VAR_18[1] = VAR_9;
  VAR_18[13] = VAR_7;
  FUNC_4(VAR_17, 0, VAR_7);

  VAR_21 = FUNC_6(VAR_16, VAR_18, VAR_0,
     VAR_17, VAR_7, &VAR_19,
     VAR_12, VAR_11, ((void*)0));

  if (FUNC_3(VAR_15, &VAR_19))
   return -VAR_2;

  if (VAR_21) {
   VAR_20 = FUNC_7(&VAR_19);
   if (VAR_20 &&
       VAR_19.sense_key == VAR_4 &&
       (VAR_19.asc == 0x20 || VAR_19.asc == 0x24) &&
       VAR_19.ascq == 0x00)



    return -VAR_1;
   if (VAR_20 &&
       VAR_19.sense_key == VAR_14 &&
       VAR_19.asc == 0x29 && VAR_19.ascq == 0x00)


    if (--VAR_23 > 0)
     continue;
  }
  VAR_22--;

 } while (VAR_21 && VAR_22);

 if (VAR_21) {
  FUNC_9(VAR_6, VAR_15, "READ CAPACITY(16) failed\n");
  FUNC_5(VAR_15, VAR_16, &VAR_19, VAR_20, VAR_21);
  return -VAR_1;
 }

 VAR_26 = FUNC_1(&VAR_17[8]);
 VAR_25 = FUNC_2(&VAR_17[0]);

 if (FUNC_10(VAR_15, VAR_17) < 0) {
  VAR_15->capacity = 0;
  return -VAR_2;
 }

 if ((sizeof(VAR_15->capacity) == 4) && (VAR_25 >= 0xffffffffULL)) {
  FUNC_9(VAR_5, VAR_15, "Too big for this kernel. Use a "
   "kernel compiled with support for large block "
   "devices.\n");
  VAR_15->capacity = 0;
  return -VAR_3;
 }


 VAR_15->physical_block_size = (1 << (VAR_17[13] & 0xf)) * VAR_26;


 VAR_24 = ((VAR_17[14] & 0x3f) << 8 | VAR_17[15]) * VAR_26;
 FUNC_0(VAR_16->request_queue, VAR_24);
 if (VAR_24 && VAR_15->first_scan)
  FUNC_9(VAR_6, VAR_15,
     "physical block alignment offset: %u\n", VAR_24);

 if (VAR_17[14] & 0x80) {
  VAR_15->lbpme = 1;

  if (VAR_17[14] & 0x40)
   VAR_15->lbprz = 1;

  FUNC_8(VAR_15, VAR_10);
 }

 VAR_15->capacity = VAR_25 + 1;
 return VAR_26;
}
