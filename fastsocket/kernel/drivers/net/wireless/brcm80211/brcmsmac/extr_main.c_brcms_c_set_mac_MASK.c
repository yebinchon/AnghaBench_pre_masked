
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int dummy; } ;
struct brcms_bss_cfg {int cur_etheraddr; struct brcms_c_info* wlc; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct brcms_c_info*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct brcms_bss_cfg *VAR_1)
{
 int VAR_2 = 0;
 struct brcms_c_info *VAR_3 = VAR_1->wlc;


 FUNC_1(VAR_3, VAR_0, VAR_1->cur_etheraddr);

 FUNC_0(VAR_3);

 return VAR_2;
}
