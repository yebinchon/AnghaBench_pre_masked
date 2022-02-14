
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;




 int FUNC_0 (struct mbuf*,size_t,int,int,int ) ;
 int FUNC_1 (struct mbuf*,size_t,int ) ;

void
FUNC_2(struct mbuf *VAR_0, u_int32_t VAR_1, size_t VAR_2)
{

 switch (VAR_1) {
 case 129:
  (void) FUNC_1(VAR_0, VAR_2, VAR_0->m_pkthdr.csum_flags);
  break;

 case 128:
  break;

 default:
  break;
 }
}
