
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pf_rulequeue {int dummy; } ;
struct TYPE_8__ {int list; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int * tqe_prev; } ;
struct pf_rule {scalar_t__ states; int nr; scalar_t__ src_nodes; TYPE_4__ rpool; int kif; scalar_t__ overload_tbl; TYPE_3__ dst; TYPE_2__ src; int match_tag; int tag; TYPE_1__ entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct pf_rulequeue*,struct pf_rule*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pf_rule*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,struct pf_rule*) ;

void
FUNC_10(struct pf_rulequeue *VAR_3, struct pf_rule *VAR_4)
{
 if (VAR_3 != ((void*)0)) {
  if (VAR_4->states <= 0) {





   FUNC_5(&VAR_4->src.addr);
   FUNC_5(&VAR_4->dst.addr);
   if (VAR_4->overload_tbl)
    FUNC_8(VAR_4->overload_tbl);
  }
  FUNC_0(VAR_3, VAR_4, VAR_1);
  VAR_4->entries.tqe_prev = ((void*)0);
  VAR_4->nr = -1;
 }

 if (VAR_4->states > 0 || VAR_4->src_nodes > 0 ||
     VAR_4->entries.tqe_prev != ((void*)0))
  return;
 FUNC_4(VAR_4->tag);
 FUNC_4(VAR_4->match_tag);
 FUNC_3(&VAR_4->src.addr);
 FUNC_3(&VAR_4->dst.addr);
 FUNC_6(&VAR_4->src.addr);
 FUNC_6(&VAR_4->dst.addr);
 if (VAR_3 == ((void*)0)) {
  FUNC_5(&VAR_4->src.addr);
  FUNC_5(&VAR_4->dst.addr);
  if (VAR_4->overload_tbl)
   FUNC_8(VAR_4->overload_tbl);
 }
 FUNC_7(VAR_4->kif, VAR_0);
 FUNC_1(VAR_4);
 FUNC_2(&VAR_4->rpool.list);
 FUNC_9(&VAR_2, VAR_4);
}
