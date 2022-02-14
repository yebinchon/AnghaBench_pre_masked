
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int16_t ;
struct ifnet {int dummy; } ;
struct if_nsreq {int ifnsr_len; int ifnsr_flags; int ifnsr_data; int ifnsr_family; } ;
typedef int flags ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct ifnet*,int ,int*,int *,int ) ;
 int FUNC_3 (struct ifnet*,int ,int,int ,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
 struct if_nsreq *VAR_4 = (struct if_nsreq *)(void *)VAR_3;
 u_int16_t VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_1 != ((void*)0));

 switch (VAR_2) {
 case 128:
  if (VAR_4->ifnsr_len > sizeof (VAR_4->ifnsr_data)) {
   VAR_6 = VAR_0;
   break;
  }
  FUNC_1(&VAR_4->ifnsr_flags, &VAR_5, sizeof (VAR_5));
  VAR_6 = FUNC_3(VAR_1, VAR_4->ifnsr_family,
      VAR_4->ifnsr_len, VAR_5, VAR_4->ifnsr_data);
  break;

 case 129:
  VAR_4->ifnsr_len = sizeof (VAR_4->ifnsr_data);
  VAR_6 = FUNC_2(VAR_1, VAR_4->ifnsr_family,
      &VAR_4->ifnsr_len, &VAR_5, VAR_4->ifnsr_data);
  if (VAR_6 == 0)
   FUNC_1(&VAR_5, &VAR_4->ifnsr_flags, sizeof (VAR_5));
  else
   VAR_4->ifnsr_len = 0;
  break;

 default:
  FUNC_0(0);

 }

 return (VAR_6);
}
