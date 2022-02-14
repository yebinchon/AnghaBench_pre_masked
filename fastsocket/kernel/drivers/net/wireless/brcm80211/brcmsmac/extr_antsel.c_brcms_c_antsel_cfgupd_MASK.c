
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct brcms_c_info {int hw; } ;
struct brcms_antselcfg {void** ant_config; } ;
struct TYPE_2__ {void** ant_config; } ;
struct antsel_info {TYPE_1__ antcfg_cur; struct brcms_c_info* wlc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct antsel_info*,void*) ;

__attribute__((used)) static int FUNC_2(struct antsel_info *VAR_4,
     struct brcms_antselcfg *VAR_5)
{
 struct brcms_c_info *VAR_6 = VAR_4->wlc;
 u8 VAR_7;
 u16 VAR_8;




 VAR_7 = VAR_5->ant_config[VAR_1];
 VAR_8 = FUNC_1(VAR_4, VAR_7);
 FUNC_0(VAR_6->hw, VAR_3, VAR_8);




 VAR_4->antcfg_cur.ant_config[VAR_1] = VAR_7;




 VAR_7 = VAR_5->ant_config[VAR_0];
 VAR_8 = FUNC_1(VAR_4, VAR_7);
 FUNC_0(VAR_6->hw, VAR_2, VAR_8);




 VAR_4->antcfg_cur.ant_config[VAR_0] = VAR_7;

 return 0;
}
