
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ip6_hdr {int ip6_nxt; } ;
struct ip6_frag {int ip6f_offlg; int ip6f_nxt; } ;
struct ip6_ext {int ip6e_nxt; int ip6e_len; } ;
typedef int ip6e ;
typedef int ip6 ;
typedef int fh ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,int,int,int ) ;

int
FUNC_2(struct mbuf *VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 struct ip6_hdr VAR_6;
 struct ip6_ext VAR_7;
 struct ip6_frag VAR_8;


 FUNC_0(VAR_2 != ((void*)0));
 if ((VAR_2->m_flags & VAR_1) == 0 || VAR_2->m_pkthdr.len < VAR_3)
  return (-1);

 switch (VAR_4) {
 case 130:
  if (VAR_2->m_pkthdr.len < VAR_3 + sizeof (VAR_6))
   return (-1);
  FUNC_1(VAR_2, VAR_3, sizeof (VAR_6), (caddr_t)&VAR_6);
  if (VAR_5)
   *VAR_5 = VAR_6;
  VAR_3 += sizeof (VAR_6);
  return (VAR_3);

 case 133:




  if (VAR_2->m_pkthdr.len < VAR_3 + sizeof (VAR_8))
   return (-1);
  FUNC_1(VAR_2, VAR_3, sizeof (VAR_8), (caddr_t)&VAR_8);

  if (VAR_8.ip6f_offlg & VAR_0)
   return (-1);
  if (VAR_5)
   *VAR_5 = VAR_8.ip6f_nxt;
  VAR_3 += sizeof (struct ip6_frag);
  return (VAR_3);

 case 136:
  if (VAR_2->m_pkthdr.len < VAR_3 + sizeof (VAR_7))
   return (-1);
  FUNC_1(VAR_2, VAR_3, sizeof (VAR_7), (caddr_t)&VAR_7);
  if (VAR_5)
   *VAR_5 = VAR_7.ip6e_nxt;
  VAR_3 += (VAR_7.ip6e_len + 2) << 2;
  return (VAR_3);

 case 132:
 case 128:
 case 135:
  if (VAR_2->m_pkthdr.len < VAR_3 + sizeof (VAR_7))
   return (-1);
  FUNC_1(VAR_2, VAR_3, sizeof (VAR_7), (caddr_t)&VAR_7);
  if (VAR_5)
   *VAR_5 = VAR_7.ip6e_nxt;
  VAR_3 += (VAR_7.ip6e_len + 1) << 3;
  return (VAR_3);

 case 129:
 case 134:
 case 131:

  return (-1);

 default:
  return (-1);
 }
}
