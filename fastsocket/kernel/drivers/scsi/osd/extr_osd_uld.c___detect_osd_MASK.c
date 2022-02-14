
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int request_queue; } ;
struct TYPE_2__ {struct scsi_device* scsi_device; } ;
struct osd_uld_device {TYPE_1__ od; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct osd_uld_device*,struct scsi_device*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int *,int,int) ;
 int FUNC_4 (struct scsi_device*,int,int,int *) ;

__attribute__((used)) static int FUNC_5(struct osd_uld_device *VAR_4)
{
 struct scsi_device *VAR_5 = VAR_4->od.scsi_device;
 char VAR_6[VAR_2];
 int VAR_7;




 FUNC_0("start scsi_test_unit_ready %p %p %p\n",
   VAR_4, VAR_5, VAR_5->request_queue);
 VAR_7 = FUNC_4(VAR_5, 10*VAR_1, 5, ((void*)0));
 if (VAR_7)
  FUNC_1("warning: scsi_test_unit_ready failed\n");

 FUNC_3(VAR_6, &VAR_3, 0, 1);
 if (FUNC_2(&VAR_4->od, VAR_6))
  return -VAR_0;

 return 0;
}
