
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bfa_s {int dummy; } ;
struct bfa_lps_mod_s {int dummy; } ;
struct TYPE_2__ {int fw_tag; } ;


 TYPE_1__* FUNC_0 (struct bfa_lps_mod_s*,int ) ;
 struct bfa_lps_mod_s* FUNC_1 (struct bfa_s*) ;

u8
FUNC_2(struct bfa_s *VAR_0, u8 VAR_1)
{
 struct bfa_lps_mod_s *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1)->fw_tag;
}
