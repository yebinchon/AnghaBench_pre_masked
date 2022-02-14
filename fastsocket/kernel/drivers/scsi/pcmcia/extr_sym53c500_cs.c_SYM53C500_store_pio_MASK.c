
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym53c500_data {int fast_pio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_1);
 struct sym53c500_data *VAR_7 =
     (struct sym53c500_data *)VAR_6->hostdata;

 VAR_5 = FUNC_1(VAR_3, ((void*)0), 0);
 if (VAR_5 == 0 || VAR_5 == 1) {
  VAR_7->fast_pio = VAR_5;
  return VAR_4;
 }
 else
  return -VAR_0;
}
