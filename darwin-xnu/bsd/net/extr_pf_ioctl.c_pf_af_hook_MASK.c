
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_flags; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct ip_fw_args {int dummy; } ;
struct ifnet {int dummy; } ;
typedef scalar_t__ net_thread_marks_t ;




 scalar_t__ FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ifnet* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ifnet*,struct mbuf**,int,struct ip_fw_args*) ;
 int FUNC_9 (struct ifnet*,struct mbuf**,int,struct ip_fw_args*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_10(struct ifnet *VAR_8, struct mbuf **VAR_9, struct mbuf **VAR_10,
    unsigned int VAR_11, int VAR_12, struct ip_fw_args *VAR_13)
{
 int VAR_14 = 0;
 struct mbuf *VAR_15;
 net_thread_marks_t VAR_16;
 struct ifnet * VAR_17 = VAR_8;


 if (!VAR_2 && VAR_8 && FUNC_0(VAR_8))
  return (0);

 VAR_16 = FUNC_7(VAR_0);

 if (VAR_16 != VAR_4) {
  FUNC_5(VAR_7);
  if (!VAR_5)
   goto done;
  FUNC_2(VAR_6);
 }

 if (VAR_9 != ((void*)0) && *VAR_9 != ((void*)0))
  FUNC_1(*VAR_9 == *VAR_10);
 if ((VAR_15 = (*VAR_10)->m_nextpkt) != ((void*)0))
  (*VAR_10)->m_nextpkt = ((void*)0);
 if (VAR_12 && ((*VAR_10)->m_pkthdr.pkt_flags & VAR_1)) {
  VAR_17 = VAR_3;
 }

 switch (VAR_11) {
 default:
  break;
 }


 if (*VAR_10 != ((void*)0) && VAR_15 != ((void*)0)) {
  struct mbuf *VAR_18 = *VAR_10;
  while (VAR_18->m_nextpkt != ((void*)0))
   VAR_18 = VAR_18->m_nextpkt;
  VAR_18->m_nextpkt = VAR_15;
 }

 if (VAR_9 != ((void*)0)) {
  if (*VAR_10 != ((void*)0))
   *VAR_9 = *VAR_10;
  else
   *VAR_9 = VAR_15;
 }

 if (VAR_16 != VAR_4)
  FUNC_3(VAR_6);

done:
 if (VAR_16 != VAR_4)
  FUNC_4(VAR_7);

 FUNC_6(VAR_16);
 return (VAR_14);
}
