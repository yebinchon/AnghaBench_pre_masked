
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


union pf_state_xport {int port; } ;
typedef int u_short ;
typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct tcphdr {int th_flags; int th_off; scalar_t__ th_x2; scalar_t__ th_urp; void* th_sum; int th_ack; int th_dport; int th_sport; } ;
struct pfi_kif {int dummy; } ;
struct pf_ruleset {int dummy; } ;
struct TYPE_14__ {scalar_t__ op; } ;
struct TYPE_17__ {TYPE_5__ range; } ;
struct TYPE_15__ {TYPE_8__ xport; int neg; int addr; } ;
struct TYPE_13__ {TYPE_8__ xport; int neg; int addr; } ;
struct pf_rule {scalar_t__ ifnot; int direction; scalar_t__ af; scalar_t__ proto; scalar_t__ os_fingerprint; scalar_t__ action; int rule_flag; scalar_t__ log; scalar_t__ max_mss; int * bytes; int * packets; int * anchor; TYPE_7__* skip; TYPE_6__ dst; int proto_variant; TYPE_4__ src; int kif; int evaluations; } ;
struct TYPE_10__ {struct tcphdr* tcp; } ;
struct pf_pdesc {scalar_t__ af; scalar_t__ proto; int * mp; int flags; scalar_t__ tot_len; int dst; int src; TYPE_1__ hdr; } ;
typedef scalar_t__ sa_family_t ;
typedef int pbuf_t ;
struct TYPE_18__ {TYPE_3__* rules; } ;
struct TYPE_16__ {struct pf_rule* ptr; } ;
struct TYPE_11__ {int ptr; } ;
struct TYPE_12__ {TYPE_2__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfi_kif*,void*,int *,int ,int,int ,struct pf_rule*,int *,int *,struct pf_pdesc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__,int ,struct pfi_kif*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_2 (int *,int ) ;
 struct pf_rule* FUNC_3 (int ) ;
 struct pf_rule* FUNC_4 (struct pf_rule*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (int *,int,int,struct tcphdr*) ;
 void* FUNC_6 (void*,scalar_t__,scalar_t__,int ) ;
 int * FUNC_7 (struct pf_pdesc*,int *,int) ;
 TYPE_9__ VAR_26 ;
 int FUNC_8 (scalar_t__,int ,TYPE_8__*,union pf_state_xport*) ;
 int FUNC_9 (struct pf_rule*,int,struct pfi_kif*,struct pf_pdesc*,int *,struct tcphdr*,int,int*) ;
 int FUNC_10 (struct pf_pdesc*,int *,int,struct tcphdr*) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int*,struct pf_ruleset**,size_t,struct pf_rule**,int *,int *) ;
 scalar_t__ FUNC_13 (int*,struct pf_ruleset**,size_t,struct pf_rule**,int *,int *) ;
 scalar_t__ FUNC_14 (int ,struct pfi_kif*) ;

int
FUNC_15(int VAR_27, struct pfi_kif *VAR_28, pbuf_t *VAR_29, int VAR_30,
    int VAR_31, void *VAR_32, struct pf_pdesc *VAR_33)
{
#pragma unused(ipoff, h)
 struct pf_rule *VAR_34, *VAR_35 = ((void*)0);
 struct tcphdr *VAR_36 = VAR_33->hdr.tcp;
 int VAR_37 = 0;
 int VAR_38 = 0;
 u_short VAR_39;
 u_int8_t VAR_40;
 sa_family_t VAR_41 = VAR_33->af;
 struct pf_ruleset *VAR_42 = ((void*)0);
 union pf_state_xport VAR_43, VAR_44;

 VAR_43.port = VAR_36->th_sport;
 VAR_44.port = VAR_36->th_dport;

 VAR_34 = FUNC_3(VAR_26.rules[VAR_10].active.ptr);
 while (VAR_34 != ((void*)0)) {
  VAR_34->evaluations++;
  if (FUNC_14(VAR_34->kif, VAR_28) == VAR_34->ifnot)
   VAR_34 = VAR_34->skip[VAR_15].ptr;
  else if (VAR_34->direction && VAR_34->direction != VAR_27)
   VAR_34 = VAR_34->skip[VAR_12].ptr;
  else if (VAR_34->af && VAR_34->af != VAR_41)
   VAR_34 = VAR_34->skip[VAR_11].ptr;
  else if (VAR_34->proto && VAR_34->proto != VAR_33->proto)
   VAR_34 = VAR_34->skip[VAR_16].ptr;
  else if (FUNC_1(&VAR_34->src.addr, VAR_33->src, VAR_41,
      VAR_34->src.neg, VAR_28))
   VAR_34 = VAR_34->skip[VAR_17].ptr;
  else if (VAR_34->src.xport.range.op &&
      !FUNC_8(VAR_34->src.xport.range.op, VAR_34->proto_variant,
      &VAR_34->src.xport, &VAR_43))
   VAR_34 = VAR_34->skip[VAR_18].ptr;
  else if (FUNC_1(&VAR_34->dst.addr, VAR_33->dst, VAR_41,
      VAR_34->dst.neg, ((void*)0)))
   VAR_34 = VAR_34->skip[VAR_13].ptr;
  else if (VAR_34->dst.xport.range.op &&
      !FUNC_8(VAR_34->dst.xport.range.op, VAR_34->proto_variant,
      &VAR_34->dst.xport, &VAR_44))
   VAR_34 = VAR_34->skip[VAR_14].ptr;
  else if (VAR_34->os_fingerprint != VAR_7 &&
      !FUNC_11(FUNC_10(VAR_33, VAR_29, VAR_31, VAR_36),
      VAR_34->os_fingerprint))
   VAR_34 = FUNC_4(VAR_34, VAR_25);
  else {
   if (VAR_34->anchor == ((void*)0)) {
    VAR_35 = VAR_34;
    break;
   } else {
    FUNC_12(&VAR_38, &VAR_42,
        VAR_10, &VAR_34, ((void*)0), ((void*)0));
   }
  }
  if (VAR_34 == ((void*)0) && FUNC_13(&VAR_38, &VAR_42,
      VAR_10, &VAR_34, ((void*)0), ((void*)0)))
   break;
 }

 if (VAR_35 == ((void*)0) || VAR_35->action == VAR_6)
  return (VAR_9);
 else {
  VAR_34->packets[VAR_27 == VAR_8]++;
  VAR_34->bytes[VAR_27 == VAR_8] += VAR_33->tot_len;
 }

 if (VAR_35->rule_flag & VAR_4)
  VAR_33->flags |= VAR_1;

 VAR_40 = VAR_36->th_flags;
 if (VAR_40 & VAR_23) {

  if (VAR_40 & VAR_22)
   goto tcp_drop;

  if (VAR_40 & VAR_20)
   VAR_40 &= ~VAR_20;
 } else {

  if (!(VAR_40 & (VAR_19|VAR_22)))
   goto tcp_drop;
 }

 if (!(VAR_40 & VAR_19)) {

  if ((VAR_40 & VAR_20) || (VAR_40 & VAR_21) || (VAR_40 & VAR_24))
   goto tcp_drop;
 }


 if (VAR_36->th_off < (sizeof (struct tcphdr) >> 2))
  goto tcp_drop;


 if (VAR_40 != VAR_36->th_flags || VAR_36->th_x2 != 0) {
  u_int16_t VAR_45, VAR_46;

  VAR_45 = *(u_int16_t *)(&VAR_36->th_ack + 1);
  VAR_36->th_flags = VAR_40;
  VAR_36->th_x2 = 0;
  VAR_46 = *(u_int16_t *)(&VAR_36->th_ack + 1);

  VAR_36->th_sum = FUNC_6(VAR_36->th_sum, VAR_45, VAR_46, 0);
  VAR_37 = 1;
 }


 if (!(VAR_40 & VAR_24) && VAR_36->th_urp) {
  VAR_36->th_sum = FUNC_6(VAR_36->th_sum, VAR_36->th_urp, 0, 0);
  VAR_36->th_urp = 0;
  VAR_37 = 1;
 }



 if (VAR_34->max_mss) {
  int VAR_47 = FUNC_9(VAR_34, VAR_27, VAR_28, VAR_33, VAR_29, VAR_36, VAR_31,
      &VAR_37);
  if (VAR_47 == VAR_5)
   return VAR_47;
  VAR_29 = VAR_33->mp;
 }

 if (VAR_37) {
  if (FUNC_7(VAR_33, VAR_29,
      VAR_31 + sizeof (*VAR_36)) == ((void*)0)) {
   FUNC_2(&VAR_39, VAR_2);
   if (VAR_34->log)
    FUNC_0(VAR_28, VAR_32, VAR_29, VAR_0, VAR_27, VAR_39,
        VAR_34, 0, 0, VAR_33);
   return VAR_5;
  }

  FUNC_5(VAR_29, VAR_31, sizeof (*VAR_36), VAR_36);
 }

 return (VAR_9);

tcp_drop:
 FUNC_2(&VAR_39, VAR_3);
 if (VAR_35 != ((void*)0) && VAR_34->log)
  FUNC_0(VAR_28, VAR_32, VAR_29, VAR_0, VAR_27, VAR_39, VAR_34, ((void*)0), ((void*)0), VAR_33);
 return (VAR_5);
}
