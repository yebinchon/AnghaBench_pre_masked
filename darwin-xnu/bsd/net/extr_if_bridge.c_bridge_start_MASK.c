
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 scalar_t__ FUNC_1 (struct ifnet*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_0)
{
 struct mbuf *VAR_1;

 for (;;) {
  if (FUNC_1(VAR_0, &VAR_1) != 0)
   break;

  (void) FUNC_0(VAR_0, VAR_1);
 }
}
