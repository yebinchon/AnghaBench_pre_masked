
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcms_c_info {int hw; } ;
struct brcms_bss_cfg {scalar_t__ SSID_len; int * SSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct brcms_c_info*,int ,int *,int) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct brcms_c_info *VAR_3, struct brcms_bss_cfg *VAR_4)
{
 u8 *VAR_5 = VAR_4->SSID;
 u16 VAR_6 = VAR_1;
 u8 VAR_7[VAR_0];


 FUNC_3(VAR_7, 0, VAR_0);
 FUNC_2(VAR_7, VAR_5, VAR_4->SSID_len);

 FUNC_1(VAR_3, VAR_6, VAR_7, VAR_0);
 FUNC_0(VAR_3->hw, VAR_2, (u16) VAR_4->SSID_len);
}
