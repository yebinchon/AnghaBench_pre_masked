
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int pkt_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

errno_t
FUNC_0(const mbuf_t VAR_3, u_int32_t *VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || !(VAR_3->m_flags & VAR_1))
  return (VAR_0);
 if (VAR_3->m_pkthdr.pkt_flags & VAR_2)
  *VAR_4 = 1;
 else
  *VAR_4 = 0;
 return (0);
}
