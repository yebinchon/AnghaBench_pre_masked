
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;
struct ipsec_tag {scalar_t__ history_count; int * socket; } ;


 int FUNC_0 (struct mbuf*,struct m_tag*) ;

__attribute__((used)) static void
FUNC_1(
 struct mbuf *VAR_0,
 struct ipsec_tag *VAR_1)
{
 if (VAR_1 && VAR_1->socket == ((void*)0) && VAR_1->history_count == 0) {
  FUNC_0(VAR_0, ((struct m_tag*)VAR_1) - 1);
 }
}
