
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int dev; int disk; TYPE_1__* device; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int request_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 struct scsi_disk* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_3)
{
 struct scsi_disk *VAR_4;

 FUNC_0(&VAR_1);
 VAR_4 = FUNC_4(VAR_3);
 FUNC_1(VAR_4->device->request_queue, VAR_0);
 FUNC_2(VAR_4->device->request_queue, ((void*)0));
 FUNC_6(&VAR_4->dev);
 FUNC_3(VAR_4->disk);
 FUNC_10(VAR_3);

 FUNC_7(&VAR_2);
 FUNC_5(VAR_3, ((void*)0));
 FUNC_9(&VAR_4->dev);
 FUNC_8(&VAR_2);

 return 0;
}
