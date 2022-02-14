
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct urb {unsigned int transfer_dma; int number_of_packets; int transfer_flags; TYPE_1__* iso_frame_desc; } ;
struct ehci_iso_stream {int interval; int bEndpointAddress; } ;
struct ehci_iso_sched {int span; struct ehci_iso_packet* packet; } ;
struct ehci_iso_packet {unsigned int bufp; unsigned int buf1; int cross; int transaction; } ;
struct ehci_hcd {int dummy; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_2__ {int length; unsigned int offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ehci_hcd*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_1(
 struct ehci_hcd *VAR_4,
 struct ehci_iso_sched *VAR_5,
 struct ehci_iso_stream *VAR_6,
 struct urb *VAR_7
)
{
 unsigned VAR_8;
 dma_addr_t VAR_9 = VAR_7->transfer_dma;


 VAR_5->span = VAR_7->number_of_packets * VAR_6->interval;




 for (VAR_8 = 0; VAR_8 < VAR_7->number_of_packets; VAR_8++) {
  struct ehci_iso_packet *VAR_10 = &VAR_5->packet [VAR_8];
  unsigned VAR_11;
  dma_addr_t VAR_12;
  u32 VAR_13;

  VAR_11 = VAR_7->iso_frame_desc [VAR_8].length & 0x03ff;
  VAR_12 = VAR_9 + VAR_7->iso_frame_desc [VAR_8].offset;

  VAR_13 = VAR_1;
  if (((VAR_8 + 1) == VAR_7->number_of_packets)
    && !(VAR_7->transfer_flags & VAR_2))
   VAR_13 |= VAR_0;
  VAR_13 |= VAR_11 << 16;
  VAR_10->transaction = FUNC_0(VAR_4, VAR_13);


  VAR_10->bufp = VAR_12;
  VAR_10->buf1 = (VAR_12 + VAR_11) & ~0x0fff;
  if (VAR_10->buf1 != (VAR_12 & ~(u64)0x0fff))
   VAR_10->cross = 1;


  if (VAR_6->bEndpointAddress & VAR_3)
   continue;
  VAR_11 = (VAR_11 + 187) / 188;
  if (VAR_11 > 1)
   VAR_11 |= 1 << 3;
  VAR_10->buf1 |= VAR_11;
 }
}
