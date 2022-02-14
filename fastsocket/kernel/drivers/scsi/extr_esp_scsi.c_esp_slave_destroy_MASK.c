
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct esp_lun_data* hostdata; } ;
struct esp_lun_data {int dummy; } ;


 int FUNC_0 (struct esp_lun_data*) ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_0)
{
 struct esp_lun_data *VAR_1 = VAR_0->hostdata;

 FUNC_0(VAR_1);
 VAR_0->hostdata = ((void*)0);
}
