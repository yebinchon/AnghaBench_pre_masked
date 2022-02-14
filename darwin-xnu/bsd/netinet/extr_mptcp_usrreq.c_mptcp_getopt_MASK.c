
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt {scalar_t__ sopt_level; int sopt_name; } ;
struct mptses {int mpte_svctype; int mpte_alternate_port; } ;
struct mptopt {int mpo_intval; } ;
struct TYPE_2__ {int so_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct mptses*,struct sockopt*,int*) ;
 int FUNC_1 (struct mptses*) ;
 struct mptopt* FUNC_2 (struct mptses*,struct sockopt*) ;
 TYPE_1__* FUNC_3 (struct mptses*) ;
 int FUNC_4 (struct sockopt*,int*,int) ;

__attribute__((used)) static int
FUNC_5(struct mptses *VAR_3, struct sockopt *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;






 if (VAR_4->sopt_level != VAR_1) {
  VAR_5 = VAR_0;
  goto out;
 }

 switch (VAR_4->sopt_name) {
 case 131:
 case 128:
 case 134:
 case 132:
 case 133:
 case 135:
 case 129:
 case 138:
 case 137:
 case 136:
 case 130:
 case 139:
 case 140:

  VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_6);
  break;
 default:

  VAR_5 = VAR_0;
  break;
 }

 switch (VAR_4->sopt_name) {
 case 130:
  if (FUNC_3(VAR_3)->so_flags & VAR_2)
   VAR_6 = FUNC_1(VAR_3);
  else
   VAR_6 = 0;
  goto out;
 case 139:
  VAR_6 = VAR_3->mpte_svctype;
  goto out;
 case 140:
  VAR_6 = VAR_3->mpte_alternate_port;
  goto out;
 }
 if (VAR_5 == 0) {
  struct mptopt *VAR_7;

  if ((VAR_7 = FUNC_2(VAR_3, VAR_4)) != ((void*)0))
   VAR_6 = VAR_7->mpo_intval;

  VAR_5 = FUNC_4(VAR_4, &VAR_6, sizeof (int));
 }
out:
 return (VAR_5);
}
