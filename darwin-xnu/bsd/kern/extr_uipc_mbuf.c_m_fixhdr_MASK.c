
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u_int ;
struct TYPE_2__ {unsigned int len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct mbuf*,int *) ;

unsigned int
FUNC_2(struct mbuf *VAR_1)
{
 u_int VAR_2;

 FUNC_0(VAR_1->m_flags & VAR_0);

 VAR_2 = FUNC_1(VAR_1, ((void*)0));
 VAR_1->m_pkthdr.len = VAR_2;
 return (VAR_2);
}
