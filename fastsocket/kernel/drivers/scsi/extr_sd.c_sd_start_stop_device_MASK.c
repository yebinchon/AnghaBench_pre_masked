
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {scalar_t__ start_stop_pwr_cond; } ;


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
 int FUNC_5 (int ,struct scsi_disk*,char*) ;

__attribute__((used)) static int FUNC_6(struct scsi_disk *VAR_7, int VAR_8)
{
 unsigned char VAR_9[6] = { VAR_6 };
 struct scsi_sense_hdr VAR_10;
 struct scsi_device *VAR_11 = VAR_7->device;
 int VAR_12;

 if (VAR_8)
  VAR_9[4] |= 1;

 if (VAR_11->start_stop_pwr_cond)
  VAR_9[4] |= VAR_8 ? 1 << 4 : 3 << 4;

 if (!FUNC_1(VAR_11))
  return -VAR_2;

 VAR_12 = FUNC_2(VAR_11, VAR_9, VAR_0, ((void*)0), 0, &VAR_10,
          VAR_5, VAR_4, ((void*)0));
 if (VAR_12) {
  FUNC_5(VAR_3, VAR_7, "START_STOP FAILED\n");
  FUNC_3(VAR_7, VAR_12);
  if (FUNC_0(VAR_12) & VAR_1)
   FUNC_4(VAR_7, &VAR_10);
 }

 return VAR_12;
}
