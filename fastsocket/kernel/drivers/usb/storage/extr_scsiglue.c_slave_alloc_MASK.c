
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ subclass; } ;
struct scsi_device {int inquiry_len; TYPE_1__* sdev_target; int request_queue; int host; } ;
struct TYPE_2__ {int pdt_1f_for_no_lun; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct us_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2 (struct scsi_device *VAR_1)
{
 struct us_data *VAR_2 = FUNC_1(VAR_1->host);






 VAR_1->inquiry_len = 36;
 FUNC_0(VAR_1->request_queue, (512 - 1));
 if (VAR_2->subclass == VAR_0)
  VAR_1->sdev_target->pdt_1f_for_no_lun = 1;

 return 0;
}
