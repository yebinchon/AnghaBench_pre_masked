
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {int error; int (* done ) (struct ub_dev*,struct ub_scsi_cmd*) ;int state; } ;
struct ub_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ub_dev*,struct ub_scsi_cmd*) ;
 int FUNC_1 (struct ub_dev*) ;

__attribute__((used)) static void FUNC_2(struct ub_dev *VAR_1, struct ub_scsi_cmd *VAR_2, int VAR_3)
{

 VAR_2->error = VAR_3;
 VAR_2->state = VAR_0;
 FUNC_1(VAR_1);
 (*VAR_2->done)(VAR_1, VAR_2);
}
