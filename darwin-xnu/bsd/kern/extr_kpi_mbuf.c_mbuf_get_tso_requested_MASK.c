
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int mbuf_tso_request_flags_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int tso_segsz; int csum_flags; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

errno_t
FUNC_0(
 mbuf_t VAR_3,
 mbuf_tso_request_flags_t *VAR_4,
 u_int32_t *VAR_5)
{
 if (VAR_3 == ((void*)0) || (VAR_3->m_flags & VAR_1) == 0 ||
   VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_0);

 *VAR_4 = VAR_3->m_pkthdr.csum_flags;
 *VAR_4 &= VAR_2;
 if (*VAR_4 && VAR_5 != ((void*)0))
  *VAR_5 = VAR_3->m_pkthdr.tso_segsz;

 return (0);
}
