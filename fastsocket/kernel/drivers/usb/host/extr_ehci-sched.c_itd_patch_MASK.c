
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ehci_itd {unsigned int pg; unsigned int* index; int * hw_bufp_hi; int * hw_bufp; int * hw_transaction; } ;
struct ehci_iso_sched {struct ehci_iso_packet* packet; } ;
struct ehci_iso_packet {int bufp; int cross; int transaction; } ;
struct ehci_hcd {int dummy; } ;


 int FUNC_0 (struct ehci_hcd*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(
 struct ehci_hcd *VAR_0,
 struct ehci_itd *VAR_1,
 struct ehci_iso_sched *VAR_2,
 unsigned VAR_3,
 u16 VAR_4
)
{
 struct ehci_iso_packet *VAR_5 = &VAR_2->packet [VAR_3];
 unsigned VAR_6 = VAR_1->pg;



 VAR_4 &= 0x07;
 VAR_1->index [VAR_4] = VAR_3;

 VAR_1->hw_transaction[VAR_4] = VAR_5->transaction;
 VAR_1->hw_transaction[VAR_4] |= FUNC_0(VAR_0, VAR_6 << 12);
 VAR_1->hw_bufp[VAR_6] |= FUNC_0(VAR_0, VAR_5->bufp & ~(u32)0);
 VAR_1->hw_bufp_hi[VAR_6] |= FUNC_0(VAR_0, (u32)(VAR_5->bufp >> 32));


 if (FUNC_1 (VAR_5->cross)) {
  u64 VAR_7 = VAR_5->bufp + 4096;

  VAR_1->pg = ++VAR_6;
  VAR_1->hw_bufp[VAR_6] |= FUNC_0(VAR_0, VAR_7 & ~(u32)0);
  VAR_1->hw_bufp_hi[VAR_6] |= FUNC_0(VAR_0, (u32)(VAR_7 >> 32));
 }
}
