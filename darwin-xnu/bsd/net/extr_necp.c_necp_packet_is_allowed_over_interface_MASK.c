
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct ifnet*,scalar_t__,int *) ;

bool
FUNC_4(struct mbuf *VAR_2, struct ifnet *VAR_3)
{
 bool VAR_4 = VAR_0;
 u_int32_t VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 != 0 &&
  VAR_3 != ((void*)0)) {
  FUNC_1(&VAR_1);
  VAR_4 = FUNC_3(((void*)0), VAR_3, FUNC_2(VAR_2), ((void*)0));
  FUNC_0(&VAR_1);
 }
 return (VAR_4);
}
