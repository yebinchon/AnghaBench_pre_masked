
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT2SAS_ADAPTER {int* diag_buffer_status; int * diag_buffer; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct MPT2SAS_ADAPTER* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_4);
 struct MPT2SAS_ADAPTER *VAR_8 = FUNC_1(VAR_7);

 if ((!VAR_8->diag_buffer[VAR_0]) ||
    ((VAR_8->diag_buffer_status[VAR_0] &
     VAR_1) == 0))
  return FUNC_2(VAR_6, VAR_3, "off\n");
 else if ((VAR_8->diag_buffer_status[VAR_0] &
     VAR_2))
  return FUNC_2(VAR_6, VAR_3, "release\n");
 else
  return FUNC_2(VAR_6, VAR_3, "post\n");
}
