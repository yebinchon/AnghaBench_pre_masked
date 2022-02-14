
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int err_attn_event; } ;
struct TYPE_6__ {TYPE_2__ slistat; } ;
struct lpfc_hba {TYPE_1__* pport; int HAregaddr; int * work_status; scalar_t__ MBslimaddr; int work_hs; scalar_t__ HSregaddr; TYPE_3__ sli; } ;
struct TYPE_4__ {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct lpfc_hba *VAR_2)
{




 VAR_2->sli.slistat.err_attn_event++;


 if (FUNC_0(VAR_2->HSregaddr, &VAR_2->work_hs) ||
  FUNC_0(VAR_2->MBslimaddr + 0xa8, &VAR_2->work_status[0]) ||
  FUNC_0(VAR_2->MBslimaddr + 0xac, &VAR_2->work_status[1])) {
  return -VAR_0;
 }


 FUNC_2(VAR_1, VAR_2->HAregaddr);
 FUNC_1(VAR_2->HAregaddr);
 VAR_2->pport->stopped = 1;

 return 0;
}
