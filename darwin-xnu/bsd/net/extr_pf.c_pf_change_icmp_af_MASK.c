
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_pdesc {int off; int tot_len; int ttl; int proto; } ;
struct pf_addr {int v6addr; int v4addr; } ;
struct ip6_hdr {int ip_hl; int ip6_dst; int ip6_src; int ip6_hlim; int ip6_nxt; void* ip6_plen; int ip6_vfc; int ip_sum; int ip_dst; int ip_src; int ip_p; int ip_ttl; void* ip_off; void* ip_id; void* ip_len; int ip_v; } ;
struct ip {int ip_hl; int ip6_dst; int ip6_src; int ip6_hlim; int ip6_nxt; void* ip6_plen; int ip6_vfc; int ip_sum; int ip_dst; int ip_src; int ip_p; int ip_ttl; void* ip_off; void* ip_id; void* ip_len; int ip_v; } ;
typedef scalar_t__ sa_family_t ;
typedef int pbuf_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ip6_hdr*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int) ;
 void* FUNC_4 (int *,int,int,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(pbuf_t *VAR_7, int VAR_8,
 struct pf_pdesc *VAR_9, struct pf_pdesc *VAR_10, struct pf_addr *VAR_11,
 struct pf_addr *VAR_12, sa_family_t VAR_13, sa_family_t VAR_14)
{
 struct ip *VAR_15 = ((void*)0);
 struct ip6_hdr *VAR_16 = ((void*)0);
 void *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_13 == VAR_14 || (VAR_13 != 129 && VAR_13 != 128) ||
     (VAR_14 != 129 && VAR_14 != 128))
  return (-1);


 VAR_19 = VAR_10->off - VAR_8;

 VAR_18 = VAR_14 == 129 ? sizeof(*VAR_15) : sizeof(*VAR_16);


 VAR_17 = FUNC_4(VAR_7, VAR_8, VAR_19, VAR_18);
 if (VAR_17 == ((void*)0))
  return (-1);


 switch (VAR_14) {
 case 129:
  VAR_15 = VAR_17;
  FUNC_0(VAR_15, sizeof(*VAR_15));
  VAR_15->ip_v = VAR_4;
  VAR_15->ip_hl = sizeof(*VAR_15) >> 2;
  VAR_15->ip_len = FUNC_1(sizeof(*VAR_15) + VAR_10->tot_len - VAR_19);
  VAR_15->ip_id = VAR_6 ? 0 : FUNC_1(FUNC_2());
  VAR_15->ip_off = FUNC_1(VAR_5);
  VAR_15->ip_ttl = VAR_10->ttl;
  if (VAR_10->proto == VAR_1)
   VAR_15->ip_p = VAR_0;
  else
   VAR_15->ip_p = VAR_10->proto;
  VAR_15->ip_src = VAR_11->v4addr;
  VAR_15->ip_dst = VAR_12->v4addr;
  VAR_15->ip_sum = FUNC_3(VAR_7, 0, 0, VAR_15->ip_hl << 2);
  break;
 case 128:
  VAR_16 = VAR_17;
  FUNC_0(VAR_16, sizeof(*VAR_16));
  VAR_16->ip6_vfc = VAR_3;
  VAR_16->ip6_plen = FUNC_1(VAR_10->tot_len - VAR_19);
  if (VAR_10->proto == VAR_0)
   VAR_16->ip6_nxt = VAR_1;
  else
   VAR_16->ip6_nxt = VAR_10->proto;
  if (!VAR_10->ttl || VAR_10->ttl > VAR_2)
   VAR_16->ip6_hlim = VAR_2;
  else
   VAR_16->ip6_hlim = VAR_10->ttl;
  VAR_16->ip6_src = VAR_11->v6addr;
  VAR_16->ip6_dst = VAR_12->v6addr;
  break;
 }


 VAR_10->off += VAR_18 - VAR_19;
 VAR_9->tot_len += VAR_18 - VAR_19;

 return (0);
}
