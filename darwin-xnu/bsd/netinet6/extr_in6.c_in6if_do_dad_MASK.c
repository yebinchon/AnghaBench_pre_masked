
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_ifinfo {scalar_t__ initialized; int flags; } ;
struct ifnet {int if_flags; int if_eflags; scalar_t__ if_subfamily; int if_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 int VAR_8 ;
 struct nd_ifinfo* FUNC_0 (struct ifnet*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;

int
FUNC_2(
 struct ifnet *VAR_10)
{
 struct nd_ifinfo *VAR_11 = ((void*)0);

 if ((VAR_10->if_flags & VAR_3) != 0)
  return (0);

 VAR_11 = FUNC_0(VAR_10);
 FUNC_1((((void*)0) != VAR_11) && (VAR_9 == VAR_11->initialized));
 if (!(VAR_11->flags & VAR_8))
  return (0);
 if (VAR_10->if_eflags &
     (VAR_1|VAR_2|VAR_0))
  return (0);

 if (VAR_10->if_subfamily == VAR_6 ||
  VAR_10->if_subfamily == VAR_7) {




  return (0);
 }

 switch (VAR_10->if_type) {

 case 129:

 case 128:






  return (0);
 default:
  if ((VAR_10->if_flags & (VAR_5|VAR_4)) !=
      (VAR_5|VAR_4))
   return (0);

  return (1);
 }
}
