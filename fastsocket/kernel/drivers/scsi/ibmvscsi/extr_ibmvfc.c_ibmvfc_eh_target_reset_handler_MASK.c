
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct scsi_device {int host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct ibmvfc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct scsi_device*,int ,char*) ;
 int FUNC_2 (struct ibmvfc_host*,struct scsi_target*,int ) ;
 int FUNC_3 (struct ibmvfc_host*) ;
 struct scsi_target* FUNC_4 (struct scsi_device*) ;
 struct ibmvfc_host* FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_target*,unsigned long*,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_6)
{
 struct scsi_device *VAR_7 = VAR_6->device;
 struct ibmvfc_host *VAR_8 = FUNC_5(VAR_7->host);
 struct scsi_target *VAR_9 = FUNC_4(VAR_7);
 int VAR_10;
 int VAR_11 = VAR_1;
 unsigned long VAR_12 = 0;

 VAR_0;
 FUNC_0(VAR_6);
 FUNC_3(VAR_8);
 FUNC_6(VAR_9, &VAR_12, VAR_4);
 VAR_10 = FUNC_1(VAR_7, VAR_2, "target");

 if (!VAR_12 && !VAR_10)
  VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_5);

 VAR_3;
 return VAR_11;
}
