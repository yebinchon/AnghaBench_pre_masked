
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysinfo_3_2_2 {TYPE_2__* vm; int lpar_number; } ;
struct sysinfo_2_2_2 {TYPE_2__* vm; int lpar_number; } ;
struct qeth_trap_id {int vmname; int lparnr; int devno; int ssid; int chpid; } ;
struct TYPE_3__ {int chpid; } ;
struct qeth_card {TYPE_1__ info; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct ccw_dev_id*) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sysinfo_3_2_2*,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct qeth_card *VAR_2, struct qeth_trap_id *VAR_3)
{
 unsigned long VAR_4 = FUNC_4(VAR_1);
 struct sysinfo_2_2_2 *VAR_5 = (struct sysinfo_2_2_2 *)VAR_4;
 struct sysinfo_3_2_2 *VAR_6 = (struct sysinfo_3_2_2 *)VAR_4;
 struct ccw_dev_id VAR_7;
 int VAR_8, VAR_9;

 VAR_3->chpid = VAR_2->info.chpid;
 FUNC_2(FUNC_0(VAR_2), &VAR_7);
 VAR_3->ssid = VAR_7.ssid;
 VAR_3->devno = VAR_7.devno;
 if (!VAR_4)
  return;

 VAR_9 = FUNC_6(((void*)0), 0, 0, 0);
 if (VAR_9 == -VAR_0)
  VAR_8 = VAR_9;
 else
  VAR_8 = (((unsigned int) VAR_9) >> 28);

 if ((VAR_8 >= 2) && (FUNC_6(VAR_5, 2, 2, 2) != -VAR_0))
  VAR_3->lparnr = VAR_5->lpar_number;

 if ((VAR_8 >= 3) && (FUNC_6(VAR_6, 3, 2, 2) != -VAR_0)) {
  FUNC_1(VAR_6->vm[0].name, sizeof(VAR_6->vm[0].name));
  FUNC_5(VAR_3->vmname, VAR_6->vm[0].name, sizeof(VAR_3->vmname));
 }
 FUNC_3(VAR_4);
 return;
}
