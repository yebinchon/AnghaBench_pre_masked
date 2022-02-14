
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_iso_sched {int td_list; } ;
struct ehci_iso_packet {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct ehci_iso_sched* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct ehci_iso_sched *
FUNC_3 (unsigned VAR_0, gfp_t VAR_1)
{
 struct ehci_iso_sched *VAR_2;
 int VAR_3 = sizeof *VAR_2;

 VAR_3 += VAR_0 * sizeof (struct ehci_iso_packet);
 VAR_2 = FUNC_1(VAR_3, VAR_1);
 if (FUNC_2 (VAR_2 != ((void*)0))) {
  FUNC_0 (&VAR_2->td_list);
 }
 return VAR_2;
}
