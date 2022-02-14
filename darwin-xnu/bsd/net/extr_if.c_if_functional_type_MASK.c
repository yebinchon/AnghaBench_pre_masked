
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_flags; scalar_t__ if_subfamily; int if_eflags; scalar_t__ if_type; scalar_t__ if_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

u_int32_t
FUNC_4(struct ifnet *VAR_15, bool VAR_16)
{
 u_int32_t VAR_17 = VAR_10;
 if (VAR_15 != ((void*)0)) {
  if (VAR_15->if_flags & VAR_1) {
   VAR_17 = VAR_9;
  } else if ((VAR_16 &&
      (VAR_15->if_subfamily == VAR_6)) ||
      (!VAR_16 && FUNC_2(VAR_15))) {
   if (VAR_15->if_eflags & VAR_0)
    VAR_17 = VAR_11;
   else
    VAR_17 = VAR_12;
  } else if ((VAR_16 &&
      (VAR_15->if_type == VAR_14)) ||
      (!VAR_16 && FUNC_0(VAR_15))) {
   VAR_17 = VAR_7;
  } else if (FUNC_1(VAR_15)) {
   VAR_17 = VAR_8;
  } else if ((VAR_16 &&
      (VAR_15->if_family == VAR_3 ||
      VAR_15->if_family == VAR_2 ||
      VAR_15->if_family == VAR_5 ||
      VAR_15->if_family == VAR_4)) ||
      (!VAR_16 && FUNC_3(VAR_15))) {
   VAR_17 = VAR_13;
  }
 }

 return (VAR_17);
}
