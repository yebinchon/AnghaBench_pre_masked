
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
typedef TYPE_2__* mbuf_t ;
typedef int errno_t ;
struct TYPE_4__ {int vlan_tag; int csum_flags; } ;
struct TYPE_5__ {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;

errno_t
FUNC_0(
 mbuf_t VAR_1,
 u_int16_t VAR_2)
{
 VAR_1->m_pkthdr.csum_flags |= VAR_0;
 VAR_1->m_pkthdr.vlan_tag = VAR_2;

 return (0);
}
