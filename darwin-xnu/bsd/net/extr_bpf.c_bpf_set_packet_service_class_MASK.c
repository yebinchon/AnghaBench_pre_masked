
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct mbuf *VAR_1, int VAR_2)
{
 if (!(VAR_1->m_flags & VAR_0))
  return;

 FUNC_1(FUNC_0(VAR_2));
 (void) FUNC_2(VAR_1, FUNC_3(VAR_2));
}
