
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {size_t devnum; int fwver1; int fwver2; int fwver3; } ;
struct qla_boards {char* name; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int qla1280_scsi_name_buffer ;


 char* VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 struct qla_boards* VAR_1 ;
 int FUNC_1 (char*,char*,char*,int,int,int,char*) ;

__attribute__((used)) static const char *
FUNC_2(struct Scsi_Host *VAR_2)
{
 static char VAR_3[125];
 char *VAR_4;
 struct scsi_qla_host *VAR_5;
 struct qla_boards *VAR_6;

 VAR_4 = &VAR_3[0];
 VAR_5 = (struct scsi_qla_host *)VAR_2->hostdata;
 VAR_6 = &VAR_1[VAR_5->devnum];
 FUNC_0(VAR_4, 0, sizeof(VAR_3));

 FUNC_1 (VAR_4,
   "QLogic %s PCI to SCSI Host Adapter\n"
   "       Firmware version: %2d.%02d.%02d, Driver version %s",
   &VAR_6->name[0], VAR_5->fwver1, VAR_5->fwver2, VAR_5->fwver3,
   VAR_0);
 return VAR_4;
}
