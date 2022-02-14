
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ etv; } ;
struct TYPE_7__ {scalar_t__ net_id; scalar_t__ etr_id; scalar_t__ etr_pn; } ;
struct TYPE_5__ {scalar_t__ e0; scalar_t__ e1; } ;
struct TYPE_6__ {int psc1; int psc0; TYPE_1__ eacr; } ;
struct etr_aib {TYPE_4__ edf2; TYPE_3__ edf1; TYPE_2__ esw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct etr_aib*,int) ;

__attribute__((used)) static int FUNC_1(struct etr_aib *VAR_2, struct etr_aib *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;


 if (VAR_2->esw.eacr.e0 != VAR_3->esw.eacr.e0 ||
     VAR_2->esw.eacr.e1 != VAR_3->esw.eacr.e1)
  return 0;


 VAR_5 = VAR_4 ? VAR_2->esw.psc1 : VAR_2->esw.psc0;
 VAR_6 = VAR_4 ? VAR_3->esw.psc1 : VAR_3->esw.psc0;
 if (VAR_5 == VAR_0) {
  if (VAR_6 != VAR_0 ||
      VAR_2->edf1.net_id != VAR_3->edf1.net_id ||
      VAR_2->edf1.etr_id != VAR_3->edf1.etr_id ||
      VAR_2->edf1.etr_pn != VAR_3->edf1.etr_pn)
   return 0;
 } else if (VAR_6 != VAR_1)
  return 0;


 if (VAR_2->edf2.etv + 1 != VAR_3->edf2.etv)
  return 0;

 if (!FUNC_0(VAR_3, VAR_4))
  return 0;

 return 1;
}
