
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint ;
struct iscsi_scan_data {void* lun; void* id; void* channel; } ;
struct Scsi_Host {int shost_gendev; } ;


 int FUNC_0 (int *,struct iscsi_scan_data*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct Scsi_Host *VAR_1, uint VAR_2,
      uint VAR_3, uint VAR_4)
{
 struct iscsi_scan_data VAR_5;

 VAR_5.channel = VAR_2;
 VAR_5.id = VAR_3;
 VAR_5.lun = VAR_4;

 return FUNC_0(&VAR_1->shost_gendev, &VAR_5,
         VAR_0);
}
