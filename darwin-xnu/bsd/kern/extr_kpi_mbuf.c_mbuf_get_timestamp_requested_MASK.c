
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
typedef int boolean_t ;
struct TYPE_4__ {int pkt_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

errno_t
FUNC_0(mbuf_t VAR_5, boolean_t *VAR_6)
{
 if (VAR_5 == ((void*)0) || !(VAR_5->m_flags & VAR_2))
  return (VAR_0);

 if ((VAR_5->m_pkthdr.pkt_flags & VAR_3) == 0) {
  *VAR_6 = VAR_1;
 } else {
  *VAR_6 = VAR_4;
 }
 return (0);
}
