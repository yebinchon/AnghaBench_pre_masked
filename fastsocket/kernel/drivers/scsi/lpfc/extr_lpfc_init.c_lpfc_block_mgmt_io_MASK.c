
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int sli_flag; TYPE_4__* mbox_active; } ;
struct lpfc_hba {TYPE_3__ sli; int hbalock; } ;
struct TYPE_5__ {int mbxCommand; } ;
struct TYPE_6__ {TYPE_1__ mb; } ;
struct TYPE_8__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,int ) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 uint8_t VAR_10 = VAR_5;
 unsigned long VAR_11;

 FUNC_4(&VAR_7->hbalock, VAR_9);
 VAR_7->sli.sli_flag |= VAR_2;
 FUNC_5(&VAR_7->hbalock, VAR_9);
 if (VAR_8 == VAR_4)
  return;
 VAR_11 = FUNC_2(VAR_3 * 1000) + VAR_6;
 FUNC_4(&VAR_7->hbalock, VAR_9);
 if (VAR_7->sli.mbox_active) {
  VAR_10 = VAR_7->sli.mbox_active->u.mb.mbxCommand;



  VAR_11 = FUNC_2(FUNC_0(VAR_7,
    VAR_7->sli.mbox_active) * 1000) + VAR_6;
 }
 FUNC_5(&VAR_7->hbalock, VAR_9);


 while (VAR_7->sli.mbox_active) {

  FUNC_3(2);
  if (FUNC_6(VAR_6, VAR_11)) {
   FUNC_1(VAR_7, VAR_0, VAR_1,
    "2813 Mgmt IO is Blocked %x "
    "- mbox cmd %x still active\n",
    VAR_7->sli.sli_flag, VAR_10);
   break;
  }
 }
}
