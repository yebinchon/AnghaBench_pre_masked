
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ m_data; } ;


 int FUNC_0 (struct mbuf*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int) ;

void
FUNC_3(struct mbuf *VAR_0, int VAR_1)
{
 int VAR_2 = 0;


 FUNC_2(VAR_0->m_data == FUNC_1(VAR_0));
 FUNC_2(VAR_1 >= 0);
 FUNC_2(VAR_1 <= FUNC_0(VAR_0));
 VAR_2 = FUNC_0(VAR_0) - VAR_1;
 VAR_0->m_data += VAR_2 &~ (sizeof(long) - 1);
}
