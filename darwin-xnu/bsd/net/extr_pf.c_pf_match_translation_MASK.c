
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union pf_state_xport {int dummy; } pf_state_xport ;
struct TYPE_15__ {int * port; int op; } ;
union pf_rule_xport {TYPE_7__ range; } ;
struct pfi_kif {int dummy; } ;
struct pf_ruleset {int dummy; } ;
struct pf_addr_wrap {int dummy; } ;
struct pf_rule_addr {union pf_rule_xport xport; int neg; struct pf_addr_wrap addr; } ;
struct TYPE_13__ {TYPE_4__* cur; int * proxy_port; } ;
struct pf_rule {scalar_t__ action; scalar_t__ ifnot; int direction; scalar_t__ proto; scalar_t__ os_fingerprint; int tag; unsigned int rtableid; int * anchor; scalar_t__ match_tag; TYPE_6__* skip; int proto_variant; struct pf_rule_addr src; scalar_t__ af; int kif; int evaluations; struct pf_rule_addr dst; TYPE_5__ rpool; } ;
struct TYPE_9__ {int tcp; } ;
struct pf_pdesc {scalar_t__ proto; int pf_mtag; TYPE_1__ hdr; scalar_t__ af; } ;
struct pf_addr {int dummy; } ;
typedef int pbuf_t ;
struct TYPE_16__ {TYPE_3__* rules; } ;
struct TYPE_14__ {struct pf_rule* ptr; } ;
struct TYPE_12__ {struct pf_addr_wrap addr; } ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_11__ {TYPE_2__ active; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pf_addr_wrap*,struct pf_addr*,scalar_t__,int ,struct pfi_kif*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 struct pf_rule* FUNC_2 (int ) ;
 struct pf_rule* FUNC_3 (struct pf_rule*,int ) ;
 int VAR_19 ;
 int FUNC_4 (int ) ;
 TYPE_8__ VAR_20 ;
 int FUNC_5 (struct pf_rule*,int ,int*) ;
 int FUNC_6 (scalar_t__,int ,union pf_rule_xport*,union pf_state_xport*) ;
 int FUNC_7 (struct pf_pdesc*,int *,int,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int*,struct pf_ruleset**,int,struct pf_rule**,int *,int *) ;
 int FUNC_10 (int*,struct pf_ruleset**,int,struct pf_rule**,int *,int *) ;
 scalar_t__ FUNC_11 (int *,int ,int,unsigned int,int *) ;
 scalar_t__ FUNC_12 (int ,struct pfi_kif*) ;

__attribute__((used)) static struct pf_rule *
FUNC_13(struct pf_pdesc *VAR_21, pbuf_t *VAR_22, int VAR_23,
    int VAR_24, struct pfi_kif *VAR_25, struct pf_addr *VAR_26,
    union pf_state_xport *VAR_27, struct pf_addr *VAR_28,
    union pf_state_xport *VAR_29, int VAR_30)
{
 struct pf_rule *VAR_31, *VAR_32 = ((void*)0);
 struct pf_ruleset *VAR_33 = ((void*)0);
 int VAR_34 = -1;
 unsigned int VAR_35 = VAR_0;
 int VAR_36 = 0;

 VAR_31 = FUNC_2(VAR_20.rules[VAR_30].active.ptr);
 while (VAR_31 && VAR_32 == ((void*)0)) {
  struct pf_rule_addr *VAR_37 = ((void*)0), *VAR_38 = ((void*)0);
  struct pf_addr_wrap *VAR_39 = ((void*)0);
  struct pf_addr_wrap *VAR_40 = ((void*)0);
  union pf_rule_xport VAR_41;

  if (VAR_31->action == VAR_2 && VAR_24 == VAR_3) {
   VAR_37 = &VAR_31->dst;
   if (VAR_31->rpool.cur != ((void*)0))
    VAR_39 = &VAR_31->rpool.cur->addr;
  } else if (VAR_31->action == VAR_11 && VAR_24 == VAR_10) {
   VAR_38 = &VAR_31->src;
   VAR_37 = &VAR_31->dst;
   if (VAR_31->rpool.cur != ((void*)0)) {
    VAR_41.range.op = VAR_8;
    VAR_41.range.port[0] =
        FUNC_4(VAR_31->rpool.proxy_port[0]);
    VAR_40 = &VAR_31->rpool.cur->addr;
   }
  } else {
   VAR_37 = &VAR_31->src;
   VAR_38 = &VAR_31->dst;
  }

  VAR_31->evaluations++;
  if (FUNC_12(VAR_31->kif, VAR_25) == VAR_31->ifnot)
   VAR_31 = VAR_31->skip[VAR_16].ptr;
  else if (VAR_31->direction && VAR_31->direction != VAR_24)
   VAR_31 = VAR_31->skip[VAR_13].ptr;
  else if (VAR_31->af && VAR_31->af != VAR_21->af)
   VAR_31 = VAR_31->skip[VAR_12].ptr;
  else if (VAR_31->proto && VAR_31->proto != VAR_21->proto)
   VAR_31 = VAR_31->skip[VAR_17].ptr;
  else if (VAR_40 && FUNC_0(VAR_40, VAR_26, VAR_21->af, 0, ((void*)0)))
   VAR_31 = FUNC_3(VAR_31, VAR_19);
  else if (!VAR_40 && FUNC_0(&VAR_37->addr, VAR_26, VAR_21->af,
      VAR_37->neg, VAR_25))
   VAR_31 = FUNC_3(VAR_31, VAR_19);
  else if (VAR_40 && (!VAR_41.range.port[0] ||
      !FUNC_6(VAR_31->proto, VAR_31->proto_variant, &VAR_41,
      VAR_27)))
   VAR_31 = FUNC_3(VAR_31, VAR_19);
  else if (!VAR_40 && !FUNC_6(VAR_31->proto,
      VAR_31->proto_variant, &VAR_37->xport, VAR_27))
   VAR_31 = VAR_31->skip[VAR_37 == &VAR_31->src ? VAR_18 :
       VAR_15].ptr;
  else if (VAR_38 != ((void*)0) &&
      FUNC_0(&VAR_38->addr, VAR_28, VAR_21->af, VAR_38->neg, ((void*)0)))
   VAR_31 = VAR_31->skip[VAR_14].ptr;
  else if (VAR_39 != ((void*)0) && FUNC_0(VAR_39, VAR_28, VAR_21->af,
      0, ((void*)0)))
   VAR_31 = FUNC_3(VAR_31, VAR_19);
  else if (VAR_38 && !FUNC_6(VAR_31->proto, VAR_31->proto_variant,
      &VAR_38->xport, VAR_29))
   VAR_31 = VAR_31->skip[VAR_15].ptr;
  else if (VAR_31->match_tag && !FUNC_5(VAR_31, VAR_21->pf_mtag, &VAR_34))
   VAR_31 = FUNC_3(VAR_31, VAR_19);
  else if (VAR_31->os_fingerprint != VAR_9 && (VAR_21->proto !=
      VAR_1 || !FUNC_8(FUNC_7(VAR_21, VAR_22,
      VAR_23, VAR_21->hdr.tcp), VAR_31->os_fingerprint)))
   VAR_31 = FUNC_3(VAR_31, VAR_19);
  else {
   if (VAR_31->tag)
    VAR_34 = VAR_31->tag;
   if (FUNC_1(VAR_31->rtableid))
    VAR_35 = VAR_31->rtableid;
   if (VAR_31->anchor == ((void*)0)) {
    VAR_32 = VAR_31;
   } else
    FUNC_9(&VAR_36, &VAR_33, VAR_30,
        &VAR_31, ((void*)0), ((void*)0));
  }
  if (VAR_31 == ((void*)0))
   FUNC_10(&VAR_36, &VAR_33, VAR_30, &VAR_31,
       ((void*)0), ((void*)0));
 }
 if (FUNC_11(VAR_22, VAR_21->pf_mtag, VAR_34, VAR_35, ((void*)0)))
  return (((void*)0));
 if (VAR_32 != ((void*)0) && (VAR_32->action == VAR_5 ||
     VAR_32->action == VAR_7 || VAR_32->action == VAR_4 ||
     VAR_32->action == VAR_6))
  return (((void*)0));
 return (VAR_32);
}
