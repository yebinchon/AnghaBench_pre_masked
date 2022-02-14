
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ pkt_timestamp; int pkt_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

errno_t
FUNC_0(mbuf_t VAR_4, u_int64_t VAR_5, boolean_t VAR_6)
{
 if (VAR_4 == ((void*)0) || !(VAR_4->m_flags & VAR_2))
  return (VAR_0);

 if (VAR_6 == VAR_1) {
  VAR_4->m_pkthdr.pkt_flags &= ~VAR_3;
  VAR_4->m_pkthdr.pkt_timestamp = 0;
 } else {
  VAR_4->m_pkthdr.pkt_flags |= VAR_3;
  VAR_4->m_pkthdr.pkt_timestamp = VAR_5;
 }
 return (0);
}
