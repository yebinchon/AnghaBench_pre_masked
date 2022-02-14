
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; } ;
struct ata_port {TYPE_1__* scsi_host; int lock; } ;
struct ata_device {struct scsi_device* sdev; TYPE_2__* link; } ;
struct TYPE_4__ {struct ata_port* ap; } ;
struct TYPE_3__ {int scan_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_device*,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (struct scsi_device*,int ) ;
 int FUNC_8 (struct scsi_device*) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct ata_device *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->link->ap;
 struct scsi_device *VAR_4;
 unsigned long VAR_5;







 FUNC_3(&VAR_3->scsi_host->scan_mutex);
 FUNC_9(VAR_3->lock, VAR_5);


 VAR_4 = VAR_2->sdev;
 VAR_2->sdev = ((void*)0);

 if (VAR_4) {




  if (FUNC_5(VAR_4) == 0) {





   FUNC_7(VAR_4, VAR_1);
  } else {
   FUNC_0(1);
   VAR_4 = ((void*)0);
  }
 }

 FUNC_10(VAR_3->lock, VAR_5);
 FUNC_4(&VAR_3->scsi_host->scan_mutex);

 if (VAR_4) {
  FUNC_1(VAR_2, VAR_0, "detaching (SCSI %s)\n",
          FUNC_2(&VAR_4->sdev_gendev));

  FUNC_8(VAR_4);
  FUNC_6(VAR_4);
 }
}
