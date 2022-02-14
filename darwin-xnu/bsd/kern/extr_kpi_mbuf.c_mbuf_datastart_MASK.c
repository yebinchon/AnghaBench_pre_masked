
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
struct TYPE_4__ {void* ext_buf; } ;
struct TYPE_5__ {int m_flags; void* m_pktdat; void* m_dat; TYPE_1__ m_ext; } ;


 int VAR_0 ;
 int VAR_1 ;

void *
FUNC_0(mbuf_t VAR_2)
{
 if (VAR_2->m_flags & VAR_0)
  return (VAR_2->m_ext.ext_buf);
 if (VAR_2->m_flags & VAR_1)
  return (VAR_2->m_pktdat);
 return (VAR_2->m_dat);
}
