
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_tx_hdr {int phy_params; } ;
typedef enum uwb_phy_rate { ____Placeholder_uwb_phy_rate } uwb_phy_rate ;



__attribute__((used)) static inline enum uwb_phy_rate FUNC_0(const struct wlp_tx_hdr *VAR_0)
{
 return VAR_0->phy_params & 0x0f;
}
