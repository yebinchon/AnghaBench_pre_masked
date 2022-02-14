
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_8__ {int gid; int uid; int pid; } ;
struct TYPE_7__ {TYPE_2__* udp; TYPE_1__* tcp; } ;
struct pf_pdesc {int proto; int af; TYPE_4__ lookup; struct pf_addr* src; struct pf_addr* dst; TYPE_3__ hdr; } ;
struct in6_addr {int * s6_addr32; void** s6_addr16; } ;
struct pf_addr {struct in6_addr v6addr; int v4addr; } ;
struct inpcbinfo {int dummy; } ;
typedef int s6 ;
typedef int d6 ;
struct TYPE_6__ {int uh_dport; int uh_sport; } ;
struct TYPE_5__ {int th_dport; int th_sport; } ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct inpcbinfo*,struct in6_addr*,int ,struct in6_addr*,int ,int ,int *,int *,int *) ;
 int FUNC_2 (struct inpcbinfo*,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct in6_addr*,int ,int) ;
 struct inpcbinfo VAR_5 ;
 struct inpcbinfo VAR_6 ;

int
FUNC_5(int VAR_7, struct pf_pdesc *VAR_8)
{
 struct pf_addr *VAR_9, *VAR_10;
 u_int16_t VAR_11, VAR_12;
 struct inpcbinfo *VAR_13;
 int VAR_14 = 0;

 if (VAR_8 == ((void*)0))
  return (-1);
 VAR_8->lookup.uid = VAR_4;
 VAR_8->lookup.gid = VAR_0;
 VAR_8->lookup.pid = VAR_2;

 switch (VAR_8->proto) {
 case 129:
  if (VAR_8->hdr.tcp == ((void*)0))
   return (-1);
  VAR_11 = VAR_8->hdr.tcp->th_sport;
  VAR_12 = VAR_8->hdr.tcp->th_dport;
  VAR_13 = &VAR_5;
  break;
 case 128:
  if (VAR_8->hdr.udp == ((void*)0))
   return (-1);
  VAR_11 = VAR_8->hdr.udp->uh_sport;
  VAR_12 = VAR_8->hdr.udp->uh_dport;
  VAR_13 = &VAR_6;
  break;
 default:
  return (-1);
 }
 if (VAR_7 == VAR_3) {
  VAR_9 = VAR_8->src;
  VAR_10 = VAR_8->dst;
 } else {
  u_int16_t VAR_15;

  VAR_15 = VAR_11;
  VAR_11 = VAR_12;
  VAR_12 = VAR_15;
  VAR_9 = VAR_8->dst;
  VAR_10 = VAR_8->src;
 }
 switch (VAR_8->af) {
 default:
  return (-1);
 }

 return (1);
}
