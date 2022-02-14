
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
typedef int boolean_t ;
struct TYPE_4__ {int pkt_flags; scalar_t__ pkt_timestamp; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

errno_t
FUNC_0(mbuf_t VAR_5, u_int64_t *VAR_6, boolean_t *VAR_7)
{
 if (VAR_5 == ((void*)0) || !(VAR_5->m_flags & VAR_2) || VAR_6 == ((void*)0))
  return (VAR_0);

 if ((VAR_5->m_pkthdr.pkt_flags & VAR_3) == 0) {
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_1;
  *VAR_6 = 0;
 } else {
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_4;
  *VAR_6 = VAR_5->m_pkthdr.pkt_timestamp;
 }
 return (0);
}
