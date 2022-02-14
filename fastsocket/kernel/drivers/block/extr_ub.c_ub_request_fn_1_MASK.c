
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {int dummy; } ;
struct ub_request {int dummy; } ;
struct ub_lun {scalar_t__ changed; struct ub_dev* udev; } ;
struct ub_dev {int poison; } ;
struct request {scalar_t__ cmd_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*,int) ;

__attribute__((used)) static int FUNC_3(struct ub_lun *VAR_3, struct request *VAR_4)
{
 struct ub_dev *VAR_5 = VAR_3->udev;
 struct ub_scsi_cmd *VAR_6;
 struct ub_request *VAR_7;
 int VAR_8;

 if (FUNC_0(&VAR_5->poison)) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_4, VAR_0 << 16);
  return 0;
 }

 if (VAR_3->changed && VAR_4->cmd_type != VAR_1)
  FUNC_1(VAR_4);
  FUNC_2(VAR_4, VAR_2);
  return 0;
 }
