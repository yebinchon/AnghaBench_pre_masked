
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_level; scalar_t__ sopt_dir; int sopt_name; } ;
struct mptses {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct mptses*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct mptses *VAR_5, struct sockopt *VAR_6, int *VAR_7)
{
 int VAR_8 = 0;

 FUNC_0(VAR_6->sopt_level == VAR_1);
 FUNC_0(VAR_6->sopt_dir == VAR_2);
 FUNC_1(VAR_5);


 switch (VAR_6->sopt_name) {
 case 131:
 case 128:
 case 132:
 case 133:
 case 135:
 case 129:
 case 130:
 case 137:
 case 136:
 case 139:
 case 140:
  *VAR_7 = 0;
  break;

 case 134:
  *VAR_7 = VAR_3;
  break;

 case 138:
  *VAR_7 = VAR_4;
  break;

 default:
  VAR_8 = VAR_0;
  break;
 }
 return (VAR_8);
}
