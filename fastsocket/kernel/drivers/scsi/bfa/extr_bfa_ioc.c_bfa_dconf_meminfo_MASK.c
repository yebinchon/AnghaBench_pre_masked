
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct bfa_meminfo_s {int dummy; } ;
struct bfa_mem_kva_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ min_cfg; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ drvcfg; } ;
struct bfa_dconf_s {int dummy; } ;
struct bfa_dconf_hdr_s {int dummy; } ;


 struct bfa_mem_kva_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_meminfo_s*,struct bfa_mem_kva_s*,int) ;

__attribute__((used)) static void
FUNC_2(struct bfa_iocfc_cfg_s *VAR_0, struct bfa_meminfo_s *VAR_1,
    struct bfa_s *VAR_2)
{
 struct bfa_mem_kva_s *VAR_3 = FUNC_0(VAR_2);

 if (VAR_0->drvcfg.min_cfg)
  FUNC_1(VAR_1, VAR_3,
    sizeof(struct bfa_dconf_hdr_s));
 else
  FUNC_1(VAR_1, VAR_3,
    sizeof(struct bfa_dconf_s));
}
