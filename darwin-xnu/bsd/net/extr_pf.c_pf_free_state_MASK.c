
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_6__* ptr; } ;
struct TYPE_8__ {TYPE_6__* ptr; } ;
struct TYPE_7__ {TYPE_6__* ptr; } ;
struct pf_state {scalar_t__ timeout; scalar_t__ tag; int kif; TYPE_3__ anchor; TYPE_2__ nat_rule; TYPE_1__ rule; } ;
struct TYPE_12__ {scalar_t__ states; scalar_t__ src_nodes; } ;
struct TYPE_11__ {scalar_t__ states; int * fcounters; } ;
struct TYPE_10__ {struct pf_state* sc_bulk_terminator; struct pf_state* sc_bulk_send_next; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,struct pf_state*,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct pf_state*) ;
 int FUNC_4 (int *,TYPE_6__*) ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 TYPE_4__* VAR_8 ;
 int FUNC_7 (int *,struct pf_state*) ;
 int VAR_9 ;

void
FUNC_8(struct pf_state *VAR_10)
{
 FUNC_0(VAR_5, VAR_1);






 FUNC_2(VAR_10->timeout == VAR_3);
 FUNC_2(VAR_10->rule.ptr->states > 0);
 if (--VAR_10->rule.ptr->states <= 0 &&
     VAR_10->rule.ptr->src_nodes <= 0)
  FUNC_4(((void*)0), VAR_10->rule.ptr);
 if (VAR_10->nat_rule.ptr != ((void*)0)) {
  FUNC_2(VAR_10->nat_rule.ptr->states > 0);
  if (--VAR_10->nat_rule.ptr->states <= 0 &&
      VAR_10->nat_rule.ptr->src_nodes <= 0)
   FUNC_4(((void*)0), VAR_10->nat_rule.ptr);
 }
 if (VAR_10->anchor.ptr != ((void*)0)) {
  FUNC_2(VAR_10->anchor.ptr->states > 0);
  if (--VAR_10->anchor.ptr->states <= 0)
   FUNC_4(((void*)0), VAR_10->anchor.ptr);
 }
 FUNC_3(VAR_10);
 FUNC_6(VAR_10->kif, VAR_2);
 FUNC_1(&VAR_9, VAR_10, VAR_4);
 if (VAR_10->tag)
  FUNC_5(VAR_10->tag);
 FUNC_7(&VAR_6, VAR_10);
 VAR_7.fcounters[VAR_0]++;
 FUNC_2(VAR_7.states > 0);
 VAR_7.states--;
}
