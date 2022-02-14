
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ sli_intr; scalar_t__ sli_prev_intr; scalar_t__ sli_ips; } ;
struct TYPE_4__ {TYPE_1__ slistat; } ;
struct lpfc_hba {int eratt_poll; TYPE_2__ sli; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(unsigned long VAR_2)
{
 struct lpfc_hba *VAR_3;
 uint32_t VAR_4 = 0, VAR_5;
 uint64_t VAR_6, VAR_7;

 VAR_3 = (struct lpfc_hba *)VAR_2;


 VAR_6 = VAR_3->sli.slistat.sli_intr;

 if (VAR_3->sli.slistat.sli_prev_intr > VAR_6)
  VAR_7 = (((uint64_t)(-1) - VAR_3->sli.slistat.sli_prev_intr) +
   VAR_6);
 else
  VAR_7 = (VAR_6 - VAR_3->sli.slistat.sli_prev_intr);


 VAR_5 = FUNC_0(VAR_7, VAR_0);
 VAR_3->sli.slistat.sli_ips = VAR_7;

 VAR_3->sli.slistat.sli_prev_intr = VAR_6;


 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4)

  FUNC_2(VAR_3);
 else

  FUNC_3(&VAR_3->eratt_poll,
     VAR_1 +
     FUNC_4(1000 * VAR_0));
 return;
}
