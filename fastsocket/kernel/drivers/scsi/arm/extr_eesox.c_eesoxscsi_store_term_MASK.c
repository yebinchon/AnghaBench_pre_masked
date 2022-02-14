
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {int dummy; } ;
struct eesoxscsi_info {int ctl_port; int control; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef size_t ssize_t ;


 struct expansion_card* FUNC_0 (struct device*) ;
 int VAR_0 ;
 struct Scsi_Host* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct expansion_card *VAR_5 = FUNC_0(VAR_1);
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_5);
 struct eesoxscsi_info *VAR_7 = (struct eesoxscsi_info *)VAR_6->hostdata;
 unsigned long VAR_8;

 if (VAR_4 > 1) {
  FUNC_2(VAR_6->host_lock, VAR_8);
  if (VAR_3[0] != '0') {
   VAR_7->control |= VAR_0;
  } else {
   VAR_7->control &= ~VAR_0;
  }
  FUNC_4(VAR_7->control, VAR_7->ctl_port);
  FUNC_3(VAR_6->host_lock, VAR_8);
 }

 return VAR_4;
}
