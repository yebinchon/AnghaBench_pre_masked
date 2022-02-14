
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct sbp2_lu {int dummy; } ;
struct sbp2_command_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sbp2_lu*,struct sbp2_command_info*,struct scsi_cmnd*) ;
 int FUNC_1 (struct sbp2_lu*,struct sbp2_command_info*) ;
 struct sbp2_command_info* FUNC_2 (struct sbp2_lu*,struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;

__attribute__((used)) static int FUNC_3(struct sbp2_lu *VAR_2, struct scsi_cmnd *VAR_3,
        void (*VAR_4)(struct scsi_cmnd *))
{
 struct sbp2_command_info *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_5, VAR_3))
  return -VAR_1;

 FUNC_1(VAR_2, VAR_5);
 return 0;
}
