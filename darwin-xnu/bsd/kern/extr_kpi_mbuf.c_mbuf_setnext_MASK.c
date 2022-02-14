
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {scalar_t__ m_type; struct TYPE_4__* m_next; int * m_nextpkt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

errno_t
FUNC_0(mbuf_t VAR_2, mbuf_t VAR_3)
{
 if (VAR_3 && ((VAR_3)->m_nextpkt != ((void*)0) ||
     (VAR_3)->m_type == VAR_1))
  return (VAR_0);
 VAR_2->m_next = VAR_3;

 return (0);
}
