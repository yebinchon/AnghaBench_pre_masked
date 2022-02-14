
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 scalar_t__ FUNC_6 (struct inpcb*) ;
 scalar_t__ FUNC_7 (struct inpcb*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_9(struct inpcb *VAR_3, struct ifnet *VAR_4)
{
 FUNC_8(VAR_3 != ((void*)0));




 if (!VAR_2)
  return (VAR_0);

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 if (FUNC_1(VAR_4) && FUNC_6(VAR_3))
  return (VAR_1);

 if (FUNC_2(VAR_4) && FUNC_7(VAR_3))
  return (VAR_1);

 if (FUNC_0(VAR_4) && !FUNC_4(VAR_3))
  return (VAR_1);

 if (FUNC_3(VAR_4) && !FUNC_5(VAR_3))
  return (VAR_1);

 return (VAR_0);
}
