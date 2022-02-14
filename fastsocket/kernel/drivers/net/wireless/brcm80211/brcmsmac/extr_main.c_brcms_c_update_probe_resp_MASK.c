
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {struct brcms_bss_cfg* bsscfg; } ;
struct brcms_bss_cfg {int BSS; scalar_t__ up; } ;


 int FUNC_0 (struct brcms_c_info*,struct brcms_bss_cfg*,int) ;

void FUNC_1(struct brcms_c_info *VAR_0, bool VAR_1)
{
 struct brcms_bss_cfg *VAR_2 = VAR_0->bsscfg;


 if (VAR_2->up && !VAR_2->BSS)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}
