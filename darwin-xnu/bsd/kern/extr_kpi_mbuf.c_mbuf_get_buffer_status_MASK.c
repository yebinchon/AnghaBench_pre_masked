
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
struct TYPE_8__ {int buf_sndbuf; int buf_interface; } ;
typedef TYPE_3__ mbuf_buffer_status_t ;
typedef int errno_t ;
struct TYPE_6__ {int pkt_flags; int bufstatus_sndbuf; int bufstatus_if; } ;
struct TYPE_7__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

errno_t
FUNC_0(const mbuf_t VAR_3, mbuf_buffer_status_t *VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || !(VAR_3->m_flags & VAR_1) ||
     !(VAR_3->m_pkthdr.pkt_flags & VAR_2))
  return (VAR_0);

 VAR_4->buf_interface = VAR_3->m_pkthdr.bufstatus_if;
 VAR_4->buf_sndbuf = VAR_3->m_pkthdr.bufstatus_sndbuf;
 return (0);
}
