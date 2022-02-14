
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_iso_recv {scalar_t__ dma_mode; } ;
struct hpsb_iso_packet_info {int dummy; } ;
struct hpsb_iso {int infos; struct ohci_iso_recv* hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ohci_iso_recv*,struct hpsb_iso_packet_info*) ;
 int FUNC_1 (struct ohci_iso_recv*,struct hpsb_iso_packet_info*) ;

__attribute__((used)) static inline void FUNC_2(struct hpsb_iso *VAR_1, struct hpsb_iso_packet_info *VAR_2)
{
 struct ohci_iso_recv *VAR_3 = VAR_1->hostdata;
 if (VAR_3->dma_mode == VAR_0) {
  FUNC_0(VAR_3, VAR_2);
 } else {
  FUNC_1(VAR_3, VAR_2 - VAR_1->infos);
 }
}
