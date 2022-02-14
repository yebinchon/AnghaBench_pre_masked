
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {int stat_count; int state; } ;
struct ub_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ub_dev*,struct ub_scsi_cmd*) ;
 int FUNC_1 (struct ub_dev*,struct ub_scsi_cmd*) ;

__attribute__((used)) static void FUNC_2(struct ub_dev *VAR_1, struct ub_scsi_cmd *VAR_2)
{

 if (++VAR_2->stat_count >= 4) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }

 if (FUNC_0(VAR_1, VAR_2) != 0)
  return;

 VAR_2->state = VAR_0;
}
