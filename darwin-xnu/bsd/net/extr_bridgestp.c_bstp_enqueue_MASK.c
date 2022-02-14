
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_1 (struct ifnet*,int,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_1, struct mbuf *VAR_2)
{
 errno_t VAR_3 = 0;
 u_int32_t VAR_4 = VAR_2->m_pkthdr.len;

 VAR_2->m_flags |= VAR_0;

 VAR_3 = FUNC_0(VAR_1, 0, VAR_2);
 if (VAR_3 == 0) {
  (void) FUNC_1(VAR_1, 1, VAR_4, 0);
 } else {
  (void) FUNC_1(VAR_1, 0, 0, 1);
 }
}
