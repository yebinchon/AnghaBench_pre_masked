
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_5__ {uintptr_t drv_tx_compl_arg; uintptr_t drv_tx_compl_data; } ;
struct TYPE_6__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

errno_t
FUNC_1(mbuf_t VAR_2, uintptr_t VAR_3, uintptr_t VAR_4)
{
 if (VAR_2 == ((void*)0) || !(VAR_2->m_flags & VAR_1))
  return (VAR_0);

 FUNC_0(VAR_2);

 VAR_2->m_pkthdr.drv_tx_compl_arg = VAR_3;
 VAR_2->m_pkthdr.drv_tx_compl_data = VAR_4;

 return (0);
}
