
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int v4addr; } ;
struct TYPE_9__ {int v4addr; } ;
struct pf_pdesc {int tos; int tot_len; scalar_t__ proto; TYPE_2__ ndaddr; TYPE_1__ naddr; int ttl; } ;
struct mbuf {int dummy; } ;
struct ip {int ip_v; int ip_hl; int ip_tos; scalar_t__ ip_p; void* ip_len; void* ip_sum; int ip_dst; int ip_src; int ip_ttl; void* ip_off; scalar_t__ ip_id; } ;
struct icmp {void* icmp_cksum; } ;
struct TYPE_11__ {int * pb_ifp; } ;
typedef TYPE_3__ pbuf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ) ;
 void* FUNC_5 (TYPE_3__*,int ,int,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int,int) ;
 struct mbuf* FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_8(pbuf_t *VAR_6, int VAR_7, struct pf_pdesc *VAR_8)
{
 struct ip *VAR_9;
 struct mbuf *VAR_10;
 if (VAR_6->pb_ifp == ((void*)0))
  return (VAR_3);

 VAR_9 = (struct ip *)FUNC_6(VAR_6, 0, VAR_7, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (VAR_3);

 VAR_9->ip_v = 4;
 VAR_9->ip_hl = 5;
 VAR_9->ip_tos = VAR_8->tos & FUNC_0(0x0ff00000);
 VAR_9->ip_len = FUNC_1(sizeof(*VAR_9) + (VAR_8->tot_len - VAR_7));
 VAR_9->ip_id = 0;
 VAR_9->ip_off = FUNC_1(VAR_2);
 VAR_9->ip_ttl = VAR_8->ttl;
 VAR_9->ip_p = VAR_8->proto;
 VAR_9->ip_sum = 0;
 VAR_9->ip_src = VAR_8->naddr.v4addr;
 VAR_9->ip_dst = VAR_8->ndaddr.v4addr;
 VAR_9->ip_sum = FUNC_5(VAR_6, 0, 0, VAR_9->ip_hl << 2);


 if (VAR_8->proto == VAR_1) {
  struct icmp *VAR_11;
  int VAR_12 = sizeof(*VAR_9);

  VAR_11 = (struct icmp *)FUNC_4(VAR_6, VAR_12,
      VAR_0);
  if (VAR_11 == ((void*)0))
   return (VAR_3);

  VAR_11->icmp_cksum = 0;
  VAR_11->icmp_cksum = FUNC_5(VAR_6, 0, VAR_12,
      FUNC_3(VAR_9->ip_len) - VAR_12);
 }

 if ((VAR_10 = FUNC_7(VAR_6, VAR_5)) != ((void*)0))
  FUNC_2(VAR_10);

 return (VAR_4);
}
