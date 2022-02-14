
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ehci_sitd {unsigned int index; void** hw_buf_hi; void** hw_buf; void* hw_backpointer; int hw_results; int hw_uframe; int hw_fullspeed_ep; void* hw_next; } ;
struct ehci_iso_stream {int splits; int address; } ;
struct ehci_iso_sched {struct ehci_iso_packet* packet; } ;
struct ehci_iso_packet {int bufp; int buf1; scalar_t__ cross; int transaction; } ;
struct ehci_hcd {int dummy; } ;


 void* FUNC_0 (struct ehci_hcd*) ;
 void* FUNC_1 (struct ehci_hcd*,int) ;

__attribute__((used)) static inline void
FUNC_2(
 struct ehci_hcd *VAR_0,
 struct ehci_iso_stream *VAR_1,
 struct ehci_sitd *VAR_2,
 struct ehci_iso_sched *VAR_3,
 unsigned VAR_4
)
{
 struct ehci_iso_packet *VAR_5 = &VAR_3->packet [VAR_4];
 u64 VAR_6 = VAR_5->bufp;

 VAR_2->hw_next = FUNC_0(VAR_0);
 VAR_2->hw_fullspeed_ep = VAR_1->address;
 VAR_2->hw_uframe = VAR_1->splits;
 VAR_2->hw_results = VAR_5->transaction;
 VAR_2->hw_backpointer = FUNC_0(VAR_0);

 VAR_6 = VAR_5->bufp;
 VAR_2->hw_buf[0] = FUNC_1(VAR_0, VAR_6);
 VAR_2->hw_buf_hi[0] = FUNC_1(VAR_0, VAR_6 >> 32);

 VAR_2->hw_buf[1] = FUNC_1(VAR_0, VAR_5->buf1);
 if (VAR_5->cross)
  VAR_6 += 4096;
 VAR_2->hw_buf_hi[1] = FUNC_1(VAR_0, VAR_6 >> 32);
 VAR_2->index = VAR_4;
}
