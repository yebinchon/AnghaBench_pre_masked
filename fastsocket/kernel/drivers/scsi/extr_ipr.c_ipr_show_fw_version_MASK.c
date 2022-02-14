
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_2__* host; TYPE_1__* vpd_cbs; } ;
struct ipr_inquiry_page3 {int major_release; int card_type; int * minor_release; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {struct ipr_inquiry_page3 page3_data; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int,int,int ,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct ipr_ioa_cfg *VAR_5 = (struct ipr_ioa_cfg *)VAR_4->hostdata;
 struct ipr_inquiry_page3 *VAR_6 = &VAR_5->vpd_cbs->page3_data;
 unsigned long VAR_7 = 0;
 int VAR_8;

 FUNC_2(VAR_5->host->host_lock, VAR_7);
 VAR_8 = FUNC_1(VAR_3, VAR_0, "%02X%02X%02X%02X\n",
         VAR_6->major_release, VAR_6->card_type,
         VAR_6->minor_release[0],
         VAR_6->minor_release[1]);
 FUNC_3(VAR_5->host->host_lock, VAR_7);
 return VAR_8;
}
