
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_ktable {int pfrkt_flags; int pfrkt_cnt; struct pfr_ktable* pfrkt_root; } ;
struct TYPE_2__ {int tblcnt; struct pfr_ktable* tbl; } ;
struct pf_addr_wrap {scalar_t__ type; TYPE_1__ p; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_1(struct pf_addr_wrap *VAR_4)
{
 struct pfr_ktable *VAR_5 = VAR_4->p.tbl;

 FUNC_0(VAR_3, VAR_0);

 if (VAR_4->type != VAR_2 || VAR_5 == ((void*)0))
  return;
 if (!(VAR_5->pfrkt_flags & VAR_1) && VAR_5->pfrkt_root != ((void*)0))
  VAR_5 = VAR_5->pfrkt_root;
 VAR_4->p.tbl = ((void*)0);
 VAR_4->p.tblcnt = (VAR_5->pfrkt_flags & VAR_1) ?
     VAR_5->pfrkt_cnt : -1;
}
