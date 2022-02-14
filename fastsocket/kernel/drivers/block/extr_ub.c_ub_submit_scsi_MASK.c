
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {scalar_t__ state; scalar_t__ dir; scalar_t__ len; } ;
struct ub_dev {int tasklet; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ub_dev*,struct ub_scsi_cmd*) ;

__attribute__((used)) static int FUNC_2(struct ub_dev *VAR_3, struct ub_scsi_cmd *VAR_4)
{

 if (VAR_4->state != VAR_1 ||
     (VAR_4->dir != VAR_2 && VAR_4->len == 0)) {
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_4);




 FUNC_0(&VAR_3->tasklet);
 return 0;
}
