
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int pkt_flags; uintptr_t drv_tx_compl_arg; uintptr_t drv_tx_compl_data; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

errno_t
FUNC_0(mbuf_t VAR_3, uintptr_t *VAR_4, uintptr_t *VAR_5)
{
 if (VAR_3 == ((void*)0) || !(VAR_3->m_flags & VAR_1) || VAR_4 == ((void*)0) ||
     VAR_5 == ((void*)0))
  return (VAR_0);

 if ((VAR_3->m_pkthdr.pkt_flags & VAR_2) == 0) {
  *VAR_4 = 0;
  *VAR_5 = 0;
 } else {
  *VAR_4 = VAR_3->m_pkthdr.drv_tx_compl_arg;
  *VAR_5 = VAR_3->m_pkthdr.drv_tx_compl_data;
 }
 return (0);
}
