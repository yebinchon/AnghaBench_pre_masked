
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct socket {int so_restrictions; } ;
struct mptses {size_t mpte_itfinfo_size; struct mpt_itf_info* mpte_itfinfo; } ;
struct mpt_itf_info {size_t ifindex; } ;
struct ifnet {int dummy; } ;


 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ifnet** VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mptses* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct mptses*) ;

void
FUNC_6(struct socket *VAR_4)
{
 struct mptses *VAR_5 = FUNC_4(VAR_4);
 uint32_t VAR_6;

 FUNC_5(VAR_5);

 FUNC_3();

 for (VAR_6 = 0; VAR_6 < VAR_5->mpte_itfinfo_size; VAR_6++) {
  struct mpt_itf_info *VAR_7 = &VAR_5->mpte_itfinfo[VAR_6];
  uint32_t VAR_8 = VAR_7->ifindex;
  struct ifnet *VAR_9;

  if (VAR_8 == VAR_0)
   continue;

  VAR_9 = VAR_3[VAR_8];
  if (VAR_9 == ((void*)0))
   continue;

  if (FUNC_1(VAR_9) &&
      (VAR_4->so_restrictions & VAR_2))
   VAR_7->ifindex = VAR_0;

  if (FUNC_0(VAR_9) &&
      (VAR_4->so_restrictions & VAR_1))
   VAR_7->ifindex = VAR_0;
 }

 FUNC_2();
}
