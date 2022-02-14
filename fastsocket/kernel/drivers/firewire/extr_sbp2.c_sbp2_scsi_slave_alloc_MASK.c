
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int allow_restart; int inquiry_len; int request_queue; struct sbp2_logical_unit* hostdata; } ;
struct sbp2_logical_unit {TYPE_1__* tgt; } ;
struct TYPE_2__ {int workarounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_2)
{
 struct sbp2_logical_unit *VAR_3 = VAR_2->hostdata;


 if (!VAR_3)
  return -VAR_0;

 VAR_2->allow_restart = 1;


 FUNC_0(VAR_2->request_queue, 4 - 1);

 if (VAR_3->tgt->workarounds & VAR_1)
  VAR_2->inquiry_len = 36;

 return 0;
}
