
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct s_p_tab {scalar_t__ p_num; } ;


 struct s_p_tab* VAR_0 ;

__attribute__((used)) static const struct s_p_tab *FUNC_0(u_short VAR_1)
{
 const struct s_p_tab *VAR_2 ;
 for (VAR_2 = VAR_0 ; VAR_2->p_num && VAR_2->p_num != VAR_1 ; VAR_2++)
  ;
 return(VAR_2->p_num ? VAR_2 : ((void*)0)) ;
}
