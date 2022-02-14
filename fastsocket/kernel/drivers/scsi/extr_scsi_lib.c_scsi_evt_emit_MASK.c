
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_event {int evt_type; } ;
struct TYPE_2__ {int kobj; } ;
struct scsi_device {TYPE_1__ sdev_gendev; } ;


 int VAR_0 ;

 int FUNC_0 (int *,int ,char**) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_1, struct scsi_event *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4[3];

 switch (VAR_2->evt_type) {
 case 128:
  VAR_4[VAR_3++] = "SDEV_MEDIA_CHANGE=1";
  break;

 default:

  break;
 }

 VAR_4[VAR_3++] = ((void*)0);

 FUNC_0(&VAR_1->sdev_gendev.kobj, VAR_0, VAR_4);
}
