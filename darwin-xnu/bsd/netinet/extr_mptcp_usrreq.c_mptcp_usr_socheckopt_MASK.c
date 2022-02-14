
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_level; int sopt_name; int sopt_valsize; } ;
struct socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_3, struct sockopt *VAR_4)
{
#pragma unused(mp_so)
 int VAR_5 = 0;

 FUNC_0(VAR_4->sopt_level == VAR_2);
 switch (VAR_4->sopt_name) {
 case 155:
 case 154:
 case 129:
 case 145:
 case 144:
 case 160:
 case 134:
 case 140:
 case 133:
 case 139:
 case 132:
 case 138:
 case 150:
 case 147:
 case 149:
 case 156:
 case 143:
 case 163:
 case 158:
 case 130:
 case 162:
 case 161:







  break;

 case 164:
 case 157:
 case 128:
 case 141:
 case 131:
 case 136:
 case 142:
 case 137:
 case 135:
 case 159:
 case 146:
 case 148:
 case 153:






  if (VAR_4->sopt_valsize != sizeof (int))
   VAR_5 = VAR_0;
  break;

 default:



  VAR_5 = VAR_1;
  break;
 }

 return (VAR_5);
}
