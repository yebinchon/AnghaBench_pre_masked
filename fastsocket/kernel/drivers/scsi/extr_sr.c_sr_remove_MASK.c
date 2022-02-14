
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cd {int kref; int disk; TYPE_1__* device; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int request_queue; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct scsi_cd* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 struct scsi_cd *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4->device->request_queue, VAR_0);
 FUNC_1(VAR_4->disk);

 FUNC_4(&VAR_2);
 FUNC_3(&VAR_4->kref, VAR_1);
 FUNC_5(&VAR_2);

 return 0;
}
