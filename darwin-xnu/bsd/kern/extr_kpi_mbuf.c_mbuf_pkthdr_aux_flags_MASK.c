
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_2__* mbuf_t ;
typedef int mbuf_pkthdr_aux_flags_t ;
typedef int errno_t ;
struct TYPE_4__ {int pkt_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

errno_t
FUNC_1(mbuf_t VAR_7, mbuf_pkthdr_aux_flags_t *VAR_8)
{
 u_int32_t VAR_9;

 if (VAR_7 == ((void*)0) || !(VAR_7->m_flags & VAR_3) || VAR_8 == ((void*)0))
  return (VAR_0);

 *VAR_8 = 0;
 VAR_9 = VAR_7->m_pkthdr.pkt_flags;
 if ((VAR_9 & (VAR_5|VAR_6)) ==
     (VAR_5|VAR_6))
  *VAR_8 |= VAR_2;
 if ((VAR_9 & (VAR_4|VAR_6)) ==
     (VAR_4|VAR_6))
  *VAR_8 |= VAR_1;


 FUNC_0((*VAR_8 &
     (VAR_2 | VAR_1)) !=
     (VAR_2 | VAR_1));

 return (0);
}
