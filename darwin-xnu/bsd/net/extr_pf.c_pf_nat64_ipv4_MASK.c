
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct udphdr {scalar_t__ uh_sum; } ;
struct TYPE_10__ {int v6addr; } ;
struct TYPE_9__ {int v6addr; } ;
struct pf_pdesc {int tos; scalar_t__ proto; TYPE_2__ ndaddr; TYPE_1__ naddr; int ttl; scalar_t__ tot_len; } ;
struct mbuf {int dummy; } ;
struct ip6_hdr {scalar_t__ ip6_nxt; int ip6_plen; int ip6_dst; int ip6_src; int ip6_hlim; int ip6_vfc; } ;
struct icmp6_hdr {void* icmp6_cksum; } ;
struct TYPE_11__ {int * pb_ifp; } ;
typedef TYPE_3__ pbuf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int) ;
 void* FUNC_5 (TYPE_3__*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int,int) ;
 struct mbuf* FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_8(pbuf_t *VAR_5, int VAR_6, struct pf_pdesc *VAR_7)
{
 struct ip6_hdr *VAR_8;
 struct mbuf *VAR_9;

 if (VAR_5->pb_ifp == ((void*)0))
  return (VAR_2);

 VAR_8 = (struct ip6_hdr *)FUNC_6(VAR_5, 0, VAR_6, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (VAR_2);

 VAR_8->ip6_vfc = FUNC_0((6 << 28) | (VAR_7->tos << 20));
 VAR_8->ip6_plen = FUNC_1(VAR_7->tot_len - VAR_6);
 VAR_8->ip6_nxt = VAR_7->proto;
 VAR_8->ip6_hlim = VAR_7->ttl;
 VAR_8->ip6_src = VAR_7->naddr.v6addr;
 VAR_8->ip6_dst = VAR_7->ndaddr.v6addr;


 if (VAR_7->proto == VAR_0) {
  struct icmp6_hdr *VAR_10;
  int VAR_11 = sizeof(*VAR_8);

  VAR_10 = (struct icmp6_hdr *)FUNC_4(VAR_5, VAR_11,
      sizeof(*VAR_10));
  if (VAR_10 == ((void*)0))
   return (VAR_2);

  VAR_10->icmp6_cksum = 0;
  VAR_10->icmp6_cksum = FUNC_5(VAR_5,
       VAR_0, VAR_11,
       FUNC_3(VAR_8->ip6_plen));
 } else if (VAR_7->proto == VAR_1) {
  struct udphdr *VAR_12;
  int VAR_13 = sizeof(*VAR_8);

  VAR_12 = (struct udphdr *)FUNC_4(VAR_5, VAR_13,
      sizeof(*VAR_12));
  if (VAR_12 == ((void*)0))
   return (VAR_2);

  if (VAR_12->uh_sum == 0)
   VAR_12->uh_sum = FUNC_5(VAR_5, VAR_1,
      VAR_13, FUNC_3(VAR_8->ip6_plen));
 }

 if ((VAR_9 = FUNC_7(VAR_5, VAR_4)) != ((void*)0))
  FUNC_2(VAR_9);

 return (VAR_3);
}
