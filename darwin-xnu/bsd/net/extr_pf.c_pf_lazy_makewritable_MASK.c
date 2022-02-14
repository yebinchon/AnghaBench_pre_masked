
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pf_pdesc {int lmw; int af; struct pf_addr* dst; struct pf_addr* src; int * ip_sum; int pf_mtag; TYPE_1__* mp; } ;
struct pf_addr {int dummy; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip {int ip_sum; int ip_dst; int ip_src; } ;
struct TYPE_5__ {void* pb_data; } ;
typedef TYPE_1__ pbuf_t ;




 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

void *
FUNC_3(struct pf_pdesc *VAR_0, pbuf_t *VAR_1, int VAR_2)
{
 void *VAR_3;

 if (VAR_0->lmw < 0)
  return (((void*)0));

 FUNC_0(VAR_1 == VAR_0->mp);

 VAR_3 = VAR_1->pb_data;
 if (VAR_2 > VAR_0->lmw) {
  if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) == ((void*)0))
   VAR_2 = -1;
  VAR_0->lmw = VAR_2;
  if (VAR_2 >= 0) {
   VAR_0->pf_mtag = FUNC_2(VAR_1);

   switch (VAR_0->af) {
   case 129: {
    struct ip *VAR_4 = VAR_3;
    VAR_0->src = (struct pf_addr *)(uintptr_t)&VAR_4->ip_src;
    VAR_0->dst = (struct pf_addr *)(uintptr_t)&VAR_4->ip_dst;
    VAR_0->ip_sum = &VAR_4->ip_sum;
    break;
   }
   }
  }
 }

 return (VAR_2 < 0 ? ((void*)0) : VAR_3);
}
