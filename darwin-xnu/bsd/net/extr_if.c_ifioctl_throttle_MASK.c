
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
struct proc {int dummy; } ;
struct ifnet {int dummy; } ;
struct if_throttlereq {int ifthr_level; } ;
typedef int ifthr_level ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct ifnet*,int *) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct proc*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_5(struct ifnet *VAR_1, u_long VAR_2, caddr_t VAR_3, struct proc *VAR_4)
{
 struct if_throttlereq *VAR_5 = (struct if_throttlereq *)(void *)VAR_3;
 u_int32_t VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_1 != ((void*)0));

 switch (VAR_2) {
 case 128: {



  if ((VAR_7 = FUNC_4(VAR_4)) != 0)
   break;

  FUNC_1(&VAR_5->ifthr_level, &VAR_6, sizeof (VAR_6));
  VAR_7 = FUNC_3(VAR_1, VAR_6);
  if (VAR_7 == VAR_0)
   VAR_7 = 0;
  break;
 }

 case 129: {
  if ((VAR_7 = FUNC_2(VAR_1, &VAR_6)) == 0) {
   FUNC_1(&VAR_6, &VAR_5->ifthr_level,
       sizeof (VAR_6));
  }
  break;
 }

 default:
  FUNC_0(0);

 }

 return (VAR_7);
}
