
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; scalar_t__ m_data; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_0 ;
 struct mbuf* FUNC_2 (struct mbuf*,int,int) ;

struct mbuf *
FUNC_3(struct mbuf *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (FUNC_1(VAR_1) >= VAR_2 &&
     (!VAR_4 || FUNC_0((VAR_1->m_data - VAR_2), sizeof(u_int32_t)))) {
  VAR_1->m_data -= VAR_2;
  VAR_1->m_len += VAR_2;
 } else {
  VAR_1 = FUNC_2(VAR_1, VAR_2, VAR_3);
 }
 if ((VAR_1) && (VAR_1->m_flags & VAR_0))
  VAR_1->m_pkthdr.len += VAR_2;
 return (VAR_1);
}
