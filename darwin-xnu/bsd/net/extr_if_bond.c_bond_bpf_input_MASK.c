
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ether_header {int dummy; } ;
typedef TYPE_2__* mbuf_t ;
typedef int ifnet_t ;
typedef int (* bpf_packet_func ) (int ,TYPE_2__*) ;
struct TYPE_9__ {int csum_flags; int vlan_tag; } ;
struct TYPE_10__ {int m_len; int m_data; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,struct ether_header const*,int ,int (*) (int ,TYPE_2__*)) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static __inline__ void
FUNC_2(ifnet_t VAR_2, mbuf_t VAR_3, const struct ether_header * VAR_4,
  bpf_packet_func VAR_5)
{
    if (VAR_5 != ((void*)0)) {
 if (VAR_3->m_pkthdr.csum_flags & VAR_0) {
     FUNC_0(VAR_2, VAR_3, VAR_4, VAR_3->m_pkthdr.vlan_tag, VAR_5);
 } else {

     VAR_3->m_data -= VAR_1;
     VAR_3->m_len += VAR_1;
     (*VAR_5)(VAR_2, VAR_3);
     VAR_3->m_data += VAR_1;
     VAR_3->m_len -= VAR_1;
 }
    }
    return;
}
