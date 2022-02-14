
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_tx_hdr {int mac_params; } ;
typedef enum uwb_ack_pol { ____Placeholder_uwb_ack_pol } uwb_ack_pol ;



__attribute__((used)) static inline void FUNC_0(struct wlp_tx_hdr *VAR_0,
          enum uwb_ack_pol VAR_1)
{
 VAR_0->mac_params = (VAR_0->mac_params & ~0x70) | (VAR_1 << 4);
}
