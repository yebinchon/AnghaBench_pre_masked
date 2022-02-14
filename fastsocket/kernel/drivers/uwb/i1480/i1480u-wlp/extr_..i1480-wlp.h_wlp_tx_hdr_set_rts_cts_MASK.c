
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_tx_hdr {int mac_params; } ;



__attribute__((used)) static inline void FUNC_0(struct wlp_tx_hdr *VAR_0, int VAR_1)
{
 VAR_0->mac_params = (VAR_0->mac_params & ~0x80) | (VAR_1 << 7);
}
