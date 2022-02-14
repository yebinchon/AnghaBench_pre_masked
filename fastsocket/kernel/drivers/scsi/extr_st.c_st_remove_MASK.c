
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_tape {int kref; TYPE_2__* modes; struct scsi_device* device; } ;
struct TYPE_3__ {int kobj; } ;
struct scsi_device {TYPE_1__ sdev_gendev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int ** cdevs; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 struct scsi_tape** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,char*) ;
 struct scsi_device* FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_9)
{
 struct scsi_device *VAR_10 = FUNC_8(VAR_9);
 struct scsi_tape *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_9(&VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11 = VAR_3[VAR_12];
  if (VAR_11 != ((void*)0) && VAR_11->device == VAR_10) {
   VAR_3[VAR_12] = ((void*)0);
   VAR_6--;
   FUNC_10(&VAR_4);
   FUNC_7(&VAR_11->device->sdev_gendev.kobj,
       "tape");
   for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14) {
    for (VAR_13=0; VAR_13 < 2; VAR_13++) {
     FUNC_3(VAR_8,
             FUNC_0(VAR_0,
            FUNC_1(VAR_12, VAR_14, VAR_13)));
     FUNC_2(VAR_11->modes[VAR_14].cdevs[VAR_13]);
     VAR_11->modes[VAR_14].cdevs[VAR_13] = ((void*)0);
    }
   }

   FUNC_5(&VAR_7);
   FUNC_4(&VAR_11->kref, VAR_2);
   FUNC_6(&VAR_7);
   return 0;
  }
 }

 FUNC_10(&VAR_4);
 return 0;
}
