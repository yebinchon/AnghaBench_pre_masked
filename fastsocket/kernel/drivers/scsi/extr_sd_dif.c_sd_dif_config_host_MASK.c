
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_disk {scalar_t__ protection_type; scalar_t__ ATO; struct scsi_device* device; struct gendisk* disk; } ;
struct scsi_device {int host; } ;
struct gendisk {TYPE_1__* integrity; } ;
struct TYPE_2__ {int name; int tag_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gendisk*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct scsi_disk*,char*,int) ;

void FUNC_5(struct scsi_disk *VAR_7)
{
 struct scsi_device *VAR_8 = VAR_7->device;
 struct gendisk *VAR_9 = VAR_7->disk;
 u8 VAR_10 = VAR_7->protection_type;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_8->host, VAR_10);
 VAR_12 = FUNC_2(VAR_8->host, VAR_10);

 if (!VAR_12 && FUNC_2(VAR_8->host, 0)) {
  VAR_11 = 0; VAR_12 = 1;
 }

 if (!VAR_12)
  return;


 if (FUNC_3(VAR_7->device->host) & VAR_2)
  if (VAR_10 == VAR_1)
   FUNC_0(VAR_9, &VAR_6);
  else
   FUNC_0(VAR_9, &VAR_4);
 else
  if (VAR_10 == VAR_1)
   FUNC_0(VAR_9, &VAR_5);
  else
   FUNC_0(VAR_9, &VAR_3);

 FUNC_4(VAR_0, VAR_7,
    "Enabling DIX %s protection\n", VAR_9->integrity->name);


 if (VAR_11 && VAR_10 && VAR_7->ATO) {
  if (VAR_10 == VAR_1)
   VAR_9->integrity->tag_size = sizeof(u16) + sizeof(u32);
  else
   VAR_9->integrity->tag_size = sizeof(u16);

  FUNC_4(VAR_0, VAR_7, "DIF application tag size %u\n",
     VAR_9->integrity->tag_size);
 }
}
