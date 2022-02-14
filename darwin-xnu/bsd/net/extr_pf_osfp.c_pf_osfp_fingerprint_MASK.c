
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int th_off; } ;
struct pf_pdesc {scalar_t__ proto; int af; } ;
struct pf_osfp_enlist {int dummy; } ;
struct ip6_hdr {int dummy; } ;
typedef struct ip6_hdr ip ;
struct TYPE_4__ {struct ip6_hdr* pb_data; } ;
typedef TYPE_1__ pbuf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pf_osfp_enlist* FUNC_0 (struct ip6_hdr*,struct ip6_hdr*,struct tcphdr*) ;
 int FUNC_1 (TYPE_1__*,int,char*,int,int *,int *,int ) ;

struct pf_osfp_enlist *
FUNC_2(struct pf_pdesc *VAR_3, pbuf_t *VAR_4, int VAR_5,
    const struct tcphdr *VAR_6)
{
 struct ip *VAR_7;
 struct ip6_hdr *VAR_8;
 char VAR_9[60];

 if ((VAR_3->af != VAR_1 && VAR_3->af != VAR_2) ||
     VAR_3->proto != VAR_0 ||
     (VAR_6->th_off << 2) < (int)sizeof (*VAR_6))
  return (((void*)0));

 if (VAR_3->af == VAR_1) {
  VAR_7 = VAR_4->pb_data;
  VAR_8 = (struct ip6_hdr *)((void*)0);
 } else {
  VAR_7 = (struct ip *)((void*)0);
  VAR_8 = VAR_4->pb_data;
 }
 if (!FUNC_1(VAR_4, VAR_5, VAR_9, VAR_6->th_off << 2, ((void*)0), ((void*)0),
     VAR_3->af))
  return (((void*)0));

 return (FUNC_0(VAR_7, VAR_8, (struct tcphdr *)(void *)VAR_9));
}
