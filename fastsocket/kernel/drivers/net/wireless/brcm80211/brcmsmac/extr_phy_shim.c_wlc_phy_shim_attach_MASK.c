
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_shim_info {struct brcms_info* wl; struct brcms_c_info* wlc; struct brcms_hardware* wlc_hw; } ;
struct brcms_info {int dummy; } ;
struct brcms_hardware {int dummy; } ;
struct brcms_c_info {int dummy; } ;


 int VAR_0 ;
 struct phy_shim_info* FUNC_0 (int,int ) ;

struct phy_shim_info *FUNC_1(struct brcms_hardware *VAR_1,
       struct brcms_info *VAR_2,
       struct brcms_c_info *VAR_3) {
 struct phy_shim_info *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(sizeof(struct phy_shim_info), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->wlc_hw = VAR_1;
 VAR_4->wlc = VAR_3;
 VAR_4->wl = VAR_2;

 return VAR_4;
}
