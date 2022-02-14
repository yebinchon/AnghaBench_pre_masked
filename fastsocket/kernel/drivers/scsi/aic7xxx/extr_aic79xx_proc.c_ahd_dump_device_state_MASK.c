
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int lun; TYPE_1__* sdev_target; } ;
struct info_str {int dummy; } ;
struct ahd_linux_device {int qfrozen; int maxtags; int openings; int active; int commands_issued; } ;
struct TYPE_2__ {int id; scalar_t__ channel; } ;


 int FUNC_0 (struct info_str*,char*,int ,...) ;
 struct ahd_linux_device* FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static void
FUNC_2(struct info_str *VAR_0, struct scsi_device *VAR_1)
{
 struct ahd_linux_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, "\tChannel %c Target %d Lun %d Settings\n",
    VAR_1->sdev_target->channel + 'A',
    VAR_1->sdev_target->id, VAR_1->lun);

 FUNC_0(VAR_0, "\t\tCommands Queued %ld\n", VAR_2->commands_issued);
 FUNC_0(VAR_0, "\t\tCommands Active %d\n", VAR_2->active);
 FUNC_0(VAR_0, "\t\tCommand Openings %d\n", VAR_2->openings);
 FUNC_0(VAR_0, "\t\tMax Tagged Openings %d\n", VAR_2->maxtags);
 FUNC_0(VAR_0, "\t\tDevice Queue Frozen Count %d\n", VAR_2->qfrozen);
}
