
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int num_pports; int flags; TYPE_5__* pport; TYPE_1__* cspec; } ;
struct TYPE_9__ {TYPE_3__* smi_ah; } ;
struct TYPE_10__ {TYPE_4__ ibport_data; TYPE_2__* cpspec; } ;
struct TYPE_8__ {int ibah; } ;
struct TYPE_7__ {int qsfp_data; int portcntrs; } ;
struct TYPE_6__ {int gpio_mask; int gpio_lock; int msix_entries; int sendibchk; int sendgrhchk; int sendchkenable; int cntrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qib_devdata*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_devdata *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_4);
 FUNC_1(VAR_4->cspec->cntrs);
 FUNC_1(VAR_4->cspec->sendchkenable);
 FUNC_1(VAR_4->cspec->sendgrhchk);
 FUNC_1(VAR_4->cspec->sendibchk);
 FUNC_1(VAR_4->cspec->msix_entries);
 for (VAR_5 = 0; VAR_5 < VAR_4->num_pports; VAR_5++) {
  unsigned long VAR_6;
  u32 VAR_7 = VAR_1 |
   (VAR_1 << VAR_2);

  FUNC_1(VAR_4->pport[VAR_5].cpspec->portcntrs);
  if (VAR_4->flags & VAR_0) {
   FUNC_5(&VAR_4->cspec->gpio_lock, VAR_6);
   VAR_4->cspec->gpio_mask &= ~VAR_7;
   FUNC_4(VAR_4, VAR_3, VAR_4->cspec->gpio_mask);
   FUNC_6(&VAR_4->cspec->gpio_lock, VAR_6);
   FUNC_3(&VAR_4->pport[VAR_5].cpspec->qsfp_data);
  }
  if (VAR_4->pport[VAR_5].ibport_data.smi_ah)
   FUNC_0(&VAR_4->pport[VAR_5].ibport_data.smi_ah->ibah);
 }
}
