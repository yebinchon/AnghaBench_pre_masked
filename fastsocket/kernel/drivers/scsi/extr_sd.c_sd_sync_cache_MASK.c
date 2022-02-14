
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,unsigned char*,int ,int *,int ,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_3 (struct scsi_disk*,int) ;
 int FUNC_4 (struct scsi_disk*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_5(struct scsi_disk *VAR_7)
{
 int VAR_8, VAR_9;
 struct scsi_device *VAR_10 = VAR_7->device;
 struct scsi_sense_hdr VAR_11;

 if (!FUNC_1(VAR_10))
  return -VAR_3;


 for (VAR_8 = 3; VAR_8 > 0; --VAR_8) {
  unsigned char VAR_12[10] = { 0 };

  VAR_12[0] = VAR_6;




  VAR_9 = FUNC_2(VAR_10, VAR_12, VAR_0, ((void*)0), 0, &VAR_11,
           VAR_4, VAR_5, ((void*)0));
  if (VAR_9 == 0)
   break;
 }

 if (VAR_9) {
  FUNC_3(VAR_7, VAR_9);
  if (FUNC_0(VAR_9) & VAR_1)
   FUNC_4(VAR_7, &VAR_11);
 }

 if (VAR_9)
  return -VAR_2;
 return 0;
}
