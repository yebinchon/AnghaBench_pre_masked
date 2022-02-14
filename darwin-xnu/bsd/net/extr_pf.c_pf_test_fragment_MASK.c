
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u_short ;
struct pfi_kif {int dummy; } ;
struct pf_ruleset {int dummy; } ;
struct TYPE_18__ {scalar_t__ op; } ;
struct TYPE_19__ {TYPE_7__ range; } ;
struct TYPE_20__ {TYPE_8__ xport; int neg; int addr; } ;
struct TYPE_15__ {scalar_t__ op; } ;
struct TYPE_16__ {TYPE_4__ range; } ;
struct TYPE_17__ {TYPE_5__ xport; int neg; int addr; } ;
struct pf_rule {scalar_t__ ifnot; int direction; scalar_t__ af; scalar_t__ proto; int rule_flag; int tos; scalar_t__ os_fingerprint; int prob; scalar_t__ action; scalar_t__ log; scalar_t__ quick; int * anchor; scalar_t__ match_tag; scalar_t__ code; scalar_t__ type; scalar_t__ flagset; TYPE_9__ dst; TYPE_6__ src; TYPE_3__* skip; int kif; int evaluations; } ;
struct pf_pdesc {scalar_t__ af; scalar_t__ proto; int tos; int sc; int pf_mtag; int dst; int src; } ;
typedef scalar_t__ sa_family_t ;
typedef int pbuf_t ;
struct TYPE_14__ {struct pf_rule* ptr; } ;
struct TYPE_12__ {int ptr; } ;
struct TYPE_13__ {TYPE_1__ active; } ;
struct TYPE_11__ {TYPE_2__* rules; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pfi_kif*,void*,int *,scalar_t__,int,int ,struct pf_rule*,struct pf_rule*,struct pf_ruleset*,struct pf_pdesc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__,int ,struct pfi_kif*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int VAR_20 ;
 struct pf_rule* FUNC_4 (int ) ;
 struct pf_rule* FUNC_5 (struct pf_rule*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_10__ VAR_23 ;
 int FUNC_6 (struct pf_rule*,int ,int*) ;
 int FUNC_7 (int*,struct pf_ruleset**,size_t,struct pf_rule**,struct pf_rule**,int*) ;
 scalar_t__ FUNC_8 (int*,struct pf_ruleset**,size_t,struct pf_rule**,struct pf_rule**,int*) ;
 scalar_t__ FUNC_9 (int *,int ,int,int,int *) ;
 scalar_t__ FUNC_10 (int ,struct pfi_kif*) ;

__attribute__((used)) static int
FUNC_11(struct pf_rule **VAR_24, int VAR_25, struct pfi_kif *VAR_26,
    pbuf_t *VAR_27, void *VAR_28, struct pf_pdesc *VAR_29, struct pf_rule **VAR_30,
    struct pf_ruleset **VAR_31)
{
#pragma unused(h)
 struct pf_rule *VAR_32, *VAR_33 = ((void*)0);
 struct pf_ruleset *VAR_34 = ((void*)0);
 sa_family_t VAR_35 = VAR_29->af;
 u_short VAR_36;
 int VAR_37 = -1;
 int VAR_38 = 0;
 int VAR_39 = 0;

 VAR_32 = FUNC_4(VAR_23.rules[VAR_13].active.ptr);
 while (VAR_32 != ((void*)0)) {
  VAR_32->evaluations++;
  if (FUNC_10(VAR_32->kif, VAR_26) == VAR_32->ifnot)
   VAR_32 = VAR_32->skip[VAR_17].ptr;
  else if (VAR_32->direction && VAR_32->direction != VAR_25)
   VAR_32 = VAR_32->skip[VAR_15].ptr;
  else if (VAR_32->af && VAR_32->af != VAR_35)
   VAR_32 = VAR_32->skip[VAR_14].ptr;
  else if (VAR_32->proto && VAR_32->proto != VAR_29->proto)
   VAR_32 = VAR_32->skip[VAR_18].ptr;
  else if (FUNC_1(&VAR_32->src.addr, VAR_29->src, VAR_35,
      VAR_32->src.neg, VAR_26))
   VAR_32 = VAR_32->skip[VAR_19].ptr;
  else if (FUNC_1(&VAR_32->dst.addr, VAR_29->dst, VAR_35,
      VAR_32->dst.neg, ((void*)0)))
   VAR_32 = VAR_32->skip[VAR_16].ptr;
                else if ((VAR_32->rule_flag & VAR_9) && VAR_32->tos &&
      !(VAR_32->tos & VAR_29->tos))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
                else if ((VAR_32->rule_flag & VAR_7) && VAR_32->tos &&
      !(VAR_32->tos & (VAR_29->tos & VAR_0)))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
                else if ((VAR_32->rule_flag & VAR_8) && VAR_32->tos &&
      ((VAR_32->tos & VAR_20) != VAR_29->sc))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else if (VAR_32->os_fingerprint != VAR_11)
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else if (VAR_29->proto == VAR_4 &&
      (VAR_32->src.xport.range.op || VAR_32->dst.xport.range.op))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else if (VAR_29->proto == VAR_3 &&
      (VAR_32->src.xport.range.op || VAR_32->dst.xport.range.op ||
      VAR_32->flagset))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else if ((VAR_29->proto == VAR_1 ||
      VAR_29->proto == VAR_2) &&
      (VAR_32->type || VAR_32->code))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else if (VAR_32->prob && VAR_32->prob <= (FUNC_3() % (VAR_21 - 1) + 1))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else if (VAR_32->match_tag && !FUNC_6(VAR_32, VAR_29->pf_mtag, &VAR_37))
   VAR_32 = FUNC_5(VAR_32, VAR_22);
  else {
   if (VAR_32->anchor == ((void*)0)) {
    VAR_39 = 1;
    *VAR_24 = VAR_32;
    *VAR_30 = VAR_33;
    *VAR_31 = VAR_34;
    if ((*VAR_24)->quick)
     break;
    VAR_32 = FUNC_5(VAR_32, VAR_22);
   } else
    FUNC_7(&VAR_38, &VAR_34,
        VAR_13, &VAR_32, &VAR_33, &VAR_39);
  }
  if (VAR_32 == ((void*)0) && FUNC_8(&VAR_38, &VAR_34,
      VAR_13, &VAR_32, &VAR_33, &VAR_39))
   break;
 }
 VAR_32 = *VAR_24;
 VAR_33 = *VAR_30;
 VAR_34 = *VAR_31;

 FUNC_2(&VAR_36, VAR_5);

 if (VAR_32->log)
  FUNC_0(VAR_26, VAR_28, VAR_27, VAR_35, VAR_25, VAR_36, VAR_32, VAR_33, VAR_34,
      VAR_29);

 if (VAR_32->action != VAR_12)
  return (VAR_10);

 if (FUNC_9(VAR_27, VAR_29->pf_mtag, VAR_37, -1, ((void*)0))) {
  FUNC_2(&VAR_36, VAR_6);
  return (VAR_10);
 }

 return (VAR_12);
}
