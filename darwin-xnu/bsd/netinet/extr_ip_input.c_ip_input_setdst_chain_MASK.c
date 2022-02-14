
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct in_ifaddr {int dummy; } ;


 int FUNC_0 (struct mbuf*,int ,struct in_ifaddr*) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_0, uint32_t VAR_1, struct in_ifaddr *VAR_2)
{
 struct mbuf *VAR_3 = VAR_0;

 while (VAR_3) {
  FUNC_0(VAR_3, VAR_1, VAR_2);
  VAR_3 = FUNC_1(VAR_3);
 }
}
