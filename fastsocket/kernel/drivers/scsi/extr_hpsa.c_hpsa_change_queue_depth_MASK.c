
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; } ;
struct ctlr_info {int nr_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;
 int FUNC_1 (struct scsi_device*) ;
 struct ctlr_info* FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_2,
 int VAR_3, int VAR_4)
{
 struct ctlr_info *VAR_5 = FUNC_2(VAR_2);

 if (VAR_4 != VAR_1)
  return -VAR_0;

 if (VAR_3 < 1)
  VAR_3 = 1;
 else
  if (VAR_3 > VAR_5->nr_cmds)
   VAR_3 = VAR_5->nr_cmds;
 FUNC_0(VAR_2, FUNC_1(VAR_2), VAR_3);
 return VAR_2->queue_depth;
}
