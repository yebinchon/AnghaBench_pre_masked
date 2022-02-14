
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mptcp_mpcapable_opt_common {int mmco_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(u_char *VAR_7)
{
 struct mptcp_mpcapable_opt_common *VAR_8 =
     (struct mptcp_mpcapable_opt_common *)VAR_7;



 if (!(VAR_8->mmco_flags & VAR_6))
  return (0);

 if (VAR_8->mmco_flags & (VAR_0 | VAR_1 | VAR_2 |
     VAR_3 | VAR_4 | VAR_5))
  return (0);

 return (1);
}
