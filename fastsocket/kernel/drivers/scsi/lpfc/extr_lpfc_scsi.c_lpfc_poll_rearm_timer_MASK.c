
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ring; } ;
struct lpfc_hba {int fcp_poll_timer; TYPE_2__ sli; int cfg_poll_tmo; } ;
struct TYPE_3__ {int txcmplq; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static __inline__ void FUNC_3(struct lpfc_hba * VAR_2)
{
 unsigned long VAR_3 =
  (VAR_1 + FUNC_2(VAR_2->cfg_poll_tmo));

 if (!FUNC_0(&VAR_2->sli.ring[VAR_0].txcmplq))
  FUNC_1(&VAR_2->fcp_poll_timer,
     VAR_3);
}
