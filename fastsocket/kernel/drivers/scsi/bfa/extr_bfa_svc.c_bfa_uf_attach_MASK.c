
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_uf_mod_s {int uf_unused_q; int uf_posted_q; int uf_free_q; int num_ufs; struct bfa_s* bfa; } ;
struct bfa_s {int dummy; } ;
struct bfa_pcidev_s {int dummy; } ;
struct TYPE_2__ {int num_uf_bufs; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ fwcfg; } ;


 struct bfa_uf_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfa_uf_mod_s*) ;

__attribute__((used)) static void
FUNC_3(struct bfa_s *VAR_0, void *VAR_1, struct bfa_iocfc_cfg_s *VAR_2,
  struct bfa_pcidev_s *VAR_3)
{
 struct bfa_uf_mod_s *VAR_4 = FUNC_0(VAR_0);

 VAR_4->bfa = VAR_0;
 VAR_4->num_ufs = VAR_2->fwcfg.num_uf_bufs;
 FUNC_1(&VAR_4->uf_free_q);
 FUNC_1(&VAR_4->uf_posted_q);
 FUNC_1(&VAR_4->uf_unused_q);

 FUNC_2(VAR_4);
}
