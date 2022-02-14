
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mbuf {int dummy; } ;
struct m_tag {scalar_t__ m_tag_id; scalar_t__ m_tag_type; } ;
struct dn_pkt_tag {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 struct m_tag* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static struct dn_pkt_tag *
FUNC_3(struct mbuf *VAR_2)
{
    struct m_tag *VAR_3 = FUNC_1(VAR_2);

    if (!(VAR_3 != ((void*)0) &&
          VAR_3->m_tag_id == VAR_0 &&
          VAR_3->m_tag_type == VAR_1))
 FUNC_2("packet on dummynet queue w/o dummynet tag: 0x%llx",
     (uint64_t)FUNC_0(VAR_2));

    return (struct dn_pkt_tag *)(VAR_3+1);
}
