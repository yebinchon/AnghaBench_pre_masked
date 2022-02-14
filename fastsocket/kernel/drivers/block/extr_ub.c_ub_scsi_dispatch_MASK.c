
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {scalar_t__ state; int error; int (* done ) (struct ub_dev*,struct ub_scsi_cmd*) ;} ;
struct ub_dev {int work_timer; int work_done; int reset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ub_dev*,struct ub_scsi_cmd*) ;
 struct ub_scsi_cmd* FUNC_2 (struct ub_dev*) ;
 int FUNC_3 (struct ub_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ub_dev*,struct ub_scsi_cmd*) ;
 int FUNC_6 (struct ub_dev*,struct ub_scsi_cmd*) ;

__attribute__((used)) static void FUNC_7(struct ub_dev *VAR_2)
{
 struct ub_scsi_cmd *VAR_3;
 int VAR_4;

 while (!VAR_2->reset && (VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
  if (VAR_3->state == VAR_0) {
   FUNC_3(VAR_2);
   (*VAR_3->done)(VAR_2, VAR_3);
  } else if (VAR_3->state == VAR_1) {
   if ((VAR_4 = FUNC_5(VAR_2, VAR_3)) == 0)
    break;
   VAR_3->error = VAR_4;
   VAR_3->state = VAR_0;
  } else {
   if (!FUNC_4(&VAR_2->work_done))
    break;
   FUNC_0(&VAR_2->work_timer);
   FUNC_6(VAR_2, VAR_3);
  }
 }
}
