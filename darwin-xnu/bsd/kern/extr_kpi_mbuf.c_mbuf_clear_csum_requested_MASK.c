
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int csum_flags; scalar_t__ csum_data; } ;
struct TYPE_5__ {TYPE_1__ m_pkthdr; } ;



errno_t
FUNC_0(
 mbuf_t VAR_0)
{
 VAR_0->m_pkthdr.csum_flags &= 0xffff0000;
 VAR_0->m_pkthdr.csum_data = 0;

 return (0);
}
