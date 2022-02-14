
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; } ;
struct TYPE_5__ {TYPE_1__ q; } ;
struct TYPE_6__ {TYPE_2__ mcc_obj; } ;
struct beiscsi_hba {int fw_timeout; TYPE_3__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct beiscsi_hba*) ;
 int VAR_5 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_6)
{
 int VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (FUNC_1(VAR_6))
   return -VAR_3;

  VAR_8 = FUNC_3(VAR_6);
  if (VAR_8)
   return VAR_8;

  if (FUNC_0(&VAR_6->ctrl.mcc_obj.q.used) == 0)
   break;
  FUNC_5(100);
 }
 if (VAR_7 == VAR_5) {
  FUNC_2(VAR_6, VAR_4,
       VAR_0 | VAR_1,
       "BC_%d : FW Timed Out\n");
  VAR_6->fw_timeout = 1;
  FUNC_4(VAR_6);
  return -VAR_2;
 }
 return 0;
}
