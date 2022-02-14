
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct scsi_device {int channel; scalar_t__ type; size_t id; int request_queue; TYPE_2__* host; } ;
struct megasas_instance {TYPE_1__* pd_list; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {scalar_t__ driveState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 struct megasas_instance* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_7)
{
 u16 VAR_8 = 0;
 struct megasas_instance *VAR_9 ;

 VAR_9 = FUNC_1(VAR_7->host->host_no);
 if (VAR_7->channel < VAR_4 &&
    VAR_7->type == VAR_6) {
  VAR_8 = (VAR_7->channel * VAR_3) +
        VAR_7->id;
  if (VAR_9->pd_list[VAR_8].driveState ==
      VAR_5) {
   FUNC_0(VAR_7->request_queue,
    VAR_2 * VAR_1);
   return 0;
  }
  return -VAR_0;
 }




 FUNC_0(VAR_7->request_queue,
  VAR_2 * VAR_1);
 return 0;
}
