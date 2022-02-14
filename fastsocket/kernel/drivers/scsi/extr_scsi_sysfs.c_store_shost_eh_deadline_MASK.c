
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int eh_deadline; int host_lock; TYPE_1__* transportt; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ eh_strategy_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = -VAR_1;
 int VAR_9;
 unsigned long VAR_10;

 if (VAR_7->transportt->eh_strategy_handler)
  return VAR_8;

 if (FUNC_4(VAR_5, "%d\n", &VAR_9) == 1) {
  FUNC_2(VAR_7->host_lock, VAR_10);
  if (FUNC_1(VAR_7))
   VAR_8 = -VAR_0;
  else {
   VAR_7->eh_deadline = VAR_9 * VAR_2;
   VAR_8 = VAR_6;
  }
  FUNC_3(VAR_7->host_lock, VAR_10);
 }
 return VAR_8;
}
