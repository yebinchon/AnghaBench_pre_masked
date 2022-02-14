
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ intr_enable; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; int link_state; TYPE_1__* pport; } ;
struct TYPE_3__ {int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5 = 0;


 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4) {
  VAR_2->pport->port_state = VAR_1;
  FUNC_1(VAR_2);
  VAR_4 = FUNC_0(VAR_2);
 }


 if (VAR_4) {
  VAR_2->link_state = VAR_0;
  VAR_5 = 1;
 } else
  VAR_2->sli4_hba.intr_enable = 0;

 return VAR_5;
}
