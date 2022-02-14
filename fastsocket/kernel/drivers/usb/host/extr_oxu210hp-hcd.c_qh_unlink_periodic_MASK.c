
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct oxu_hcd {unsigned int periodic_size; int periodic_sched; } ;
struct TYPE_7__ {int * ptr; } ;
struct ehci_qh {unsigned int period; unsigned int start; int usecs; int c_usecs; TYPE_3__ qh_next; int qh_state; int hw_info2; TYPE_2__* dev; } ;
struct TYPE_5__ {int bandwidth_allocated; } ;
struct TYPE_8__ {TYPE_1__ self; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int,struct ehci_qh*,unsigned int,int,int) ;
 int FUNC_1 (struct oxu_hcd*) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (struct oxu_hcd*,unsigned int,struct ehci_qh*) ;
 int FUNC_5 (struct ehci_qh*) ;

__attribute__((used)) static void FUNC_6(struct oxu_hcd *VAR_3, struct ehci_qh *VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 VAR_6 = VAR_4->period;
 if (VAR_6 == 0)
  VAR_6 = 1;

 for (VAR_5 = VAR_4->start; VAR_5 < VAR_3->periodic_size; VAR_5 += VAR_6)
  FUNC_4(VAR_3, VAR_5, VAR_4);


 FUNC_3(VAR_3)->self.bandwidth_allocated -= VAR_4->period
  ? ((VAR_4->usecs + VAR_4->c_usecs) / VAR_4->period)
  : (VAR_4->usecs * 8);

 FUNC_0(&VAR_4->dev->dev,
  "unlink qh%d-%04x/%p start %d [%d/%d us]\n",
  VAR_4->period,
  FUNC_2(&VAR_4->hw_info2) & (VAR_0 | VAR_1),
  VAR_4, VAR_4->start, VAR_4->usecs, VAR_4->c_usecs);


 VAR_4->qh_state = VAR_2;
 VAR_4->qh_next.ptr = ((void*)0);
 FUNC_5(VAR_4);


 VAR_3->periodic_sched--;
 if (!VAR_3->periodic_sched)
  (void) FUNC_1(VAR_3);
}
