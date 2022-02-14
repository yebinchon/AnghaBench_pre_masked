
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct scsi_device {int channel; scalar_t__ type; size_t id; TYPE_2__* host; } ;
struct megasas_instance {TYPE_1__* pd_list; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {scalar_t__ driveState; scalar_t__ driveType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct megasas_instance* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_5)
{
 u16 VAR_6 = 0;
 struct megasas_instance *VAR_7 ;
 VAR_7 = FUNC_0(VAR_5->host->host_no);
 if ((VAR_5->channel < VAR_2) &&
    (VAR_5->type == VAR_4)) {



  VAR_6 =
   (VAR_5->channel * VAR_1) +
   VAR_5->id;
  if ((VAR_7->pd_list[VAR_6].driveState ==
     VAR_3) &&
   (VAR_7->pd_list[VAR_6].driveType ==
      VAR_4)) {
   return 0;
  }
  return -VAR_0;
 }
 return 0;
}
