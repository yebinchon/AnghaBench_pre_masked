
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * mbuf_tx_compl_func ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int pkt_flags; int pkt_compl_callbacks; uintptr_t pkt_compl_context; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int) ;
 uintptr_t FUNC_2 (int *,int) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

errno_t
FUNC_4(mbuf_t VAR_8, uintptr_t *VAR_9,
    mbuf_tx_compl_func VAR_10)
{
 size_t VAR_11;

 if (VAR_8 == ((void*)0) || !(VAR_8->m_flags & VAR_2) || VAR_10 == ((void*)0) ||
     VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 == VAR_4)
  return (VAR_1);





 if ((VAR_8->m_pkthdr.pkt_flags & VAR_3) == 0) {
  VAR_8->m_pkthdr.pkt_compl_callbacks = 0;
  VAR_8->m_pkthdr.pkt_flags |= VAR_3;
  VAR_8->m_pkthdr.pkt_compl_context =
      FUNC_2(&VAR_6, 1);






 }
 VAR_8->m_pkthdr.pkt_compl_callbacks |= (1 << VAR_11);
 *VAR_9 = VAR_8->m_pkthdr.pkt_compl_context;

 return (0);
}
