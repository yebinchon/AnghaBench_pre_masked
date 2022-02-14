
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int ring_buffer_offset; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct MPT3SAS_ADAPTER* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
 const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct MPT3SAS_ADAPTER *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0;

 if (FUNC_2(VAR_3, "%d", &VAR_7) != 1)
  return -VAR_0;

 VAR_6->ring_buffer_offset = VAR_7;
 return FUNC_3(VAR_3);
}
