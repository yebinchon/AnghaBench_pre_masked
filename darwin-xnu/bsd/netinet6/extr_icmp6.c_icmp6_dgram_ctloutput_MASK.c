
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_level; int sopt_name; } ;
struct socket {int so_cred; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct socket*,struct sockopt*) ;
 int FUNC_1 (struct socket*,struct sockopt*) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(struct socket *VAR_4, struct sockopt *VAR_5)
{
 if (FUNC_2(VAR_4->so_cred))
  return FUNC_0(VAR_4, VAR_5);

 if (VAR_5->sopt_level == VAR_2) {
  switch (VAR_5->sopt_name) {
   case 157:
    return FUNC_0(VAR_4, VAR_5);
   default:
    return VAR_1;
  }
 }

 if (VAR_5->sopt_level != VAR_3)
  return VAR_0;

 switch (VAR_5->sopt_name) {
  case 130:
  case 149:
  case 128:
  case 129:
  case 133:
  case 134:
  case 135:
  case 138:
  case 137:
  case 147:
  case 146:
  case 148:
  case 141:
  case 142:
  case 140:
  case 144:
  case 143:
  case 136:
  case 145:
  case 132:
  case 131:
  case 152:
  case 153:
  case 155:
  case 154:
  case 156:
  case 151:
  case 150:
  case 139:

   return FUNC_1(VAR_4, VAR_5);

  default:
   return VAR_1;
 }
}
