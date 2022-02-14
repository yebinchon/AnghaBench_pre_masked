
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_disk {int capacity; int physical_block_size; struct scsi_device* device; scalar_t__ first_scan; } ;
struct scsi_device {int sector_size; int request_queue; scalar_t__ guess_capacity; scalar_t__ fix_capacity; } ;
typedef int sector_t ;
typedef int cap_str_2 ;
typedef int cap_str_10 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct scsi_disk*,struct scsi_device*,unsigned char*) ;
 int FUNC_4 (struct scsi_disk*,struct scsi_device*,unsigned char*) ;
 int FUNC_5 (int ,struct scsi_disk*,char*,...) ;
 scalar_t__ FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (int,int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(struct scsi_disk *VAR_6, unsigned char *VAR_7)
{
 int VAR_8;
 struct scsi_device *VAR_9 = VAR_6->device;
 sector_t VAR_10 = VAR_6->capacity;

 if (FUNC_6(VAR_9)) {
  VAR_8 = FUNC_4(VAR_6, VAR_9, VAR_7);
  if (VAR_8 == -VAR_1)
   goto got_data;
  if (VAR_8 == -VAR_0)
   return;
  if (VAR_8 < 0)
   VAR_8 = FUNC_3(VAR_6, VAR_9, VAR_7);
  if (VAR_8 < 0)
   return;
 } else {
  VAR_8 = FUNC_3(VAR_6, VAR_9, VAR_7);
  if (VAR_8 == -VAR_1)
   goto got_data;
  if (VAR_8 < 0)
   return;
  if ((sizeof(VAR_6->capacity) > 4) &&
      (VAR_6->capacity > 0xffffffffULL)) {
   int VAR_11 = VAR_8;
   FUNC_5(VAR_3, VAR_6, "Very big device. "
     "Trying to use READ CAPACITY(16).\n");
   VAR_8 = FUNC_4(VAR_6, VAR_9, VAR_7);
   if (VAR_8 < 0) {
    FUNC_5(VAR_3, VAR_6,
     "Using 0xffffffff as device size\n");
    VAR_6->capacity = 1 + (sector_t) 0xffffffff;
    VAR_8 = VAR_11;
    goto got_data;
   }
  }
 }
 if (VAR_9->fix_capacity ||
     (VAR_9->guess_capacity && (VAR_6->capacity & 0x01))) {
  FUNC_5(VAR_2, VAR_6, "Adjusting the sector count "
    "from its reported value: %llu\n",
    (unsigned long long) VAR_6->capacity);
  --VAR_6->capacity;
 }

got_data:
 if (VAR_8 == 0) {
  VAR_8 = 512;
  FUNC_5(VAR_3, VAR_6, "Sector size 0 reported, "
     "assuming 512.\n");
 }

 if (VAR_8 != 512 &&
     VAR_8 != 1024 &&
     VAR_8 != 2048 &&
     VAR_8 != 4096 &&
     VAR_8 != 256) {
  FUNC_5(VAR_3, VAR_6, "Unsupported sector size %d.\n",
     VAR_8);






  VAR_6->capacity = 0;






  VAR_8 = 512;
 }
 FUNC_0(VAR_9->request_queue, VAR_8);

 {
  char VAR_12[10], VAR_13[10];
  u64 VAR_14 = (u64)VAR_6->capacity << FUNC_2(VAR_8);

  FUNC_7(VAR_14, VAR_5, VAR_12,
    sizeof(VAR_12));
  FUNC_7(VAR_14, VAR_4, VAR_13,
    sizeof(VAR_13));

  if (VAR_6->first_scan || VAR_10 != VAR_6->capacity) {
   FUNC_5(VAR_3, VAR_6,
      "%llu %d-byte logical blocks: (%s/%s)\n",
      (unsigned long long)VAR_6->capacity,
      VAR_8, VAR_13, VAR_12);

   if (VAR_6->physical_block_size != VAR_8)
    FUNC_5(VAR_3, VAR_6,
       "%u-byte physical blocks\n",
       VAR_6->physical_block_size);
  }
 }


 if (VAR_8 == 4096)
  VAR_6->capacity <<= 3;
 else if (VAR_8 == 2048)
  VAR_6->capacity <<= 2;
 else if (VAR_8 == 1024)
  VAR_6->capacity <<= 1;
 else if (VAR_8 == 256)
  VAR_6->capacity >>= 1;

 FUNC_1(VAR_9->request_queue,
          VAR_6->physical_block_size);
 VAR_6->device->sector_size = VAR_8;
}
